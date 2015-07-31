@echo off
echo BATCH FILE FOR Harbour msvc64
rem ============================================================================
D:
CD D:\GitHub\tBigNumber\mk\
SET > env_mkLib64.txt
    SET HB_PATH=D:\GitHub\core\
    IF EXIST "c:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" (
        CALL "c:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" X64
        SET msvc64_PATH="C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\bin"
    ) ELSE IF EXIST "c:\Program Files (x86)\Microsoft Visual Studio 13.0\VC\vcvarsall.bat" (
        CALL "c:\Program Files (x86)\Microsoft Visual Studio 13.0\VC\vcvarsall.bat" X64
        SET msvc64_PATH="C:\Program Files (x86)\Microsoft Visual Studio 13.0\VC\bin"
    ) ELSE IF EXIST "c:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" (
        CALL "c:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" X64
        SET msvc64_PATH="C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\bin"
    ) ELSE IF EXIST "c:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\vcvarsall.bat" (
        CALL "c:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\vcvarsall.bat" X64
        SET msvc64_PATH="C:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\bin"
    ) ELSE IF EXIST "c:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\vcvarsall.bat" (
        CALL "c:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\vcvarsall.bat" X64
        SET msvc64_PATH="C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\bin"
    )    
    SET PATH=%msvc64_PATH%;%HB_PATH%;%PATH%
    SET HB_CPU=x86_64
    SET HB_PLATFORM=win
    SET HB_COMPILER=msvc64
    SET HB_CCPATH=%msvc64_PATH%
       %HB_PATH%bin\win\msvc64\hbmk2.exe -plat=win -cpu=x86_64 -jobs=10 -cpp -compr=no -comp=msvc64 ..\hbp\_tbigNumber.hbp
D:
CD D:\GitHub\tBigNumber\mk\
for /f %%e in (env_mkLib64.txt) do (
    SET %%e
)
DEL env_mkLib64.txt