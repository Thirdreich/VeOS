int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v3; // eax
  int v4; // eax
  std::ostream *v5; // eax
  int v6; // eax
  std::ostream *v7; // eax
  int v8; // eax
  std::ostream *v9; // eax
  int v10; // eax
  std::ostream *v11; // eax
  int v12; // eax
  std::ostream *v13; // eax
  int v14; // eax
  int v15; // eax
  std::ostream *v16; // eax
  int v17; // eax
  int v18; // eax
  std::ostream *v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  std::ostream *v23; // eax
  int v24; // eax
  std::ostream *v25; // eax
  int v26; // eax
  int v27; // eax
  std::ostream *v28; // eax
  int v29; // eax
  std::ostream *v30; // eax
  int v31; // eax
  std::ostream *v32; // eax
  int v33; // eax
  std::ostream *v34; // eax
  int v35; // eax
  std::ostream *v36; // eax
  int v37; // eax
  int v38; // eax
  std::ostream *v39; // eax
  int v40; // eax
  std::ostream *v41; // eax
  int v42; // eax
  std::ostream *v43; // eax
  int v44; // eax
  std::ostream *v45; // eax
  int v46; // eax
  std::ostream *v47; // eax
  int v48; // eax
  int v49; // eax
  std::ostream *v50; // eax
  int v51; // eax
  std::ostream *v52; // eax
  int v53; // eax
  int v54; // eax
  std::ostream *v55; // eax
  int v56; // eax
  int v57; // eax
  std::ostream *v58; // eax
  int v59; // eax
  std::ostream *v60; // eax
  int v61; // eax
  std::ostream *v62; // eax
  int v63; // eax
  std::ostream *v64; // eax
  int v65; // eax
  int v66; // eax
  std::ostream *v67; // eax
  int v68; // eax
  std::ostream *v69; // eax
  int v70; // eax
  std::ostream *v71; // eax
  int v72; // eax
  std::ostream *v73; // eax
  int v74; // eax
  std::ostream *v75; // eax
  int v76; // eax
  std::ostream *v77; // eax
  int v78; // eax
  std::ostream *v79; // eax
  int v80; // eax
  std::ostream *v81; // eax
  int v82; // eax
  std::ostream *v83; // eax
  int v84; // eax
  std::ostream *v85; // eax
  int v86; // eax
  std::ostream *v87; // eax
  int v88; // eax
  int v89; // eax
  std::ostream *v90; // eax
  int v91; // eax
  int v92; // eax
  std::ostream *v93; // eax
  int v94; // eax
  int v95; // eax
  std::ostream *v96; // eax
  int v97; // eax
  int v98; // eax
  std::ostream *v99; // eax
  int v100; // eax
  int v101; // eax
  std::ostream *v102; // eax
  int v103; // eax
  int v104; // eax
  std::ostream *v105; // eax
  int v106; // eax
  int v107; // eax
  std::ostream *v108; // eax
  int v109; // eax
  int v110; // eax
  int v111; // eax
  std::ostream *v112; // eax
  int v113; // eax
  std::ostream *v114; // eax
  int v115; // eax
  char v116; // al
  std::ostream *v117; // eax
  int v118; // eax
  int v119; // eax
  std::ostream *v120; // eax
  int v121; // eax
  int v122; // eax
  std::ostream *v123; // eax
  int v124; // eax
  int v125; // eax
  std::ostream *v126; // eax
  int v127; // eax
  int v128; // eax
  std::ostream *v129; // eax
  int v130; // eax
  int v131; // eax
  std::ostream *v132; // eax
  int v133; // eax
  int v134; // eax
  std::ostream *v135; // eax
  int v136; // eax
  int v137; // eax
  std::ostream *v138; // eax
  int v139; // eax
  int v140; // eax
  std::ostream *v141; // eax
  int v142; // eax
  int v143; // eax
  int v145; // [esp+8h] [ebp-1BCh]
  DWORD LastError; // [esp+Ch] [ebp-1B8h]
  DWORD v147; // [esp+10h] [ebp-1B4h]
  DWORD v148; // [esp+14h] [ebp-1B0h]
  DWORD v149; // [esp+18h] [ebp-1ACh]
  DWORD v150; // [esp+1Ch] [ebp-1A8h]
  DWORD v151; // [esp+20h] [ebp-1A4h]
  DWORD v152; // [esp+24h] [ebp-1A0h]
  int v153; // [esp+28h] [ebp-19Ch]
  int Y; // [esp+2Ch] [ebp-198h]
  char v155; // [esp+31h] [ebp-193h]
  char v156; // [esp+32h] [ebp-192h]
  char v157; // [esp+33h] [ebp-191h]
  char v158; // [esp+34h] [ebp-190h]
  char v159; // [esp+35h] [ebp-18Fh]
  char v160; // [esp+36h] [ebp-18Eh]
  char v161; // [esp+37h] [ebp-18Dh]
  char v162; // [esp+38h] [ebp-18Ch]
  char v163; // [esp+39h] [ebp-18Bh]
  char v164; // [esp+3Ah] [ebp-18Ah]
  char v165; // [esp+3Bh] [ebp-189h]
  DWORD v166; // [esp+3Ch] [ebp-188h]
  DWORD v167; // [esp+40h] [ebp-184h]
  DWORD v168; // [esp+44h] [ebp-180h]
  DWORD v169; // [esp+48h] [ebp-17Ch]
  DWORD v170; // [esp+4Ch] [ebp-178h]
  DWORD v171; // [esp+50h] [ebp-174h]
  DWORD v172; // [esp+54h] [ebp-170h]
  DWORD v173; // [esp+58h] [ebp-16Ch]
  DWORD v174; // [esp+5Ch] [ebp-168h]
  CHAR_INFO Fill; // [esp+F4h] [ebp-D0h] BYREF
  COORD dwDestinationOrigin; // [esp+F8h] [ebp-CCh]
  SMALL_RECT ScrollRectangle; // [esp+FCh] [ebp-C8h] BYREF
  int v178; // [esp+104h] [ebp-C0h] BYREF
  unsigned int v179; // [esp+108h] [ebp-BCh] BYREF
  COORD dwWriteCoord; // [esp+10Ch] [ebp-B8h]
  COORD dwCursorPosition; // [esp+110h] [ebp-B4h]
  CONSOLE_CURSOR_INFO v182; // [esp+114h] [ebp-B0h] BYREF
  struct _CONSOLE_CURSOR_INFO ConsoleCursorInfo; // [esp+11Ch] [ebp-A8h] BYREF
  struct _INPUT_RECORD Buffer; // [esp+124h] [ebp-A0h] BYREF
  DWORD NumberOfCharsWritten; // [esp+138h] [ebp-8Ch] BYREF
  DWORD Mode; // [esp+13Ch] [ebp-88h] BYREF
  struct _CONSOLE_SCREEN_BUFFER_INFO ConsoleScreenBufferInfo; // [esp+142h] [ebp-82h] BYREF
  char v188[4]; // [esp+158h] [ebp-6Ch] BYREF
  char v189[4]; // [esp+15Ch] [ebp-68h] BYREF
  char v190[4]; // [esp+160h] [ebp-64h] BYREF
  char v191[4]; // [esp+164h] [ebp-60h] BYREF
  char v192[4]; // [esp+168h] [ebp-5Ch] BYREF
  char v193[4]; // [esp+16Ch] [ebp-58h] BYREF
  char v194[4]; // [esp+170h] [ebp-54h] BYREF
  char v195[4]; // [esp+174h] [ebp-50h] BYREF
  char v196[4]; // [esp+178h] [ebp-4Ch] BYREF
  char v197[4]; // [esp+17Ch] [ebp-48h] BYREF
  HANDLE hConsoleOutput; // [esp+180h] [ebp-44h]
  HANDLE hConsoleHandle; // [esp+184h] [ebp-40h]
  int v200; // [esp+188h] [ebp-3Ch]
  unsigned __int16 v201; // [esp+18Ch] [ebp-38h]
  char v202; // [esp+18Eh] [ebp-36h]
  bool v203; // [esp+18Fh] [ebp-35h]
  int v204; // [esp+190h] [ebp-34h]
  __int16 v205; // [esp+194h] [ebp-30h]
  __int16 v206; // [esp+196h] [ebp-2Eh]
  int v207; // [esp+198h] [ebp-2Ch]
  LPCSTR lpCharacter; // [esp+19Ch] [ebp-28h]
  int i; // [esp+1A0h] [ebp-24h]
  int j; // [esp+1A4h] [ebp-20h]
  int k; // [esp+1A8h] [ebp-1Ch]
  int *p_argc; // [esp+1B4h] [ebp-10h]

  p_argc = &argc;
  __main();
  if ( argc <= 2 )
  {
    v3 = std::operator<<<std::char_traits<char>>((std::ostream *)&std::cout, (int)"CmdMenuSel (V1.4)");
    v4 = std::ostream::operator<<(v3, std::endl<char,std::char_traits<char>>);
    v5 = (std::ostream *)std::ostream::operator<<(v4, std::endl<char,std::char_traits<char>>);
    v6 = std::operator<<<std::char_traits<char>>(
           v5,
           (int)"CmdMenuSel displays a line based menu in the console allowing the user");
    v7 = (std::ostream *)std::ostream::operator<<(v6, std::endl<char,std::char_traits<char>>);
    v8 = std::operator<<<std::char_traits<char>>(
           v7,
           (int)"to select a single option. The menu can be interacted with via the mouse");
    v9 = (std::ostream *)std::ostream::operator<<(v8, std::endl<char,std::char_traits<char>>);
    v10 = std::operator<<<std::char_traits<char>>(
            v9,
            (int)"or keyboard. The menu colo[u]rs can be choosen or the defaults used(E2F4).");
    v11 = (std::ostream *)std::ostream::operator<<(v10, std::endl<char,std::char_traits<char>>);
    v12 = std::operator<<<std::char_traits<char>>(
            v11,
            (int)"An exit code(ErrorLevel) is returned denoting the position the selected");
    v13 = (std::ostream *)std::ostream::operator<<(v12, std::endl<char,std::char_traits<char>>);
    v14 = std::operator<<<std::char_traits<char>>(v13, (int)"option was specified in.");
    v15 = std::ostream::operator<<(v14, std::endl<char,std::char_traits<char>>);
    v16 = (std::ostream *)std::ostream::operator<<(v15, std::endl<char,std::char_traits<char>>);
    v17 = std::operator<<<std::char_traits<char>>(v16, (int)"USAGE:");
    v18 = std::ostream::operator<<(v17, std::endl<char,std::char_traits<char>>);
    v19 = (std::ostream *)std::ostream::operator<<(v18, std::endl<char,std::char_traits<char>>);
    v20 = std::operator<<<std::char_traits<char>>(v19, (int)"CmdMenuSel FBFB {\"Option 1\"} [\"Option 2\"] [....] ");
    v21 = std::ostream::operator<<(v20, std::endl<char,std::char_traits<char>>);
    v22 = std::ostream::operator<<(v21, std::endl<char,std::char_traits<char>>);
    v23 = (std::ostream *)std::ostream::operator<<(v22, std::endl<char,std::char_traits<char>>);
    v24 = std::operator<<<std::char_traits<char>>(
            v23,
            (int)"All option string are trimmed to the console width. The number of specified");
    v25 = (std::ostream *)std::ostream::operator<<(v24, std::endl<char,std::char_traits<char>>);
    v26 = std::operator<<<std::char_traits<char>>(
            v25,
            (int)"options must be less than or equal to the number of lines in the console.");
    v27 = std::ostream::operator<<(v26, std::endl<char,std::char_traits<char>>);
    v28 = (std::ostream *)std::ostream::operator<<(v27, std::endl<char,std::char_traits<char>>);
    v29 = std::operator<<<std::char_traits<char>>(
            v28,
            (int)"\"FBFB\" denotes the colo[u]rs to be used, they are four hex digits");
    v30 = (std::ostream *)std::ostream::operator<<(v29, std::endl<char,std::char_traits<char>>);
    v31 = std::operator<<<std::char_traits<char>>(
            v30,
            (int)"(0 - 9 and A - F). The first two digits corrospond to the selected");
    v32 = (std::ostream *)std::ostream::operator<<(v31, std::endl<char,std::char_traits<char>>);
    v33 = std::operator<<<std::char_traits<char>>(
            v32,
            (int)"menu item and the last two corrospond to the unselected menu items.");
    v34 = (std::ostream *)std::ostream::operator<<(v33, std::endl<char,std::char_traits<char>>);
    v35 = std::operator<<<std::char_traits<char>>(
            v34,
            (int)"\"F\" is the foreground colo[u]r and \"B\" is the background colo[u]r.");
    v36 = (std::ostream *)std::ostream::operator<<(v35, std::endl<char,std::char_traits<char>>);
    v37 = std::operator<<<std::char_traits<char>>(v36, (int)"See \"COLOR /?\" for colo[u]r code listings.");
    v38 = std::ostream::operator<<(v37, std::endl<char,std::char_traits<char>>);
    v39 = (std::ostream *)std::ostream::operator<<(v38, std::endl<char,std::char_traits<char>>);
    v40 = std::operator<<<std::char_traits<char>>(v39, (int)"The default colo[u]rs are used if the:");
    v41 = (std::ostream *)std::ostream::operator<<(v40, std::endl<char,std::char_traits<char>>);
    v42 = std::operator<<<std::char_traits<char>>(v41, (int)"  String contains characters outside of 0-9,A-F or a-f.");
    v43 = (std::ostream *)std::ostream::operator<<(v42, std::endl<char,std::char_traits<char>>);
    v44 = std::operator<<<std::char_traits<char>>(v43, (int)"  String isn't exactly four characters.");
    v45 = (std::ostream *)std::ostream::operator<<(v44, std::endl<char,std::char_traits<char>>);
    v46 = std::operator<<<std::char_traits<char>>(
            v45,
            (int)"  Selected or unselected background and foreground colo[u]rs are the same.");
    v47 = (std::ostream *)std::ostream::operator<<(v46, std::endl<char,std::char_traits<char>>);
    v48 = std::operator<<<std::char_traits<char>>(
            v47,
            (int)"  Selected and unselected background colo[u]rs are the same.");
    v49 = std::ostream::operator<<(v48, std::endl<char,std::char_traits<char>>);
    v50 = (std::ostream *)std::ostream::operator<<(v49, std::endl<char,std::char_traits<char>>);
    v51 = std::operator<<<std::char_traits<char>>(
            v50,
            (int)"If an error occurs the return code will be zero and a string will be set");
    v52 = (std::ostream *)std::ostream::operator<<(v51, std::endl<char,std::char_traits<char>>);
    v53 = std::operator<<<std::char_traits<char>>(v52, (int)"to the console error stream.");
    v54 = std::ostream::operator<<(v53, std::endl<char,std::char_traits<char>>);
    v55 = (std::ostream *)std::ostream::operator<<(v54, std::endl<char,std::char_traits<char>>);
    v56 = std::operator<<<std::char_traits<char>>(v55, (int)"Usable input:");
    v57 = std::ostream::operator<<(v56, std::endl<char,std::char_traits<char>>);
    v58 = (std::ostream *)std::ostream::operator<<(v57, std::endl<char,std::char_traits<char>>);
    v59 = std::operator<<<std::char_traits<char>>(v58, (int)"Select:");
    v60 = (std::ostream *)std::ostream::operator<<(v59, std::endl<char,std::char_traits<char>>);
    v61 = std::operator<<<std::char_traits<char>>(v60, (int)"SPACE");
    v62 = (std::ostream *)std::ostream::operator<<(v61, std::endl<char,std::char_traits<char>>);
    v63 = std::operator<<<std::char_traits<char>>(v62, (int)"ENTER");
    v64 = (std::ostream *)std::ostream::operator<<(v63, std::endl<char,std::char_traits<char>>);
    v65 = std::operator<<<std::char_traits<char>>(v64, (int)"LEFT_CLICK");
    v66 = std::ostream::operator<<(v65, std::endl<char,std::char_traits<char>>);
    v67 = (std::ostream *)std::ostream::operator<<(v66, std::endl<char,std::char_traits<char>>);
    v68 = std::operator<<<std::char_traits<char>>(v67, (int)"NAVIGATE:");
    v69 = (std::ostream *)std::ostream::operator<<(v68, std::endl<char,std::char_traits<char>>);
    v70 = std::operator<<<std::char_traits<char>>(v69, (int)"UP");
    v71 = (std::ostream *)std::ostream::operator<<(v70, std::endl<char,std::char_traits<char>>);
    v72 = std::operator<<<std::char_traits<char>>(v71, (int)"DOWN");
    v73 = (std::ostream *)std::ostream::operator<<(v72, std::endl<char,std::char_traits<char>>);
    v74 = std::operator<<<std::char_traits<char>>(v73, (int)&off_479541);
    v75 = (std::ostream *)std::ostream::operator<<(v74, std::endl<char,std::char_traits<char>>);
    v76 = std::operator<<<std::char_traits<char>>(v75, (int)"SHIFT + TAB");
    v77 = (std::ostream *)std::ostream::operator<<(v76, std::endl<char,std::char_traits<char>>);
    v78 = std::operator<<<std::char_traits<char>>(v77, (int)"HOME");
    v79 = (std::ostream *)std::ostream::operator<<(v78, std::endl<char,std::char_traits<char>>);
    v80 = std::operator<<<std::char_traits<char>>(v79, (int)&off_479556);
    v81 = (std::ostream *)std::ostream::operator<<(v80, std::endl<char,std::char_traits<char>>);
    v82 = std::operator<<<std::char_traits<char>>(v81, (int)"PAGE_UP");
    v83 = (std::ostream *)std::ostream::operator<<(v82, std::endl<char,std::char_traits<char>>);
    v84 = std::operator<<<std::char_traits<char>>(v83, (int)"PAGE_DOWN");
    v85 = (std::ostream *)std::ostream::operator<<(v84, std::endl<char,std::char_traits<char>>);
    v86 = std::operator<<<std::char_traits<char>>(v85, (int)"MOUSE_HOVER");
    v87 = (std::ostream *)std::ostream::operator<<(v86, std::endl<char,std::char_traits<char>>);
    v88 = std::operator<<<std::char_traits<char>>(v87, (int)"SCROLL_WHEEL");
    v89 = std::ostream::operator<<(v88, std::endl<char,std::char_traits<char>>);
    std::ostream::operator<<(v89, std::endl<char,std::char_traits<char>>);
    return 0;
  }
  NumberOfCharsWritten = 0;
  dwCursorPosition.X = 0;
  dwCursorPosition.Y = 0;
  dwWriteCoord.X = 0;
  v200 = 0;
  v201 = 10000;
  std::string::string((std::string *)&v179);
  v202 = 1;
  v203 = 0;
  v204 = 0;
  v205 = 0;
  v206 = 0;
  v207 = 0;
  dwDestinationOrigin.X = 0;
  dwDestinationOrigin.Y = 0;
  Fill.Char.AsciiChar = 32;
  hConsoleOutput = CreateFileA("CONOUT$", 0xC0000000, 3u, 0, 3u, 0, 0);
  if ( hConsoleOutput == (HANDLE)-1 )
  {
    LastError = GetLastError();
    v90 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                            (std::ostream *)&std::cerr,
                            (int)"Could not retrieve console output handle with Createfile()");
    v91 = std::operator<<<std::char_traits<char>>(v90, (int)" Sys Error: ");
    v92 = std::ostream::operator<<(v91, LastError);
    std::ostream::operator<<(v92, std::endl<char,std::char_traits<char>>);
    v201 = 0;
  }
  hConsoleHandle = CreateFileA("CONIN$", 0xC0000000, 3u, 0, 3u, 0, 0);
  if ( hConsoleHandle == (HANDLE)-1 )
  {
    v147 = GetLastError();
    v93 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                            (std::ostream *)&std::cerr,
                            (int)"Could not retrieve console input handle with Createfile()");
    v94 = std::operator<<<std::char_traits<char>>(v93, (int)" Sys Error: ");
    v95 = std::ostream::operator<<(v94, v147);
    std::ostream::operator<<(v95, std::endl<char,std::char_traits<char>>);
    v201 = 0;
  }
  if ( !GetConsoleScreenBufferInfo(hConsoleOutput, &ConsoleScreenBufferInfo) )
  {
    v148 = GetLastError();
    v96 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                            (std::ostream *)&std::cerr,
                            (int)"Could not buffer info with GetConsoleScreenBufferInfo()");
    v97 = std::operator<<<std::char_traits<char>>(v96, (int)" Sys Error: ");
    v98 = std::ostream::operator<<(v97, v148);
    std::ostream::operator<<(v98, std::endl<char,std::char_traits<char>>);
    v201 = 0;
  }
  if ( !GetConsoleMode(hConsoleHandle, &Mode) )
  {
    v149 = GetLastError();
    v99 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                            (std::ostream *)&std::cerr,
                            (int)"Could not get console mode with GetConsoleMode()");
    v100 = std::operator<<<std::char_traits<char>>(v99, (int)" Sys Error: ");
    v101 = std::ostream::operator<<(v100, v149);
    std::ostream::operator<<(v101, std::endl<char,std::char_traits<char>>);
    v201 = 0;
  }
  if ( !SetConsoleMode(hConsoleHandle, 0x90u) )
  {
    v150 = GetLastError();
    v102 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                             (std::ostream *)&std::cerr,
                             (int)"Could not set console mode with SetConsoleMode()");
    v103 = std::operator<<<std::char_traits<char>>(v102, (int)" Sys Error: ");
    v104 = std::ostream::operator<<(v103, v150);
    std::ostream::operator<<(v104, std::endl<char,std::char_traits<char>>);
    v201 = 0;
  }
  if ( !GetConsoleCursorInfo(hConsoleOutput, &ConsoleCursorInfo) )
  {
    v151 = GetLastError();
    v105 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                             (std::ostream *)&std::cerr,
                             (int)"Could not get console cursor info with GetConsoleCursorInfo()");
    v106 = std::operator<<<std::char_traits<char>>(v105, (int)" Sys Error: ");
    v107 = std::ostream::operator<<(v106, v151);
    std::ostream::operator<<(v107, std::endl<char,std::char_traits<char>>);
    v201 = 0;
  }
  v182.bVisible = 0;
  v182.dwSize = 25;
  if ( !SetConsoleCursorInfo(hConsoleOutput, &v182) )
  {
    v152 = GetLastError();
    v108 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                             (std::ostream *)&std::cerr,
                             (int)"Could set get console cursor info with SetConsoleCursorInfo()");
    v109 = std::operator<<<std::char_traits<char>>(v108, (int)" Sys Error: ");
    v110 = std::ostream::operator<<(v109, v152);
    std::ostream::operator<<(v110, std::endl<char,std::char_traits<char>>);
    v201 = 0;
  }
  if ( argc - 2 > ConsoleScreenBufferInfo.dwSize.Y )
  {
    v153 = argc - 2;
    Y = ConsoleScreenBufferInfo.dwSize.Y;
    v111 = std::operator<<<std::char_traits<char>>((std::ostream *)&std::cerr, (int)"The console buffer(");
    v112 = (std::ostream *)std::ostream::operator<<(v111, Y);
    v113 = std::operator<<<std::char_traits<char>>(v112, (int)" lines) is to small for ");
    v114 = (std::ostream *)std::ostream::operator<<(v113, v153);
    v115 = std::operator<<<std::char_traits<char>>(v114, (int)" options.");
    std::ostream::operator<<(v115, std::endl<char,std::char_traits<char>>);
    v201 = 0;
  }
  if ( v201 )
  {
    Fill.Attributes = ConsoleScreenBufferInfo.wAttributes;
    dwCursorPosition.Y = ConsoleScreenBufferInfo.dwCursorPosition.Y;
    dwWriteCoord.Y = ConsoleScreenBufferInfo.dwCursorPosition.Y;
    ScrollRectangle.Top = 1;
    ScrollRectangle.Left = 0;
    ScrollRectangle.Bottom = ConsoleScreenBufferInfo.dwSize.Y - 1;
    ScrollRectangle.Right = ConsoleScreenBufferInfo.dwSize.X - 1;
    v200 = 5177390;
    std::string::operator=((std::string *)&v179, (char *)argv[1]);
    v156 = 0;
    v157 = 0;
    v158 = 0;
    v159 = 0;
    v160 = 0;
    v161 = 0;
    if ( std::string::length((std::string *)&v179) != 4 )
      goto LABEL_25;
    std::string::substr((std::string *)v188, (unsigned int)&v179, 1u);
    v156 = 1;
    std::string::substr((std::string *)v189, (unsigned int)&v179, 0);
    v157 = 1;
    if ( !(unsigned __int8)std::operator!=<char,std::char_traits<char>,std::allocator<char>>(
                             (std::string *)v189,
                             (std::string *)v188) )
      goto LABEL_25;
    std::string::substr((std::string *)v190, (unsigned int)&v179, 3u);
    v158 = 1;
    std::string::substr((std::string *)v191, (unsigned int)&v179, 2u);
    v159 = 1;
    if ( !(unsigned __int8)std::operator!=<char,std::char_traits<char>,std::allocator<char>>(
                             (std::string *)v191,
                             (std::string *)v190) )
      goto LABEL_25;
    std::string::substr((std::string *)v192, (unsigned int)&v179, 3u);
    v160 = 1;
    std::string::substr((std::string *)v193, (unsigned int)&v179, 1u);
    v161 = 1;
    if ( (unsigned __int8)std::operator!=<char,std::char_traits<char>,std::allocator<char>>(
                            (std::string *)v193,
                            (std::string *)v192) )
      v116 = 1;
    else
LABEL_25:
      v116 = 0;
    v155 = v116;
    if ( v161 )
      std::string::~string((std::string *)v193);
    if ( v160 )
      std::string::~string((std::string *)v192);
    if ( v159 )
      std::string::~string((std::string *)v191);
    if ( v158 )
      std::string::~string((std::string *)v190);
    if ( v157 )
      std::string::~string((std::string *)v189);
    if ( v156 )
      std::string::~string((std::string *)v188);
    if ( v155 )
    {
      std::string::substr((std::string *)v194, (unsigned int)&v179, 1u);
      v162 = HexToint(v194, &v178);
      std::string::~string((std::string *)v194);
      if ( v162 )
      {
        LOWORD(v200) = v178;
        std::string::substr((std::string *)v195, (unsigned int)&v179, 0);
        v163 = HexToint(v195, &v178);
        std::string::~string((std::string *)v195);
        if ( v163 )
        {
          LOWORD(v200) = 16 * v200 + v178;
        }
        else
        {
          LOWORD(v200) = 46;
          std::string::replace((std::string *)&v179, 3u, 1u, 1u, 112);
        }
      }
      else
      {
        std::string::replace((std::string *)&v179, 3u, 1u, 1u, 112);
      }
      std::string::substr((std::string *)v196, (unsigned int)&v179, 3u);
      v164 = HexToint(v196, &v178);
      std::string::~string((std::string *)v196);
      if ( v164 )
      {
        HIWORD(v200) = v178;
        std::string::substr((std::string *)v197, (unsigned int)&v179, 2u);
        v165 = HexToint(v197, &v178);
        std::string::~string((std::string *)v197);
        if ( v165 )
          HIWORD(v200) = 16 * HIWORD(v200) + v178;
        else
          v200 = 5177390;
      }
      else
      {
        LOWORD(v200) = 46;
      }
    }
    lpCharacter = (LPCSTR)operator new[](ConsoleScreenBufferInfo.dwSize.X);
    for ( i = 2; ; ++i )
    {
      if ( i >= argc )
        goto LABEL_66;
      LOWORD(v207) = v207 + 1;
      for ( j = 0; ConsoleScreenBufferInfo.dwSize.X > j; ++j )
        lpCharacter[j] = 32;
      for ( k = 0; ConsoleScreenBufferInfo.dwSize.X > k && argv[i][k]; ++k )
        lpCharacter[k] = argv[i][k];
      if ( dwWriteCoord.Y == ConsoleScreenBufferInfo.dwSize.Y )
      {
        --dwWriteCoord.Y;
        --dwCursorPosition.Y;
        if ( !ScrollConsoleScreenBufferA(hConsoleOutput, &ScrollRectangle, 0, dwDestinationOrigin, &Fill) )
          break;
      }
      if ( !WriteConsoleOutputCharacterA(
              hConsoleOutput,
              lpCharacter,
              ConsoleScreenBufferInfo.dwSize.X,
              dwWriteCoord,
              &NumberOfCharsWritten) )
      {
        v167 = GetLastError();
        v120 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                                 (std::ostream *)&std::cerr,
                                 (int)"Could write to console with WriteConsoleOutputCharacter()");
        v121 = std::operator<<<std::char_traits<char>>(v120, (int)" Sys Error: ");
        v122 = std::ostream::operator<<(v121, v167);
        std::ostream::operator<<(v122, std::endl<char,std::char_traits<char>>);
        v201 = 0;
        goto LABEL_66;
      }
      if ( !FillConsoleOutputAttribute(
              hConsoleOutput,
              HIWORD(v200),
              ConsoleScreenBufferInfo.dwSize.X,
              dwWriteCoord,
              &NumberOfCharsWritten) )
      {
        v168 = GetLastError();
        v123 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                                 (std::ostream *)&std::cerr,
                                 (int)"Could not colo[u]r cells in console with FillConsoleOutputAttribute()");
        v124 = std::operator<<<std::char_traits<char>>(v123, (int)" Sys Error: ");
        v125 = std::ostream::operator<<(v124, v168);
        std::ostream::operator<<(v125, std::endl<char,std::char_traits<char>>);
        v201 = 0;
        goto LABEL_66;
      }
      ++dwWriteCoord.Y;
    }
    v166 = GetLastError();
    v117 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                             (std::ostream *)&std::cerr,
                             (int)"Could not get scroll console buffer with ScrollConsoleCursorScreenBuffer()");
    v118 = std::operator<<<std::char_traits<char>>(v117, (int)" Sys Error: ");
    v119 = std::ostream::operator<<(v118, v166);
    std::ostream::operator<<(v119, std::endl<char,std::char_traits<char>>);
    v201 = 0;
LABEL_66:
    if ( lpCharacter )
      operator delete[]((void *)lpCharacter);
    dwWriteCoord.Y = dwCursorPosition.Y;
    FlushConsoleInputBuffer(hConsoleHandle);
    if ( !SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition) )
    {
      v169 = GetLastError();
      v126 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                               (std::ostream *)&std::cerr,
                               (int)"Could not set the cursor position with SetConsoleCursorPosition()");
      v127 = std::operator<<<std::char_traits<char>>(v126, (int)" Sys Error: ");
      v128 = std::ostream::operator<<(v127, v169);
      std::ostream::operator<<(v128, std::endl<char,std::char_traits<char>>);
      v201 = 0;
    }
    if ( dwCursorPosition.Y + (unsigned __int16)v207 - 1 > ConsoleScreenBufferInfo.srWindow.Bottom
      && dwCursorPosition.Y != ConsoleScreenBufferInfo.srWindow.Top )
    {
      v206 = ConsoleScreenBufferInfo.srWindow.Bottom - ConsoleScreenBufferInfo.srWindow.Top;
      if ( (unsigned __int16)(ConsoleScreenBufferInfo.srWindow.Bottom - ConsoleScreenBufferInfo.srWindow.Top) < (unsigned __int16)v207 - 1 )
      {
        ConsoleScreenBufferInfo.srWindow.Top = dwCursorPosition.Y;
        ConsoleScreenBufferInfo.srWindow.Bottom = v206 + dwCursorPosition.Y;
      }
      else
      {
        ConsoleScreenBufferInfo.srWindow.Bottom = v207 + dwCursorPosition.Y - 1;
        ConsoleScreenBufferInfo.srWindow.Top = ConsoleScreenBufferInfo.srWindow.Bottom - v206;
      }
      if ( !SetConsoleWindowInfo(hConsoleOutput, 1, &ConsoleScreenBufferInfo.srWindow) )
      {
        v170 = GetLastError();
        v129 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                                 (std::ostream *)&std::cerr,
                                 (int)"Could not set console window info with SetConsoleWindowInfo()");
        v130 = std::operator<<<std::char_traits<char>>(v129, (int)" Sys Error: ");
        v131 = std::ostream::operator<<(v130, v170);
        std::ostream::operator<<(v131, std::endl<char,std::char_traits<char>>);
        v201 = 0;
      }
    }
  }
  while ( v201 == 10000 )
  {
    if ( v202 )
    {
      if ( FillConsoleOutputAttribute(
             hConsoleOutput,
             HIWORD(v200),
             ConsoleScreenBufferInfo.dwSize.X,
             dwWriteCoord,
             &NumberOfCharsWritten) )
      {
        dwWriteCoord.Y = HIWORD(v207) + dwCursorPosition.Y;
        if ( FillConsoleOutputAttribute(
               hConsoleOutput,
               v200,
               ConsoleScreenBufferInfo.dwSize.X,
               dwWriteCoord,
               &NumberOfCharsWritten) )
        {
          if ( SetConsoleCursorPosition(hConsoleOutput, dwWriteCoord) )
          {
            v202 = 0;
            goto LABEL_85;
          }
          v173 = GetLastError();
          v138 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                                   (std::ostream *)&std::cerr,
                                   (int)"Could not set the cursor position with SetConsoleCursorPosition()");
          v139 = std::operator<<<std::char_traits<char>>(v138, (int)" Sys Error: ");
          v140 = std::ostream::operator<<(v139, v173);
          std::ostream::operator<<(v140, std::endl<char,std::char_traits<char>>);
          v201 = 0;
        }
        else
        {
          v172 = GetLastError();
          v135 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                                   (std::ostream *)&std::cerr,
                                   (int)"Could not colo[u]r cells in console buffer with FillConsoleOutputAttribute()");
          v136 = std::operator<<<std::char_traits<char>>(v135, (int)" Sys Error: ");
          v137 = std::ostream::operator<<(v136, v172);
          std::ostream::operator<<(v137, std::endl<char,std::char_traits<char>>);
          v201 = 0;
        }
      }
      else
      {
        v171 = GetLastError();
        v132 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                                 (std::ostream *)&std::cerr,
                                 (int)"Could not colo[u]r cells in console buffer with FillConsoleOutputAttribute()");
        v133 = std::operator<<<std::char_traits<char>>(v132, (int)" Sys Error: ");
        v134 = std::ostream::operator<<(v133, v171);
        std::ostream::operator<<(v134, std::endl<char,std::char_traits<char>>);
        v201 = 0;
      }
    }
    else
    {
LABEL_85:
      if ( ReadConsoleInputA(hConsoleHandle, &Buffer, 1u, &NumberOfCharsWritten) )
      {
        if ( Buffer.EventType == 2 )
        {
          BYTE2(v204) = 0;
          if ( (*(_BYTE *)(&Buffer.Event.MenuEvent + 1) & 1) != 0 )
          {
            if ( Buffer.Event.MouseEvent.dwMousePosition.Y < dwCursorPosition.Y
              || Buffer.Event.MouseEvent.dwMousePosition.Y >= dwCursorPosition.Y + (unsigned __int16)v207 )
            {
              HIBYTE(v204) = 1;
            }
            else
            {
              v205 = HIWORD(v207);
              HIWORD(v207) = Buffer.Event.MouseEvent.dwMousePosition.Y - dwCursorPosition.Y;
              if ( !v203 )
                LOWORD(v204) = HIWORD(v207);
              v203 = 1;
            }
            if ( v203 || HIBYTE(v204) )
            {
              if ( (_WORD)v204 != HIWORD(v207) )
                HIBYTE(v204) = 1;
              if ( Buffer.Event.MouseEvent.dwMousePosition.Y >= dwCursorPosition.Y
                && Buffer.Event.MouseEvent.dwMousePosition.Y < dwCursorPosition.Y + (unsigned __int16)v207
                && HIWORD(v207) != v205 )
              {
                v202 = 1;
              }
            }
          }
          else
          {
            if ( Buffer.Event.MouseEvent.dwButtonState )
            {
              v203 = 0;
              goto LABEL_111;
            }
            if ( HIBYTE(v204) )
            {
              HIBYTE(v204) = 0;
              v203 = (_WORD)v204 == HIWORD(v207);
            }
            if ( v203 )
            {
              if ( Buffer.Event.MouseEvent.dwMousePosition.Y - dwCursorPosition.Y != (unsigned __int16)v204 )
              {
                v203 = 0;
                goto LABEL_111;
              }
              v201 = v204 + 1;
            }
            else
            {
LABEL_111:
              v203 = 0;
              if ( Buffer.Event.KeyEvent.dwControlKeyState == 4 )
              {
                if ( (Buffer.Event.MouseEvent.dwButtonState & 0xFF000000) != 0 )
                {
                  HIWORD(v207) = (HIWORD(v207) + 1) % (unsigned __int16)v207;
                }
                else if ( HIWORD(v207) )
                {
                  --HIWORD(v207);
                }
                else
                {
                  HIWORD(v207) = v207 - 1;
                }
                v202 = 1;
              }
              else if ( Buffer.Event.MouseEvent.dwMousePosition.Y >= dwCursorPosition.Y
                     && Buffer.Event.MouseEvent.dwMousePosition.Y < dwCursorPosition.Y + (unsigned __int16)v207 )
              {
                HIWORD(v207) = Buffer.Event.MouseEvent.dwMousePosition.Y - dwCursorPosition.Y;
                v202 = 1;
              }
            }
          }
        }
        else
        {
          v203 = 0;
          if ( Buffer.EventType == 1 )
          {
            if ( Buffer.Event.KeyEvent.bKeyDown )
            {
              if ( Buffer.Event.KeyEvent.wVirtualKeyCode == 32 || Buffer.Event.KeyEvent.wVirtualKeyCode == 13 )
              {
                BYTE2(v204) = 1;
              }
              else
              {
                BYTE2(v204) = 0;
                switch ( Buffer.Event.KeyEvent.wVirtualKeyCode )
                {
                  case 9u:
                    if ( (*(_BYTE *)(&Buffer.Event.FocusEvent + 3) & 0x10) != 0 )
                    {
                      if ( HIWORD(v207) )
                        --HIWORD(v207);
                      else
                        HIWORD(v207) = v207 - 1;
                    }
                    else
                    {
                      HIWORD(v207) = (HIWORD(v207) + 1) % (unsigned __int16)v207;
                    }
                    v202 = 1;
                    break;
                  case 0x21u:
                    if ( HIWORD(v207) - 5 >= 0 )
                      HIWORD(v207) -= 5;
                    else
                      HIWORD(v207) = 0;
                    v202 = 1;
                    break;
                  case 0x22u:
                    if ( HIWORD(v207) + 5 <= (unsigned __int16)v207 - 1 )
                      HIWORD(v207) += 5;
                    else
                      HIWORD(v207) = v207 - 1;
                    v202 = 1;
                    break;
                  case 0x24u:
                    HIWORD(v207) = 0;
                    v202 = 1;
                    break;
                  case 0x23u:
                    HIWORD(v207) = v207 - 1;
                    v202 = 1;
                    break;
                  case 0x26u:
                    if ( HIWORD(v207) )
                      --HIWORD(v207);
                    else
                      HIWORD(v207) = v207 - 1;
                    v202 = 1;
                    break;
                  case 0x28u:
                    HIWORD(v207) = (HIWORD(v207) + 1) % (unsigned __int16)v207;
                    v202 = 1;
                    break;
                }
              }
            }
            else if ( BYTE2(v204) )
            {
              v201 = HIWORD(v207) + 1;
            }
          }
          else
          {
            BYTE2(v204) = 0;
          }
        }
      }
      else
      {
        v174 = GetLastError();
        v141 = (std::ostream *)std::operator<<<std::char_traits<char>>(
                                 (std::ostream *)&std::cerr,
                                 (int)"Could not read the console input buffer with ReadConsoleInput()");
        v142 = std::operator<<<std::char_traits<char>>(v141, (int)" Sys Error: ");
        v143 = std::ostream::operator<<(v142, v174);
        std::ostream::operator<<(v143, std::endl<char,std::char_traits<char>>);
        v201 = 0;
      }
    }
  }
  dwCursorPosition.Y += v207;
  if ( dwCursorPosition.Y > ConsoleScreenBufferInfo.dwSize.Y )
    dwCursorPosition.Y = ConsoleScreenBufferInfo.dwSize.Y;
  if ( dwCursorPosition.Y == ConsoleScreenBufferInfo.dwSize.Y )
  {
    --dwCursorPosition.Y;
    ScrollRectangle.Top = 1;
    ScrollRectangle.Left = 0;
    ScrollRectangle.Bottom = ConsoleScreenBufferInfo.dwSize.Y - 1;
    ScrollRectangle.Right = ConsoleScreenBufferInfo.dwSize.X - 1;
    dwDestinationOrigin.X = 0;
    dwDestinationOrigin.Y = 0;
    ScrollConsoleScreenBufferA(hConsoleOutput, &ScrollRectangle, 0, 0, &Fill);
  }
  if ( (_WORD)v207 )
    SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
  SetConsoleMode(hConsoleHandle, Mode);
  SetConsoleCursorInfo(hConsoleOutput, &ConsoleCursorInfo);
  CloseHandle(hConsoleHandle);
  CloseHandle(hConsoleOutput);
  v145 = v201;
  std::string::~string((std::string *)&v179);
  return v145;
}
