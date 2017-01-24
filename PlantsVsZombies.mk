##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PlantsVsZombies
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/roney/Documents/MobileGamer/PlantsVsZombies/Game
ProjectPath            :=C:/Users/roney/Documents/MobileGamer/PlantsVsZombies/Game
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=roney
Date                   :=22/01/2017
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=clang++
SharedObjectLinkerName :=clang++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="PlantsVsZombies.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := clang++
CC       := clang
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := llvm-as


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/PlantsVsZombies_main.c$(ObjectSuffix) $(IntermediateDirectory)/PlantsVsZombies_Plants.cpp$(ObjectSuffix) $(IntermediateDirectory)/PlantsVsZombies_Zombies.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/PlantsVsZombies_main.c$(ObjectSuffix): ../../GitHub/MobileGamer/PlantsVsZombies/main.c 
	$(CC) $(SourceSwitch) "C:/Users/roney/Documents/MobileGamer/GitHub/MobileGamer/PlantsVsZombies/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PlantsVsZombies_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PlantsVsZombies_main.c$(PreprocessSuffix): ../../GitHub/MobileGamer/PlantsVsZombies/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PlantsVsZombies_main.c$(PreprocessSuffix) "../../GitHub/MobileGamer/PlantsVsZombies/main.c"

$(IntermediateDirectory)/PlantsVsZombies_Plants.cpp$(ObjectSuffix): ../../GitHub/MobileGamer/PlantsVsZombies/Plants.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/roney/Documents/MobileGamer/GitHub/MobileGamer/PlantsVsZombies/Plants.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PlantsVsZombies_Plants.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PlantsVsZombies_Plants.cpp$(PreprocessSuffix): ../../GitHub/MobileGamer/PlantsVsZombies/Plants.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PlantsVsZombies_Plants.cpp$(PreprocessSuffix) "../../GitHub/MobileGamer/PlantsVsZombies/Plants.cpp"

$(IntermediateDirectory)/PlantsVsZombies_Zombies.cpp$(ObjectSuffix): ../../GitHub/MobileGamer/PlantsVsZombies/Zombies.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/roney/Documents/MobileGamer/GitHub/MobileGamer/PlantsVsZombies/Zombies.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PlantsVsZombies_Zombies.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PlantsVsZombies_Zombies.cpp$(PreprocessSuffix): ../../GitHub/MobileGamer/PlantsVsZombies/Zombies.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PlantsVsZombies_Zombies.cpp$(PreprocessSuffix) "../../GitHub/MobileGamer/PlantsVsZombies/Zombies.cpp"

##
## Clean
##
clean:
	$(RM) -r ./Debug/


