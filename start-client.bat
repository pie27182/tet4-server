@echo off
setlocal
cd /d "%~dp0"
title Tet4 Launcher

py -3 --version >nul 2>nul
if not errorlevel 1 (
    py -3 tools\client.py
    goto done
)

python --version >nul 2>nul
if not errorlevel 1 (
    python tools\client.py
    goto done
)

echo Python 3 was not found.
echo Install it from https://www.python.org/downloads/windows/
echo Then run this file again.
pause
exit /b 1

:done
if errorlevel 1 (
    echo.
    echo The launcher stopped with an error.
    echo Press any key to close this window.
    pause >nul
)
endlocal
