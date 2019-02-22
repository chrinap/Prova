@ECHO OFF
:menu
CLS
ECHO ****************************************************
ECHO * VERIFICA RETE
ECHO *
ECHO * 1. VISUALIZZA IMPOSTAZIONI DI RETE
ECHO * 2. TEST CONNESSIONE RETE LOCALE
ECHO * 3. TEST CONNESSIONE INTERNET
ECHO *
ECHO * Q. Esce e torna al prompt dei comandi
ECHO ****************************************************
SET GW=192.168.1.1
SET /P scelta=SCEGLI:
IF %scelta%==1 GOTO ipconfig
IF %scelta%==2 GOTO gateway
IF %scelta%==3 GOTO internet
IF %scelta%==Q GOTO :EOF
IF %scelta%==q GOTO :EOF
:ipconfig
ECHO Rileviamo le configurazioni delle schede di rete
IPCONFIG /ALL
PAUSE
GOTO menu
:gateway
ECHO Eseguiamo un ping al default gateway
PING %GW%
PAUSE
GOTO menu
:internet
ECHO Test connessione Internet
PING 8.8.8.8
PAUSE
GOTO menu
