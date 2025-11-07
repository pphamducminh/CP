@echo off

for /l %%i in (1,1,100) do (
	gen.exe %%i 100 > ducminh.inp

	sol.exe <ducminh.inp> ducminh.out
	sol_brute.exe <ducminh.inp> ducminh.ans

	fc ducminh.out ducminh.ans > 0 || echo Test %%i: [WA] && type ducminh.inp && goto :out
	echo Test %%i: [AC]
)

:out
