 # Iepazīšanās ar Shell komandām un noderīgiem paņēmieniem darbam ar CLI
 1. Paņēmieni
    - Poga &#8593; uz augšu un poga uz leju - atgrieš ieprikešējo darbibu
    - Tab poga - notīra visu iepriekšējo
 2. Komandas
    - OS noskaidrošana - ```uname```
    - ```uname -a``` - pilna info par OS
    - ```echo``` - teksta izvadīšana
    - ```pwd``` - pašreizēja darba direkotija
    - ```cd ..``` - pārvietotos uz par vienu direktoriju uz augšu
    - ```cd``` tieši uz mapi
    - ```cd-```- iepreikšēja direktorija
    - ```ls``` - izvadīt pašreizējas direktorijas saturu
    - ```ls -r```- saskaitīt visu failu apakšdirektorijas
    - ```ls -a```- slēptās direktorijas
    - ```ls -al``` - visi faili ar visu informāciju -> atļaujas, lielumi, īpašnieki utt.
    - ```whoami``` - lietotāju 
    - ```pfd``` - pašreizēja darba direktorija
    - ```uname --help``` - izvada kādas ir papildus iespejas ar dažādām kombinācijām
    - ```mkdir``` - izveidot direktorija
    - ```-p``` - izveidot arī to iekļaujošas direktorijas
    - ```id``` - uzzināt kads lietotājs esmu un kādas tiesības ir 
    - ```top``` - aplūkot aktīvākos procesus
    - ```ps``` - apskatīt proscesus vispāreji
    - ```ipconfig``` - konfigurēt tīkla interfeisu
    - ```route``` - konfigurēt maršrutus
    - ```ip``` - kā internetā rakstīts "jaunās apudzes tīkls kas 'prot darīt visu'"\
                                                                   JAUNA LEKCIJA 23.09.2021
    - ```nano first_code.c``` - izveidojam failu kur mēs pieraktām sandata kaut kādu funkciju, piemēram atgriežam kaut kādu darbibu vai to pašu vinkciju
    - ```cat first_code.c``` - atver mūsu iepriekš ievadīto funkciju, aplūkošanai
    - ```hexdump -C first_code.c``` izvada mūs failu binārajā kodā
    - ```gcc -save-temps first_code.c``` komponēt 'gcc'
    - ```mv  a.out b.out``` - neizdevīgs mēģinājums nomainīt nosaukumu, lai verētu aplūkot nākošo komandu
    - ```echo $?``` - kļūdas izvadīšana, ja izvadās 0 tad viss okey
    - ```gcc -save-temps first_code.c -o first.out``` - nomainījām nosaukumu un uzrakstot ```ls -lt``` var to aplūkot
    - ```./first.out``` - visātrāk pielēdzamies, jo ja ievadīt mūsu pirmo noaukumu ./first_code.c izmet informāciju atļauja liegta
    - ```nano first_code.s``` - nezinu bet internetā rakstīts konsoles teksta redaktors 
    - ```ls -lt``` - aplūkot informāciju par datiem, ierakstiem, kā arī cik bitus - baitus aizņem tie
    
 Secinājumi: 23.09 Šodien daudz kas vairāk nebija saprotams, bet pašam mēģinot rakstīt komandas tas jau palika interesanti nepieciešams tikai vairāk prakstiski patrenēties vai arī cītīgāk klausīties un uzreiz sekot un darīt nepieciešamo, jeb atkārtot uzreiz kas notiek uz ekrāna. PS. pārejās komandas nerakstīju jo tās apvienojot var saprast ko daraījām iepriekšējā lekcijā.
   
      
    
 
