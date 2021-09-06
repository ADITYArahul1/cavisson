/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: cavisson
    Date of recording: 09/01/2021 11:12:19
    Flow details:
    Build details: 4.6.1 (build# 55)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{
    ns_start_transaction("welcome");
    ns_web_url ("welcome",
        "URL=http://10.10.30.58:9013/cgi-bin/welcome",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("welcome", NS_AUTO_STATUS);
    ns_page_think_time(25.89);

    //Page Auto split for Image Link 'Login' Clicked by User
    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=http://10.10.30.58:9013/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username={usnm}&password={pass}&login.x=33&login.y=5&JSFormSubmit=off",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("login", NS_AUTO_STATUS);
    ns_page_think_time(2.959);

    //Page Auto split for Image Link 'Search Flights Button' Clicked by User
    ns_start_transaction("reservation");
    ns_web_url ("reservation",
        "URL=http://10.10.30.58:9013/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/continue.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);
    ns_page_think_time(10.537);

    //Page Auto split for Image Link 'findFlights' Clicked by User
    ns_start_transaction("findflight");
    ns_web_url ("findflight",
        "URL=http://10.10.30.58:9013/cgi-bin/findflight?depart=Paris&departDate=09-02-2021&arrive=London&returnDate=09-03-2021&numPassengers=1&seatPref=Window&seatType=Coach&findFlights.x=95&findFlights.y=11",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/continue.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/startover.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(1.887);

    //Page Auto split for Image Link 'reserveFlights' Clicked by User
    ns_start_transaction("findflight_2");
    ns_web_url ("findflight_2",
        "URL=http://10.10.30.58:9013/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=420%7C108%7C09-02-2021&hidden_outboundFlight_button1=421%7C99%7C09-02-2021&hidden_outboundFlight_button2=422%7C103%7C09-02-2021&hidden_outboundFlight_button3=423%7C89%7C09-02-2021&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=Window&reserveFlights.x=54&reserveFlights.y=9",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/startover.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("findflight_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("json");
    ns_web_url ("json",
        "URL=https://update.googleapis.com/service/update2/json?cup2key=10:1073717489&cup2hreq=a84783c33a03df16d6319569068d43f11efe429349ceed6a4e53ab48a082adf8",
        "METHOD=POST",
        "HEADER=X-Goog-Update-AppId:cmahhnpholdijhjokonmfdjbfmklppij,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,ojhpjlocmbogdgmfpkhlaaeamibhnphh,ggkkehgbnfjpeggfpleeakpidbkibbmn,gcmjkmgdlgnkkcocmoeiminaijmmjnii,aemomkdncapdnfajjbbcbdebjljbpmpj,jamhcnnkihinmdlkakkaopbjbbcngflc,llkgjffcdpffmhiakmfcdcblohccpfmo,pdafiollngonhoadbmdoemagnfpdphbe,obedbbhbpmojnkanicioggnmelmoomoc,oimompecagnajdejgnnjijobebaeigek,hfnkpimlhhgieaddgfemjhofmfblmnib,jflookgnkcckhobaglndicnbbgbonegd,eeigpngbgcognadeebkilcpcaedhellh",
        "HEADER=X-Goog-Update-Interactivity:bg",
        "HEADER=X-Goog-Update-Updater:chromium-90.0.4430.93",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chromium","acceptformat":"crx2,crx3","app":[{"appid":"cmahhnpholdijhjokonmfdjbfmklppij","cohort":"1:wr3:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.b4ddbdce4f8d5c080328aa34c19cb533f2eedec580b5d97dc14f74935e4756b7"}]},"ping":{"ping_freshness":"{855dd35b-3b13-4e95-a51b-a9a296c8d281}","rd":5356},"updatecheck":{},"version":"1.0.6"},{"appid":"giekcmmlnklenlaomppkphknjmnnpneh","cohort":"1:j5l:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace"}]},"ping":{"ping_freshness":"{629c12ec-61b8-4f8c-8a44-9e6580f2dc8a}","rd":5356},"updatecheck":{},"version":"7"},{"appid":"khaoiebndkojlmppeemjhbpbandiljpe","cohort":"1:cux:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.ffd1d2d75a8183b0a1081bd03a7ce1d140fded7a9fb52cf3ae864cd4d408ceb4"}]},"ping":{"ping_freshness":"{037ec737-659f-41ee-8dff-6e1728f77e4c}","rd":5356},"updatecheck":{},"version":"43"},{"appid":"ojhpjlocmbogdgmfpkhlaaeamibhnphh","cohort":"1:w0x:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0"}]},"ping":{"ping_freshness":"{49c70b02-05e4-4e83-bc15-f82b3ba9d710}","rd":5356},"updatecheck":{},"version":"1"},{"appid":"ggkkehgbnfjpeggfpleeakpidbkibbmn","cohort":"1:ut9:","cohorthint":"M80ToM99","cohortname":"M80ToM99","enabled":true,"packages":{"package":[{"fp":"1.0dc23b37d1fa49e00e0a208bfcb91839be99b9e85162814b05987c2eba1b3701"}]},"ping":{"ping_freshness":"{66f5b202-e44b-49dd-be38-060412373236}","rd":5356},"updatecheck":{},"version":"2021.8.23.1140"},{"appid":"gcmjkmgdlgnkkcocmoeiminaijmmjnii","cohort":"1:bm1:","cohorthint":"M54ToM99","cohortname":"M54ToM99","enabled":true,"packages":{"package":[{"fp":"1.b45fc5f3479dc7b07e8e5822a11785819b7f1c249c9b47dcffcb28edbbc2d706"}]},"ping":{"ping_freshness":"{b19a773b-75c0-4ec4-98f0-f980d9c35597}","rd":5356},"updatecheck":{},"version":"9.29.4"},{"appid":"aemomkdncapdnfajjbbcbdebjljbpmpj","cohort":"1::","enabled":true,"packages":{"package":[{"fp":"1.c25787c5c76ff9c4c50a87d32802301c9ed80d934830d677bbc6629e290cb5aa"}]},"ping":{"ping_freshness":"{5e71a488-436d-475d-9db1-178222e37192}","rd":5356},"updatecheck":{},"version":"1.0.6.0"},{"appid":"jamhcnnkihinmdlkakkaopbjbbcngflc","cohort":"1:wvr:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.c91beae2945864c7da26e4a3a96919be68f2a85bf085e3bbb0d7829c62e27e39"}]},"ping":{"ping_freshness":"{23d7e912-9bf5-41b6-8636-9c4dd346c247}","rd":5356},"updatecheck":{},"version":"95.0.4625.0"},{"appid":"llkgjffcdpffmhiakmfcdcblohccpfmo","cohort":"1::","enabled":true,"packages":{"package":[{"fp":"1.2731bdeddb1470bf2f7ae9c585e7315be52a8ce98b8af698ece8e500426e378a"}]},"ping":{"ping_freshness":"{3375b10d-ef03-460f-9f05-5ce4439017ff}","rd":5356},"updatecheck":{},"version":"1.0.0.8"},{"appid":"pdafiollngonhoadbmdoemagnfpdphbe","cohort":"1:vz3:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.54b93e249d02a0f9061e8f70866d4668a0260db9ae43483810ab78f97f3eaa2a"}]},"ping":{"ping_freshness":"{fd961ad8-db7b-4413-b9d6-9960c5643899}","rd":5356},"updatecheck":{},"version":"2021.8.17.1300"},{"accept_locale":"ENUS","appid":"obedbbhbpmojnkanicioggnmelmoomoc","cohort":"1:s6f:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.4010b422f6e3b0881e3a64a31e883f98978378de778212869c5f7ce73fb76513"}]},"ping":{"ping_freshness":"{ab10d808-3eee-498e-aaad-78c343f65392}","rd":5356},"updatecheck":{},"version":"20210821.392895555"},{"appid":"oimompecagnajdejgnnjijobebaeigek","cohort":"1::","enabled":true,"packages":{"package":[{"fp":"1.0727b38159b38ffa3633510444ece15c86417962e8cac59c59002f13b50239ac"}]},"ping":{"ping_freshness":"{d2d14081-e481-4503-808a-2c9bf2ee10ed}","rd":5356},"updatecheck":{},"version":"4.10.2209.0"},{"appid":"hfnkpimlhhgieaddgfemjhofmfblmnib","cohort":"1:jcl:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.14f73e1a7c2cda11c73ef6ad56407ca320aca23afd205c786f6d7b7f815509a8"}]},"ping":{"ping_freshness":"{eec7c268-d052-49c9-b6e5-ae25acc2f6e0}","rd":5356},"updatecheck":{},"version":"6825"},{"appid":"jflookgnkcckhobaglndicnbbgbonegd","cohort":"1:s7x:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.0b2b9f6c301d171f9d8878e434d166796f860b6d91a552b2926115c90544763d"}]},"ping":{"ping_freshness":"{dbcbd78c-4b18-49fc-b5f4-ab45eb1c7cb0}","rd":5356},"updatecheck":{},"version":"2686"},{"appid":"eeigpngbgcognadeebkilcpcaedhellh","cohort":"1:w59:","cohorthint":"Auto","cohortname":"Auto","enabled":true,"packages":{"package":[{"fp":"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05"}]},"ping":{"ping_freshness":"{516c4fff-6262-4f3e-87b7-dc76e0b16d06}","rd":5356},"updatecheck":{},"version":"2020.11.2.164946"}],"arch":"x64","dedup":"cr","domainjoined":false,"hw":{"physmemory":7},"lang":"en-US","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18363.1734"},"prodversion":"90.0.4430.93","protocol":"3.1","requestid":"{e0984375-cf36-437d-bf50-f267b32e2cc7}","sessionid":"{f6639d03-cc7b-4898-8abc-1dbe70b4aa1d}","updaterversion":"90.0.4430.93"}}",
        BODY_END
    );

    ns_end_transaction("json", NS_AUTO_STATUS);
    ns_page_think_time(15.129);

    //Page Auto split for Image Link 'buyFlights' Clicked by User
    ns_start_transaction("findflight_3");
    ns_web_url ("findflight_3",
        "URL=http://10.10.30.58:9013/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard={credit}&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=Window&outboundFlight=420%7C108%7C09-02-2021&advanceDiscount=&buyFlights.x=86&buyFlights.y=9&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/bookanother.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("findflight_3", NS_AUTO_STATUS);
    ns_page_think_time(5.854);

    //Page Auto split for Image Link 'SignOff Button' Clicked by User
    ns_start_transaction("welcome_2");
    ns_web_url ("welcome_2",
        "URL=http://10.10.30.58:9013/cgi-bin/welcome",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-US,en;q=0.9",
        INLINE_URLS,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE,
            "URL=http://10.10.30.58:9013/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-US,en;q=0.9", END_INLINE
    );

    ns_end_transaction("welcome_2", NS_AUTO_STATUS);

    //Page Auto split for Method = POST
    ns_start_transaction("json_2");
    ns_web_url ("json_2",
        "URL=https://update.googleapis.com/service/update2/json",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Sec-Fetch-Site:none",
        "HEADER=Sec-Fetch-Mode:no-cors",
        "HEADER=Sec-Fetch-Dest:empty",
        BODY_BEGIN,
            "{"request":{"@os":"win","@updater":"chromium","acceptformat":"crx2,crx3","app":[{"appid":"jamhcnnkihinmdlkakkaopbjbbcngflc","event":[{"download_time_ms":21712,"downloaded":818384,"downloader":"bits","eventresult":1,"eventtype":14,"nextversion":"95.0.4629.0","previousversion":"95.0.4625.0","total":818384,"url":"http://edgedl.me.gvt1.com/edgedl/release2/chrome_component/acnvdbpgtxet4etajtcc4j3j52qa_95.0.4629.0/jamhcnnkihinmdlkakkaopbjbbcngflc_95.0.4629.0_all_acntlcpl45edebcto7yguhj7iddq.crx3"},{"eventresult":1,"eventtype":3,"nextfp":"1.1ec662e43df6a66d8addd5a54a81145601322ab1d9bc35d61c7508350a7fc31e","nextversion":"95.0.4629.0","previousfp":"1.c91beae2945864c7da26e4a3a96919be68f2a85bf085e3bbb0d7829c62e27e39","previousversion":"95.0.4625.0"}],"version":"95.0.4629.0"}],"arch":"x64","dedup":"cr","hw":{"physmemory":7},"lang":"en-US","nacl_arch":"x86-64","os":{"arch":"x86_64","platform":"Windows","version":"10.0.18363.1734"},"prodversion":"90.0.4430.93","protocol":"3.1","requestid":"{bf95ddaf-f73d-4268-85af-fd3d809c992d}","sessionid":"{f6639d03-cc7b-4898-8abc-1dbe70b4aa1d}","updaterversion":"90.0.4430.93"}}",
        BODY_END
    );

    ns_end_transaction("json_2", NS_AUTO_STATUS);
    ns_page_think_time(5.498);

}
