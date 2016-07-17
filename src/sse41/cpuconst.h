/* This file replaces CONST.H from Jaroslaw Wroblewski's AP26 sample
   implementation. The only changes are to declare the arrays static, and to
   use int64_t instead of long long for compilers that don't yet conform to
   the C99 standard.
*/

static char OK61[61];
static char OK67[67];
static char OK71[71];
static char OK73[73];
static char OK79[79];
static char OK83[83];
static char OK89[89];
static char OK97[97];
static char OK101[101];
static char OK103[103];
static char OK107[107];
static char OK109[109];
static char OK113[113];
static char OK127[127];
static char OK131[131];
static char OK137[137];
static char OK139[139];
static char OK149[149];
static char OK151[151];
static char OK157[157];
static char OK163[163];
static char OK167[167];
static char OK173[173];
static char OK179[179];
static char OK181[181];
static char OK191[191];
static char OK193[193];
static char OK197[197];
static char OK199[199];
static char OK211[211];
static char OK223[223];
static char OK227[227];
static char OK229[229];
static char OK233[233];
static char OK239[239];
static char OK241[241];
static char OK251[251];
static char OK257[257];
static char OK263[263];
static char OK269[269];
static char OK271[271];
static char OK277[277];
static char OK281[281];
static char OK283[283];
static char OK293[293];
static char OK307[307];
static char OK311[311];
static char OK313[313];
static char OK317[317];
static char OK331[331];
static char OK337[337];
static char OK347[347];
static char OK349[349];
static char OK353[353];
static char OK359[359];
static char OK367[367];
static char OK373[373];
static char OK379[379];
static char OK383[383];
static char OK389[389];
static char OK397[397];
static char OK401[401];
static char OK409[409];
static char OK419[419];
static char OK421[421];
static char OK431[431];
static char OK433[433];
static char OK439[439];
static char OK443[443];
static char OK449[449];
static char OK457[457];
static char OK461[461];
static char OK463[463];
static char OK467[467];
static char OK479[479];
static char OK487[487];
static char OK491[491];
static char OK499[499];
static char OK503[503];
static char OK509[509];
static char OK521[521];
static char OK523[523];
static char OK541[541];
static int64_t OKOK61[61];
static int64_t OKOK67[67];
static int64_t OKOK71[71];
static int64_t OKOK73[73];
static int64_t OKOK79[79];
static int64_t OKOK83[83];
static int64_t OKOK89[89];
static int64_t OKOK97[97];
static int64_t OKOK101[101];
static int64_t OKOK103[103];
static int64_t OKOK107[107];
static int64_t OKOK109[109];
static int64_t OKOK113[113];
static int64_t OKOK127[127];
static int64_t OKOK131[131];
static int64_t OKOK137[137];
static int64_t OKOK139[139];
static int64_t OKOK149[149];
static int64_t OKOK151[151];
static int64_t OKOK157[157];
static int64_t OKOK163[163];
static int64_t OKOK167[167];
static int64_t OKOK173[173];
static int64_t OKOK179[179];
static int64_t OKOK181[181];
static int64_t OKOK191[191];
static int64_t OKOK193[193];
static int64_t OKOK197[197];
static int64_t OKOK199[199];
static int64_t OKOK211[211];
static int64_t OKOK223[223];
static int64_t OKOK227[227];
static int64_t OKOK229[229];
static int64_t OKOK233[233];
static int64_t OKOK239[239];
static int64_t OKOK241[241];
static int64_t OKOK251[251];
static int64_t OKOK257[257];
static int64_t OKOK263[263];
static int64_t OKOK269[269];
static int64_t OKOK271[271];
static int64_t OKOK277[277];
static int64_t OKOK281[281];
static int64_t OKOK283[283];
static int64_t OKOK293[293];
static int64_t OKOK307[307];
static int64_t OKOK311[311];
static int64_t OKOK313[313];
static int64_t OKOK317[317];
static int64_t OKOK331[331];
static int64_t OKOK337[337];
static int64_t OKOK347[347];
static int64_t OKOK349[349];
static int64_t OKOK353[353];
static int64_t OKOK359[359];
static int64_t OKOK367[367];
static int64_t OKOK373[373];
static int64_t OKOK379[379];
static int64_t OKOK383[383];
static int64_t OKOK389[389];
static int64_t OKOK397[397];
static int64_t OKOK401[401];
static int64_t OKOK409[409];
static int64_t OKOK419[419];
static int64_t OKOK421[421];
static int64_t OKOK431[431];
static int64_t OKOK433[433];
static int64_t OKOK439[439];
static int64_t OKOK443[443];
static int64_t OKOK449[449];
static int64_t OKOK457[457];
static int64_t OKOK461[461];
static int64_t OKOK463[463];
static int64_t OKOK467[467];
static int64_t OKOK479[479];
static int64_t OKOK487[487];
static int64_t OKOK491[491];
static int64_t OKOK499[499];
static int64_t OKOK503[503];
static int64_t OKOK509[509];
static int64_t OKOK521[521];
static int64_t OKOK523[523];
static int64_t OKOK541[541];


/* These constants were generated with the PARI/GP command:
     forprime(p=61,331,print("#define INV",p," UINT64_C(",2^64\p,")"))
*/
#define INV61 UINT64_C(302405640552615600)
#define INV67 UINT64_C(275324538413575397)
#define INV71 UINT64_C(259813296812810586)
#define INV73 UINT64_C(252695124297391118)
#define INV79 UINT64_C(233503089540627235)
#define INV83 UINT64_C(222249928598910260)
#define INV89 UINT64_C(207266787345051141)
#define INV97 UINT64_C(190172619316593315)
#define INV101 UINT64_C(182641030432767837)
#define INV103 UINT64_C(179094602657374287)
#define INV107 UINT64_C(172399477324388332)
#define INV109 UINT64_C(169236184162472950)
#define INV113 UINT64_C(163245522776190722)
#define INV127 UINT64_C(145249953336295682)
#define INV131 UINT64_C(140814840257324821)
#define INV137 UINT64_C(134647766961383588)
#define INV139 UINT64_C(132710389019493177)
#define INV149 UINT64_C(123803651501406386)
#define INV151 UINT64_C(122163868037811600)
#define INV157 UINT64_C(117495185182863386)
#define INV163 UINT64_C(113170209041162893)
#define INV167 UINT64_C(110459545351554201)
#define INV173 UINT64_C(106628578460748853)
#define INV179 UINT64_C(103054436165975148)
#define INV181 UINT64_C(101915713114417412)
#define INV191 UINT64_C(96579811904238490)
#define INV193 UINT64_C(95578984837873324)
#define INV197 UINT64_C(93638294790403815)
#define INV199 UINT64_C(92697206400550510)
#define INV211 UINT64_C(87425327363552377)
#define INV223 UINT64_C(82720825442643729)
#define INV227 UINT64_C(81263189752024456)
#define INV229 UINT64_C(80553467570784068)
#define INV233 UINT64_C(79170575423646144)
#define INV239 UINT64_C(77183029597111094)
#define INV241 UINT64_C(76542506529915151)
#define INV251 UINT64_C(73493004277727297)
#define INV257 UINT64_C(71777214294589695)
#define INV263 UINT64_C(70139711306880424)
#define INV269 UINT64_C(68575256779589411)
#define INV271 UINT64_C(68069166323651481)
#define INV277 UINT64_C(66594743948409933)
#define INV281 UINT64_C(65646776063023315)
#define INV283 UINT64_C(65182841249857072)
#define INV293 UINT64_C(62958170900032599)
#define INV307 UINT64_C(60087114246610917)
#define INV311 UINT64_C(59314289626075728)
#define INV313 UINT64_C(58935284580541698)
#define INV317 UINT64_C(58191621683626345)
#define INV331 UINT64_C(55730344633563600)

//    forprime(p=337,541,print("#define INV",p," UINT64_C(",2^64\p,")"))
#define INV337 UINT64_C(54738112978366622)
#define INV347 UINT64_C(53160645745560667)
#define INV349 UINT64_C(52856000211202153)
#define INV353 UINT64_C(52257065364616293)
#define INV359 UINT64_C(51383688227603207)
#define INV367 UINT64_C(50263607830271257)
#define INV373 UINT64_C(49455077945602015)
#define INV379 UINT64_C(48672147951740241)
#define INV383 UINT64_C(48163822646761231)
#define INV389 UINT64_C(47420935922132523)
#define INV397 UINT64_C(46465350311610961)
#define INV401 UINT64_C(46001855545410353)
#define INV409 UINT64_C(45102063749901104)
#define INV419 UINT64_C(44025642180691053)
#define INV421 UINT64_C(43816494236839790)
#define INV431 UINT64_C(42799870240625409)
#define INV433 UINT64_C(42602180308798040)
#define INV439 UINT64_C(42019918163347497)
#define INV443 UINT64_C(41640505809728107)
#define INV449 UINT64_C(41084062524965593)
#define INV457 UINT64_C(40364866682077793)
#define INV461 UINT64_C(40014629227135686)
#define INV463 UINT64_C(39841779856824085)
#define INV467 UINT64_C(39500522641776341)
#define INV479 UINT64_C(38510947961815347)
#define INV487 UINT64_C(37878324586672590)
#define INV491 UINT64_C(37569743530976683)
#define INV499 UINT64_C(36967422993405915)
#define INV503 UINT64_C(36673447462643243)
#define INV509 UINT64_C(36241147492553146)
#define INV521 UINT64_C(35406418567580713)
#define INV523 UINT64_C(35271021173440825)
#define INV541 UINT64_C(34097493666745936)


/* evaluates to (N%P), assuming N < 2^(64-S), P < 2^S.
*/
#define REM(_N,_P,_S) \
  (UINT32_C(_P)*(uint32_t)(((INV##_P*((uint64_t)(_N)+1))>>(32+_S))))>>(32-_S)
