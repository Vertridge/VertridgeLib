workspace "VertridgeLib"
	architecture "x64"
	startproject "FunctionTester"

	configurations
	{
		"Debug",
		"Release"
	}

	flags
	{
		"MultiProcessorCompile"
	}
	

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- include directories
IncludeDir = {}

project "VertridgeLib"
	location "VertridgeLib"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
		"%{prj.name}/src/LexAndBison/**.y",
		"%{prj.name}/src/LexAndBison/**.l",
	}

	includedirs
	{
		"%{prj.name}/src"
	}

	libdirs 
	{

	}

	links
	{
		"kernel32.lib",
		"user32.lib",
		"gdi32.lib",
		"winspool.lib",
		"comdlg32.lib",
		"advapi32.lib",
		"shell32.lib",
		"ole32.lib",
		"oleaut32.lib",
		"uuid.lib",
		"odbc32.lib",
		"odbccp32.lib"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"PLATFORM_WINDOWS"
		}

		postbuildcommands
		{
			--("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Simulation")
		}

	filter "configurations:Debug"
		defines "DEBUG"
		symbols "On"
		buildoptions "/MDd"

	filter "configurations:Release"
		defines "RELEASE"
		optimize "On"
		buildoptions "/MD"

project "LibTester"
	location "LibTester"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
		"%{prj.name}/src/**.hpp"
	}
	
	includedirs
	{
		"VertridgeLib/src",
	}

	links
	{
		"VertridgeLib"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{

		}

	filter "configurations:Debug"
		defines "DEBUG"
		symbols "On"
		buildoptions "/MDd"

	filter "configurations:Release"
		defines "RELEASE"
		optimize "On"
		buildoptions "/MD"
