@echo off
SETLOCAL ENABLEEXTENSIONS
    echo BATCH FILE FOR Harbour MinGW64
    rem ============================================================================
    D:
    CD D:\GitHub\tBigNumber\mkvz
    IF EXIST env_mkLib64.txt (
        DEL env_mkLib64.txt /F /Q
    )
    SET > env_mkLib64.txt
        SET HB_PATH=D:\GitHub\harbour-core\
        SET MinGW64_PATH=D:\MinGW64\BIN\
        SET PATH=%PATH%;%HB_PATH%
        SET PATH=%PATH%;%MinGW64_PATH%
        SET HB_CPU=x86_64
        SET HB_PLATFORM=win
        SET HB_COMPILER=mingw64
        SET HB_CCPATH=%MinGW64_PATH%
           %HB_PATH%bin\win\mingw64\hbmk2.exe -plat=win -cpu=x86_64 -jobs=10 -cpp -compr=no -comp=mingw64 ..\hbpvz\_tbigNumber.hbp
    D:
    CD D:\GitHub\tBigNumber\mkvz
    for /f %%e in (env_mkLib64.txt) do (
        SET %%e
    )
    DEL env_mkLib64.txt /F /Q
ENDLOCAL
