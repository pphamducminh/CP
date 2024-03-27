@echo off

for /l %%i in (1, 1, 1000) do (
    gen.exe %%i 100 > ducminh.inp
    
    testtt.exe < ducminh.inp > ducminh.out
    testtt_trau.exe < ducminh.inp > ducminh.ans
    fc ducminh.out ducminh.ans > 0 || echo TEST %%i: [WA] && type ducminh.inp && goto :out
    echo TEST %%i: [AC]
)

:out