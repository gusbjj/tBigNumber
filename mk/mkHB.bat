@echo off
echo BATCH FILE FOR Harbour mingw32
rem ============================================================================
D:
CD D:\GitHub\tBigNumber\mk\
SET > env_mkHB.txt 
    SET HB_PATH=D:\GitHub\core\
    SET MinGW_PATH=D:\MinGW\bin\
    SET PATH=%_PATH%;%HB_PATH%
    SET PATH=%PATH%;%MinGW_PATH%
    SET HB_CPU=x86
    SET HB_PLATFORM=win
    SET HB_COMPILER=mingw
    SET HB_CCPATH=%MinGW_PATH%
    rem SET HB_BUILD_VERBOSE=yes
       D:
       CD %HB_PATH%
       IF "%1"=="-B" ( 
            IF EXIST ".\bin\win\mingw" (
                rmdir ".\bin\win\mingw" /s /q
            )                
            IF EXIST ".\lib\win\mingw" (
                rmdir ".\lib\win\mingw" /s /q
            )            
       )
       %HB_PATH%\win-make.exe -f MakeFile %1
D:
CD D:\GitHub\tBigNumber\mk\
for /f %%e in (env_mkHB.txt) do (
    SET %%e
)
DEL env_mkHB.txt
