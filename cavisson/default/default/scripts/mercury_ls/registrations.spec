nsl_static_var(usnm:1,pswd:2, File=.ran, Refresh=SESSION, Mode=RANDOM, FirstDataLine=2, EncodeMode=All);
nsl_unique_number_var(credit, Format=%016lu, Refresh=SESSION);
nsl_search_var(departure, PAGE=findflight, LB="From", RB="(2)", LBMATCH=FIRST, SaveOffset=0, RETAINPREVALUE="YES", EncodeMode=None);
nsl_web_find(TEXT="Your reservation has been confirmed", PAGE=findflight_3);
