#60d7rmz - PING SWEEP
param($p1)
if (!$p1){
    echo "Hello 60d7mrz !!"
    echo "Example Use: .\Ping_Sweep.ps1 192.168.0"
} else {
foreach ($ip in 1..254){
try {$resp = ping -n 1 "$p1.$ip" | Select-String "Bytes=32"
$resp.Line.Split(' ')[2] -replace ":",""
} catch {}
}
}