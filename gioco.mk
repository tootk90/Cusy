##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=gioco
ConfigurationName      :=Release
WorkspacePath          := "C:\Users\salvatore\OneDrive\dev\programmi_c"
ProjectPath            := "C:\Users\salvatore\Documents\GitHub\Cusy"
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=salvatore
Date                   :=15/06/2015
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=C:/mingw/bin/g++.exe
SharedObjectLinkerName :=C:/mingw/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="gioco.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/mingw/bin/windres.exe
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
AR       := C:/mingw/bin/ar.exe rcu
CXX      := C:/mingw/bin/g++.exe
CC       := C:/mingw/bin/gcc.exe
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/source_azioni.c$(ObjectSuffix) $(IntermediateDirectory)/source_game.c$(ObjectSuffix) $(IntermediateDirectory)/source_main.c$(ObjectSuffix) $(IntermediateDirectory)/source_mappa.c$(ObjectSuffix) $(IntermediateDirectory)/source_system.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Release"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/source_azioni.c$(ObjectSuffix): source/azioni.c $(IntermediateDirectory)/source_azioni.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/salvatore/Documents/GitHub/Cusy/source/azioni.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/source_azioni.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/source_azioni.c$(DependSuffix): source/azioni.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/source_azioni.c$(ObjectSuffix) -MF$(IntermediateDirectory)/source_azioni.c$(DependSuffix) -MM "source/azioni.c"

$(IntermediateDirectory)/source_azioni.c$(PreprocessSuffix): source/azioni.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/source_azioni.c$(PreprocessSuffix) "source/azioni.c"

$(IntermediateDirectory)/source_game.c$(ObjectSuffix): source/game.c $(IntermediateDirectory)/source_game.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/salvatore/Documents/GitHub/Cusy/source/game.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/source_game.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/source_game.c$(DependSuffix): source/game.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/source_game.c$(ObjectSuffix) -MF$(IntermediateDirectory)/source_game.c$(DependSuffix) -MM "source/game.c"

$(IntermediateDirectory)/source_game.c$(PreprocessSuffix): source/game.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/source_game.c$(PreprocessSuffix) "source/game.c"

$(IntermediateDirectory)/source_main.c$(ObjectSuffix): source/main.c $(IntermediateDirectory)/source_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/salvatore/Documents/GitHub/Cusy/source/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/source_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/source_main.c$(DependSuffix): source/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/source_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/source_main.c$(DependSuffix) -MM "source/main.c"

$(IntermediateDirectory)/source_main.c$(PreprocessSuffix): source/main.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/source_main.c$(PreprocessSuffix) "source/main.c"

$(IntermediateDirectory)/source_mappa.c$(ObjectSuffix): source/mappa.c $(IntermediateDirectory)/source_mappa.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/salvatore/Documents/GitHub/Cusy/source/mappa.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/source_mappa.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/source_mappa.c$(DependSuffix): source/mappa.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/source_mappa.c$(ObjectSuffix) -MF$(IntermediateDirectory)/source_mappa.c$(DependSuffix) -MM "source/mappa.c"

$(IntermediateDirectory)/source_mappa.c$(PreprocessSuffix): source/mappa.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/source_mappa.c$(PreprocessSuffix) "source/mappa.c"

$(IntermediateDirectory)/source_system.c$(ObjectSuffix): source/system.c $(IntermediateDirectory)/source_system.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/salvatore/Documents/GitHub/Cusy/source/system.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/source_system.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/source_system.c$(DependSuffix): source/system.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/source_system.c$(ObjectSuffix) -MF$(IntermediateDirectory)/source_system.c$(DependSuffix) -MM "source/system.c"

$(IntermediateDirectory)/source_system.c$(PreprocessSuffix): source/system.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/source_system.c$(PreprocessSuffix) "source/system.c"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Release/


