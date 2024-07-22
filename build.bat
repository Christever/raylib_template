rmdir /S dist /Y

mkdir dist

@REM gcc -o dist/main.exe src/*.c -lraylib -lopengl32 -lgdi32 -lwinmm -mwindows
gcc -o dist/main.exe src/*.c -lraylib -lopengl32 -lgdi32 -lwinmm 
xcopy assets dist /I /Y
cd dist
main.exe
