@echo off
SETLOCAL ENABLEEXTENSIONS
    echo BATCH FILE FOR Harbour mingw32
    rem ============================================================================
    D:
    CD D:\GitHub\tBigNumber\mkvz
    IF EXIST env_mk.txt (
        DEL env_mk.txt /F /Q
    )
    SET > env_mk.txt
        SET HB_PATH=D:\GitHub\harbour-core\
        SET MinGW_PATH=D:\MinGW\bin\
        SET PATH=%PATH%;%HB_PATH%
        SET PATH=%PATH%;%MinGW_PATH%
        SET HB_CPU=x86
        SET HB_PLATFORM=win
        SET HB_COMPILER=mingw
        SET HB_CCPATH=%MinGW_PATH%
        %HB_PATH%bin\win\mingw\hbmk2.exe -plat=win -cpu=x86 -strip- -jobs=10 -cpp  -compr=max -comp=mingw -gui ..\hbpvz\tBigNtst.hbp
        %HB_PATH%bin\win\mingw\hbmk2.exe -plat=win -cpu=x86 -strip- -jobs=10 -cpp  -compr=max -comp=mingw -gui ..\hbpvz\tBigNtst_array.hbp
        %HB_PATH%bin\win\mingw\hbmk2.exe -plat=win -cpu=x86 -strip- -jobs=10 -cpp  -compr=max -comp=mingw -gui ..\hbpvz\tBigNtst_array_assignv.hbp
        %HB_PATH%bin\win\mingw\hbmk2.exe -plat=win -cpu=x86 -strip- -jobs=10 -cpp  -compr=max -comp=mingw -gui ..\hbpvz\tBigNtst_array_assignv_dyn_obj.hbp
        %HB_PATH%bin\win\mingw\hbmk2.exe -plat=win -cpu=x86 -strip- -jobs=10 -cpp  -compr=max -comp=mingw -gui ..\hbpvz\tBigNtst_array_dyn_obj.hbp
        %HB_PATH%bin\win\mingw\hbmk2.exe -plat=win -cpu=x86 -strip- -jobs=10 -cpp  -compr=max -comp=mingw -gui ..\hbpvz\tBigNtst_assignv.hbp
        %HB_PATH%bin\win\mingw\hbmk2.exe -plat=win -cpu=x86 -strip- -jobs=10 -cpp  -compr=max -comp=mingw -gui ..\hbpvz\tBigNtst_assignv_dyn_obj.hbp
        %HB_PATH%bin\win\mingw\hbmk2.exe -plat=win -cpu=x86 -strip- -jobs=10 -cpp  -compr=max -comp=mingw -gui ..\hbpvz\tBigNtst_dbfile.hbp
        %HB_PATH%bin\win\mingw\hbmk2.exe -plat=win -cpu=x86 -strip- -jobs=10 -cpp  -compr=max -comp=mingw -gui ..\hbpvz\tBigNtst_dbfile_assignv.hbp
        %HB_PATH%bin\win\mingw\hbmk2.exe -plat=win -cpu=x86 -strip- -jobs=10 -cpp  -compr=max -comp=mingw -gui ..\hbpvz\tBigNtst_dbfile_dyn_obj.hbp
        %HB_PATH%bin\win\mingw\hbmk2.exe -plat=win -cpu=x86 -strip- -jobs=10 -cpp  -compr=max -comp=mingw -gui ..\hbpvz\tBigNtst_dbfile_memio.hbp
        %HB_PATH%bin\win\mingw\hbmk2.exe -plat=win -cpu=x86 -strip- -jobs=10 -cpp  -compr=max -comp=mingw -gui ..\hbpvz\tBigNtst_dbfile_memio_assignv.hbp
        %HB_PATH%bin\win\mingw\hbmk2.exe -plat=win -cpu=x86 -strip- -jobs=10 -cpp  -compr=max -comp=mingw -gui ..\hbpvz\tBigNtst_dbfile_memio_dyn_obj.hbp
        %HB_PATH%bin\win\mingw\hbmk2.exe -plat=win -cpu=x86 -strip- -jobs=10 -cpp  -compr=max -comp=mingw -gui ..\hbpvz\tBigNtst_dbfile_memio_dyn_obj_assignv.hbp
        %HB_PATH%bin\win\mingw\hbmk2.exe -plat=win -cpu=x86 -strip- -jobs=10 -cpp  -compr=max -comp=mingw -gui ..\hbpvz\tBigNtst_dyn_obj.hbp
    D:
    CD D:\GitHub\tBigNumber\mkvz
    for /f %%e in (env_mk.txt) do (
        SET %%e
    )
    DEL env_mk.txt /F /Q
ENDLOCAL
