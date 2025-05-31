# Failų analizatorius
## Programos paskirtis
**Šios prorgamos tikslas yra išanalizuoti jai pateikiamą duomenų failą įvairiais metodais**, apie konkrečiau galima rasti žemiau skiltyje **Programos naudojimo instrukcijos**
## Programos naudojimo instrukcijos
+ Paleidus programą turėtumėte matyti štai tokį meniu:
```
Select:
1) to count words and find their references
2) to detect links in text
3) to do both 1) and 2)
4) to modify input file
5) to quit
```
+ Pasirinkus pirmąjį variantą yra suskaičiuojamas pasikartojančių žodžių kiekis ir ir kur jie pasikartoja. Šie duomenys yra išsaugojami programos pagrindinėjė direktorijoje failuose ```output.txt``` ir ```freq.txt```. Pasirinktinai galima šiuos duomenis ir išspausdinti ekrane.
+ Pasrinktus antrąjį variantą yra aptinkami įvairūs url tekstuose ir išvedami į failą kuris yra sukuriamas projekto pagrindinėje direktorijoje pavadinimu ```urls.txt```. Pasirinktinai duomenis galima išvesti ir į ekraną.
+ Trečias pasirinkimas atitinkamai įvykdo abi funkcijas aprašytas aukščiau.
+ Pasirinkus variantą nr. 4 vartotojui yra leidžiamą įvesti tekstą į failą kuris toliau gali būti apdorojimas 1-3 parinktimis. Kitu atveju ```failą input.txt``` galima redaguoti tiesiogiai. Šis failas yra failo pagrindinėje direktorijoje
+ Penktas pasirinkimas išjungia programą.
## Pavyzdžiai
### 1) to count words and find their references
+ ```input.txt```
```
Genesis 5
KJV [Online]
The Descendants of Adam(1 Chronicles 1:1–3)
1 This [is] the book of the generations of Adam. In the day that God created man, in the likeness of
God made he him; 2 Male and female created he them; and blessed them, and called their name Adam,
in the day when they were created.
3 And Adam lived an hundred and thirty years, and begat [a son] in his own likeness, after his image;
and called his name Seth: 4 And the days of Adam after he had begotten Seth were eight hundred
years: and he begat sons and daughters: 5 And all the days that Adam lived were nine hundred and
thirty years: and he died.
6 And Seth lived an hundred and five years, and begat Enos: 7 And Seth lived after he begat Enos eight
hundred and seven years, and begat sons and daughters: 8 And all the days of Seth were nine hundred
and twelve years: and he died.
9 And Enos lived ninety years, and begat Cainan: 10 And Enos lived after he begat Cainan eight hundred
and fifteen years, and begat sons and daughters: 11 And all the days of Enos were nine hundred and
five years: and he died.
12 And Cainan lived seventy years, and begat Mahalaleel: 13 And Cainan lived after he begat Mahalaleel
eight hundred and forty years, and begat sons and daughters: 14 And all the days of Cainan were nine
hundred and ten years: and he died.
15 And Mahalaleel lived sixty and five years, and begat Jared: 16 And Mahalaleel lived after he begat
Jared eight hundred and thirty years, and begat sons and daughters: 17 And all the days of Mahalaleel
were eight hundred ninety and five years: and he died.
God Takes Up Enoch(Hebrews 11:5)
18 And Jared lived an hundred sixty and two years, and he begat Enoch: 19 And Jared lived after he
begat Enoch eight hundred years, and begat sons and daughters: 20 And all the days of Jared were
nine hundred sixty and two years: and he died.
21 And Enoch lived sixty and five years, and begat Methuselah: 22 And Enoch walked with God after he
begat Methuselah three hundred years, and begat sons and daughters: 23 And all the days of Enoch
were three hundred sixty and five years: 24 And Enoch walked with God: and he [was] not; for God
took him.
From Methuselah to Noah
25 And Methuselah lived an hundred eighty and seven years, and begat Lamech: 26 And Methuselah
lived after he begat Lamech seven hundred eighty and two years, and begat sons and daughters:
27 And all the days of Methuselah were nine hundred sixty and nine years: and he died.
28 And Lamech lived an hundred eighty and two years, and begat a son: 29 And he called his name
Noah, saying, This [same] shall comfort us concerning our work and toil of our hands, because of the
ground which the LORD hath cursed. 30 And Lamech lived after he begat Noah five hundred ninety and
five years, and begat sons and daughters: 31 And all the days of Lamech were seven hundred seventy
and seven years: and he died.
32 And Noah was five hundred years old: and Noah begat Shem, Ham, and Japheth.
Genesis 6
KJV [Online]
Corruption on the Earth(Matthew 24:36–51)
1 And it came to pass, when men began to multiply on the face of the earth, and daughters were born
unto them, 2 That the sons of God saw the daughters of men that they [were] fair; and they took them
wives of all which they chose. 3 And the LORD said, My spirit shall not always strive with man, for that
he also [is] flesh: yet his days shall be an hundred and twenty years. 4 There were giants in the earth
in those days; and also after that, when the sons of God came in unto the daughters of men, and they
bare [children] to them, the same [became] mighty men which [were] of old, men of renown.
5 And GOD saw that the wickedness of man [was] great in the earth, and [that] every imagination of
the thoughts of his heart [was] only evil continually. 6 And it repented the LORD that he had made man
on the earth, and it grieved him at his heart. 7 And the LORD said, I will destroy man whom I have
created from the face of the earth; both man, and beast, and the creeping thing, and the fowls of the
air; for it repenteth me that I have made them.
Noah’s Favor with God
8 But Noah found grace in the eyes of the LORD.
9 These [are] the generations of Noah: Noah was a just man [and] perfect in his generations, [and]
Noah walked with God. 10 And Noah begat three sons, Shem, Ham, and Japheth.
11 The earth also was corrupt before God, and the earth was filled with violence. 12 And God looked
upon the earth, and, behold, it was corrupt; for all flesh had corrupted his way upon the earth.
Preparing the Ark(Hebrews 11:7)
13 And God said unto Noah, The end of all flesh is come before me; for the earth is filled with violence
through them; and, behold, I will destroy them with the earth. 14 Make thee an ark of gopher wood;
rooms shalt thou make in the ark, and shalt pitch it within and without with pitch. 15 And this [is the
fashion] which thou shalt make it [of]: The length of the ark [shall be] three hundred cubits, the
breadth of it fifty cubits, and the height of it thirty cubits. 16 A window shalt thou make to the ark, and
in a cubit shalt thou finish it above; and the door of the ark shalt thou set in the side thereof; [with]
lower, second, and third [stories] shalt thou make it. 17 And, behold, I, even I, do bring a flood of
waters upon the earth, to destroy all flesh, wherein [is] the breath of life, from under heaven; [and]
every thing that [is] in the earth shall die. 18 But with thee will I establish my covenant; and thou shalt
come into the ark, thou, and thy sons, and thy wife, and thy sons’ wives with thee. 19 And of every
living thing of all flesh, two of every [sort] shalt thou bring into the ark, to keep [them] alive with thee;
they shall be male and female. 20 Of fowls after their kind, and of cattle after their kind, of every
creeping thing of the earth after his kind, two of every [sort] shall come unto thee, to keep [them]
alive. 21 And take thou unto thee of all food that is eaten, and thou shalt gather [it] to thee; and it shall
be for food for thee, and for them. 22 Thus did Noah; according to all that God commanded him, so did
he.
Genesis 7
KJV [Online]
The Great Flood(2 Peter 3:1–7)
1 And the LORD said unto Noah, Come thou and all thy house into the ark; for thee have I seen righteous
before me in this generation. 2 Of every clean beast thou shalt take to thee by sevens, the male and
his female: and of beasts that [are] not clean by two, the male and his female. 3 Of fowls also of the
air by sevens, the male and the female; to keep seed alive upon the face of all the earth. 4 For yet
seven days, and I will cause it to rain upon the earth forty days and forty nights; and every living
substance that I have made will I destroy from off the face of the earth. 5 And Noah did according unto
all that the LORD commanded him.
6 And Noah [was] six hundred years old when the flood of waters was upon the earth. 7 And Noah went
in, and his sons, and his wife, and his sons’ wives with him, into the ark, because of the waters of the
flood. 8 Of clean beasts, and of beasts that [are] not clean, and of fowls, and of every thing that
creepeth upon the earth, 9 There went in two and two unto Noah into the ark, the male and the female,
as God had commanded Noah. 10 And it came to pass after seven days, that the waters of the flood
were upon the earth. 11 In the six hundredth year of Noah’s life, in the second month, the seventeenth
day of the month, the same day were all the fountains of the great deep broken up, and the windows
of heaven were opened. 12 And the rain was upon the earth forty days and forty nights.
13 In the selfsame day entered Noah, and Shem, and Ham, and Japheth, the sons of Noah, and Noah’s
wife, and the three wives of his sons with them, into the ark; 14 They, and every beast after his kind,
and all the cattle after their kind, and every creeping thing that creepeth upon the earth after his kind,
and every fowl after his kind, every bird of every sort. 15 And they went in unto Noah into the ark, two
and two of all flesh, wherein [is] the breath of life. 16 And they that went in, went in male and female
of all flesh, as God had commanded him: and the LORD shut him in.
17 And the flood was forty days upon the earth; and the waters increased, and bare up the ark, and it
was lift up above the earth. 18 And the waters prevailed, and were increased greatly upon the earth;
and the ark went upon the face of the waters. 19 And the waters prevailed exceedingly upon the earth;
and all the high hills, that [were] under the whole heaven, were covered. 20 Fifteen cubits upward did
the waters prevail; and the mountains were covered. 21 And all flesh died that moved upon the earth,
both of fowl, and of cattle, and of beast, and of every creeping thing that creepeth upon the earth,
and every man: 22 All in whose nostrils [was] the breath of life, of all that [was] in the dry [land], died.
23 And every living substance was destroyed which was upon the face of the ground, both man, and
cattle, and the creeping things, and the fowl of the heaven; and they were destroyed from the earth:
and Noah only remained [alive], and they that [were] with him in the ark. 24 And the waters prevailed
upon the earth an hundred and fifty days.
Genesis 8
KJV [Online]
The Ark Rests on Ararat
1 And God remembered Noah, and every living thing, and all the cattle that [was] with him in the ark:
and God made a wind to pass over the earth, and the waters asswaged; 2 The fountains also of the
deep and the windows of heaven were stopped, and the rain from heaven was restrained; 3 And the
waters returned from off the earth continually: and after the end of the hundred and fifty days the
waters were abated. 4 And the ark rested in the seventh month, on the seventeenth day of the month,
upon the mountains of Ararat. 5 And the waters decreased continually until the tenth month: in the
tenth [month], on the first [day] of the month, were the tops of the mountains seen.
Noah Sends a Raven and a Dove
6 And it came to pass at the end of forty days, that Noah opened the window of the ark which he had
made: 7 And he sent forth a raven, which went forth to and fro, until the waters were dried up from off
the earth. 8 Also he sent forth a dove from him, to see if the waters were abated from off the face of
the ground; 9 But the dove found no rest for the sole of her foot, and she returned unto him into the
ark, for the waters [were] on the face of the whole earth: then he put forth his hand, and took her,
and pulled her in unto him into the ark. 10 And he stayed yet other seven days; and again he sent forth
the dove out of the ark; 11 And the dove came in to him in the evening; and, lo, in her mouth [was] an
olive leaf pluckt off: so Noah knew that the waters were abated from off the earth. 12 And he stayed
yet other seven days; and sent forth the dove; which returned not again unto him any more.
Exiting the Ark
13 And it came to pass in the six hundredth and first year, in the first [month], the first [day] of the
month, the waters were dried up from off the earth: and Noah removed the covering of the ark, and
looked, and, behold, the face of the ground was dry. 14 And in the second month, on the seven and
twentieth day of the month, was the earth dried. 15 And God spake unto Noah, saying, 16 Go forth of
the ark, thou, and thy wife, and thy sons, and thy sons’ wives with thee. 17 Bring forth with thee every
living thing that [is] with thee, of all flesh, [both] of fowl, and of cattle, and of every creeping thing
that creepeth upon the earth; that they may breed abundantly in the earth, and be fruitful, and multiply
upon the earth. 18 And Noah went forth, and his sons, and his wife, and his sons’ wives with him:
19 Every beast, every creeping thing, and every fowl, [and] whatsoever creepeth upon the earth, after
their kinds, went forth out of the ark.
Noah Builds an Altar
20 And Noah builded an altar unto the LORD; and took of every clean beast, and of every clean fowl,
and offered burnt offerings on the altar. 21 And the LORD smelled a sweet savour; and the LORD said
in his heart, I will not again curse the ground any more for man’s sake; for the imagination of man’s
heart [is] evil from his youth; neither will I again smite any more every thing living, as I have done.
22 While the earth remaineth, seedtime and harvest, and cold and heat, and summer and winter, and
day and night shall not cease.
Genesis 9
KJV [Online]
The Covenant of the Rainbow
1 And God blessed Noah and his sons, and said unto them, Be fruitful, and multiply, and replenish the
earth. 2 And the fear of you and the dread of you shall be upon every beast of the earth, and upon
every fowl of the air, upon all that moveth [upon] the earth, and upon all the fishes of the sea; into
your hand are they delivered. 3 Every moving thing that liveth shall be meat for you; even as the green
herb have I given you all things. 4 But flesh with the life thereof, [which is] the blood thereof, shall ye
not eat. 5 And surely your blood of your lives will I require; at the hand of every beast will I require it,
and at the hand of man; at the hand of every man’s brother will I require the life of man.
6 Whoso sheddeth man’s blood, by man shall his blood be shed: for in the image of God made he man.
7 And you, be ye fruitful, and multiply; bring forth abundantly in the earth, and multiply therein.
8 And God spake unto Noah, and to his sons with him, saying, 9 And I, behold, I establish my covenant
with you, and with your seed after you; 10 And with every living creature that [is] with you, of the fowl,
of the cattle, and of every beast of the earth with you; from all that go out of the ark, to every beast
of the earth. 11 And I will establish my covenant with you; neither shall all flesh be cut off any more by
the waters of a flood; neither shall there any more be a flood to destroy the earth. 12 And God said,
This [is] the token of the covenant which I make between me and you and every living creature that
[is] with you, for perpetual generations: 13 I do set my bow in the cloud, and it shall be for a token of
a covenant between me and the earth. 14 And it shall come to pass, when I bring a cloud over the
earth, that the bow shall be seen in the cloud: 15 And I will remember my covenant, which [is] between
me and you and every living creature of all flesh; and the waters shall no more become a flood to
destroy all flesh. 16 And the bow shall be in the cloud; and I will look upon it, that I may remember the
everlasting covenant between God and every living creature of all flesh that [is] upon the earth. 17 And
God said unto Noah, This [is] the token of the covenant, which I have established between me and all
flesh that [is] upon the earth.
Noah’s Shame and Canaan’s Curse
18 And the sons of Noah, that went forth of the ark, were Shem, and Ham, and Japheth: and Ham [is]
the father of Canaan. 19 These [are] the three sons of Noah: and of them was the whole earth
overspread.
20 And Noah began [to be] an husbandman, and he planted a vineyard: 21 And he drank of the wine,
and was drunken; and he was uncovered within his tent. 22 And Ham, the father of Canaan, saw the
nakedness of his father, and told his two brethren without. 23 And Shem and Japheth took a garment,
and laid [it] upon both their shoulders, and went backward, and covered the nakedness of their father;
and their faces [were] backward, and they saw not their father’s nakedness. 24 And Noah awoke from
his wine, and knew what his younger son had done unto him.
25 And he said, Cursed [be] Canaan; a servant of servants shall he be unto his brethren.
Shem’s Blessing and Noah’s Death
26 And he said, Blessed [be] the LORD God of Shem; and Canaan shall be his servant.
27 God shall enlarge Japheth, and he shall dwell in the tents of Shem; and Canaan shall be his servant.
28 And Noah lived after the flood three hundred and fifty years. 29 And all the days of Noah were nine
hundred and fifty years: and he died.
Genesis 10
KJV [Online]
The Table of Nations(1 Chronicles 1:4–27)
1 Now these [are] the generations of the sons of Noah, Shem, Ham, and Japheth: and unto them were
sons born after the flood.
The Japhethites
2 The sons of Japheth; Gomer, and Magog, and Madai, and Javan, and Tubal, and Meshech, and Tiras.
3 And the sons of Gomer; Ashkenaz, and Riphath, and Togarmah. 4 And the sons of Javan; Elishah, and
Tarshish, Kittim, and Dodanim. 5 By these were the isles of the Gentiles divided in their lands; every
one after his tongue, after their families, in their nations.
The Hamites
6 And the sons of Ham; Cush, and Mizraim, and Phut, and Canaan. 7 And the sons of Cush; Seba, and
Havilah, and Sabtah, and Raamah, and Sabtecha: and the sons of Raamah; Sheba, and Dedan. 8 And
Cush begat Nimrod: he began to be a mighty one in the earth. 9 He was a mighty hunter before the
LORD: wherefore it is said, Even as Nimrod the mighty hunter before the LORD. 10 And the beginning
of his kingdom was Babel, and Erech, and Accad, and Calneh, in the land of Shinar. 11 Out of that land
went forth Asshur, and builded Nineveh, and the city Rehoboth, and Calah, 12 And Resen between
Nineveh and Calah: the same [is] a great city. 13 And Mizraim begat Ludim, and Anamim, and Lehabim,
and Naphtuhim, 14 And Pathrusim, and Casluhim, (out of whom came Philistim,) and Caphtorim.
15 And Canaan begat Sidon his firstborn, and Heth, 16 And the Jebusite, and the Amorite, and the
Girgasite, 17 And the Hivite, and the Arkite, and the Sinite, 18 And the Arvadite, and the Zemarite, and
the Hamathite: and afterward were the families of the Canaanites spread abroad. 19 And the border of
the Canaanites was from Sidon, as thou comest to Gerar, unto Gaza; as thou goest, unto Sodom, and
Gomorrah, and Admah, and Zeboim, even unto Lasha. 20 These [are] the sons of Ham, after their
families, after their tongues, in their countries, [and] in their nations
```
+ ```output.txt```
```
canaanites 2
sidon 2
city 2
nineveh 2
hunter 2
fifty 5
to 28
pitch 2
shalt 11
into 10
thee 13
make 6
9 7
sons’ 4
upon 31
the 306
before 5
corrupt 2
servant 3
are 7
between 6
17 6
air 3
24 3
saying 3
creeping 7
beast 10
kjv 6
filled 2
at 5
come 5
ye 2
evil 2
heart 4
imagination 2
every 38
bare 2
commanded 4
also 6
above 2
set 2
my 6
kind 7
said 11
an 12
even 4
families 3
began 3
men 5
pass 6
under 2
on 9
begat 31
ham 9
8 7
canaan 7
son 3
which 12
because 2
raamah 2
eight 7
five 9
deep 2
destroy 6
died 11
hundred 31
mighty 4
was 28
11 6
me 7
shem 8
image 2
after 28
covenant 9
be 22
him 18
and 388
name 3
went 12
sixty 6
mountains 3
blessed 3
generations 5
nakedness 3
of 161
altar 3
window 2
thereof 3
multiply 5
this 6
thou 16
things 2
may 2
were 38
seventeenth 2
29 2
all 39
chronicles 2
beasts 3
whom 2
without 2
flesh 15
these 5
online 6
first 4
he 44
three 7
20 6
4 6
man 13
seed 2
no 2
lamech 5
continually 3
walked 3
windows 2
created 4
unto 23
daughters 12
a 24
covered 3
dried 3
looked 2
day 10
cubits 4
in 51
16 6
from 16
made 7
calah 2
lord 14
27 22
forty 7
your 4
...
```
+ ```refs.txt```
```
canaanites:  (214,10)  (215,2) 
sidon:  (212,5)  (215,5) 
city:  (209,9)  (210,9) 
nineveh:  (209,6)  (210,1) 
hunter:  (206,19)  (207,11) 
fifty:  (66,4)  (112,7)  (119,16)  (191,11)  (192,3) 
to:  (31,3)  (44,5)  (44,10)  (49,3)  (66,19)  (69,5)  (72,16)  (74,17)  (75,19)  (76,14)  (82,14)  (84,9)  (85,8)  (92,10)  (117,6)  (124,5)  (125,12)  (126,12)  (130,13)  (134,5)  (163,8)  (165,21)  (167,14)  (170,13)  (172,20)  (181,5)  (206,6)  (215,9) 
pitch:  (64,10)  (64,16) 
shalt:  (64,2)  (64,9)  (65,4)  (66,16)  (67,4)  (67,15)  (68,6)  (70,21)  (72,10)  (75,16)  (82,12) 
into:  (71,2)  (72,13)  (81,14)  (89,14)  (91,14)  (97,11)  (99,19)  (127,21)  (129,7)  (156,21) 
thee:  (63,14)  (70,13)  (71,17)  (72,21)  (74,16)  (75,7)  (75,20)  (76,5)  (81,18)  (82,15)  (138,15)  (138,20)  (139,6) 
make:  (63,13)  (64,4)  (65,5)  (66,18)  (68,8)  (168,10) 
9:  (14,1)  (57,1)  (91,5)  (127,3)  (151,2)  (163,14)  (206,14) 
sons’:  (71,14)  (89,10)  (138,12)  (141,17) 
upon:  (60,1)  (60,16)  (69,2)  (84,13)  (85,10)  (88,15)  (91,2)  (93,2)  (95,10)  (98,14)  (102,8)  (103,16)  (104,5)  (104,17)  (106,16)  (107,17)  (109,10)  (112,1)  (121,1)  (140,3)  (141,1)  (142,13)  (155,15)  (155,22)  (156,6)  (156,10)  (156,14)  (173,17)  (174,14)  (176,4)  (184,4) 
the:  (3,1)  (4,4)  (4,7)  (4,12)  (4,19)  (6,2)  (8,8)  (9,11)  (12,13)  (15,12)  (18,14)  (21,15)  (25,14)  (28,14)  (34,4)  (36,18)  (37,3)  (38,11)  (43,3)  (44,13)  (44,16)  (45,5)  (45,10)  (46,9)  (47,20)  (48,9)  (48,16)  (49,5)  (50,6)  (50,13)  (51,1)  (51,14)  (52,2)  (52,13)  (53,3)  (53,6)  (53,13)  (53,17)  (53,20)  (56,7)  (56,10)  (57,4)  (59,2)  (59,10)  (60,2)  (60,17)  (61,2)  (62,7)  (62,17)  (63,10)  (64,6)  (64,21)  (65,8)  (65,11)  (65,18)  (66,7)  (66,20)  (67,10)  (67,13)  (67,19)  (69,3)  (69,11)  (70,6)  (71,3)  (72,14)  (74,4)  (80,1)  (81,3)  (81,15)  (82,18)  (83,12)  (83,22)  (84,4)  (84,7)  (84,14)  (84,18)  (85,11)  (86,11)  (86,14)  (87,3)  (88,10)  (88,16)  (89,15)  (89,19)  (89,22)  (91,3)  (91,15)  (91,17)  (91,20)  (92,16)  (92,19)  (93,3)  (93,7)  (93,15)  (93,18)  (94,3)  (94,5)  (94,10)  (94,13)  (94,19)  (95,7)  (95,11)  (96,3)  (96,14)  (97,3)  (97,12)  (98,3)  (98,15)  (99,20)  (100,8)  (101,10)  (102,3)  (102,9)  (102,12)  (102,18)  (103,5)  (103,9)  (103,17)  (104,2)  (104,6)  (104,9)  (104,13)  (104,18)  (105,3)  (105,9)  (106,1)  (106,5)  (106,17)  (107,18)  (108,10)  (108,19)  (109,11)  (109,14)  (110,3)  (110,7)  (110,10)  (110,17)  (111,13)  (111,17)  (112,2)  (115,1)  (116,12)  (116,19)  (117,9)  (117,12)  (117,16)  (117,20)  (118,3)  (118,10)  (118,18)  (119,5)  (119,10)  (119,13)  (119,18)  (120,6)  (120,10)  (120,14)  (120,18)  (121,2)  (121,8)  (121,13)  (121,17)  (122,4)  (122,8)  (122,11)  (122,14)  (124,8)  (124,16)  (124,19)  (125,16)  (126,1)  (126,15)  (126,21)  (127,1)  (127,5)  (127,11)  (127,22)  (128,3)  (128,7)  (128,10)  (129,8)  (130,1)  (130,5)  (130,9)  (130,16)  (131,9)  (131,15)  (132,8)  (133,2)  (134,8)  (134,15)  (134,18)  (134,22)  (135,2)  (135,9)  (135,14)  (135,17)  (136,4)  (136,7)  (136,14)  (136,18)  (137,4)  (137,7)  (138,1)  (140,4)  (140,12)  (141,2)  (142,14)  (143,7)  (145,8)  (146,6)  (146,10)  (146,17)  (147,9)  (147,17)  (149,3)  (153,1)  (153,4)  (154,19)  (155,4)  (155,9)  (155,19)  (156,4)  (156,11)  (156,16)  (156,19)  (157,19)  (158,12)  (158,17)  (159,15)  (160,3)  (160,8)  (160,17)  (161,15)  (162,13)  (164,20)  (165,2)  (165,9)  (165,19)  (166,2)  (167,1)  (167,16)  (168,3)  (168,6)  (169,14)  (170,6)  (170,21)  (171,3)  (171,9)  (172,12)  (173,6)  (173,11)  (173,23)  (174,15)  (175,7)  (175,10)  (176,5)  (178,3)  (178,11)  (179,1)  (179,8)  (179,17)  (181,19)  (182,14)  (182,19)  (184,13)  (189,7)  (190,11)  (191,6)  (191,16)  (195,1)  (196,5)  (196,8)  (197,4)  (198,1)  (199,2)  (200,3)  (200,14)  (201,9)  (201,12)  (203,1)  (204,3)  (204,16)  (205,9)  (206,12)  (206,21)  (207,9)  (207,13)  (207,17)  (208,13)  (209,8)  (210,4)  (212,12)  (212,15)  (212,18)  (213,4)  (213,7)  (213,10)  (213,14)  (213,17)  (214,1)  (214,6)  (214,9)  (214,15)  (215,1)  (216,12) 
before:  (59,7)  (62,14)  (82,1)  (206,20)  (207,12) 
corrupt:  (59,6)  (60,8) 
servant:  (187,9)  (189,17)  (190,20) 
are:  (57,3)  (83,7)  (90,10)  (157,3)  (179,7)  (196,4)  (216,11) 
between:  (168,11)  (170,3)  (171,20)  (174,3)  (175,16)  (209,16) 
17:  (21,12)  (68,10)  (102,1)  (138,16)  (174,17)  (213,2) 
air:  (54,1)  (84,1)  (156,5) 
24:  (29,8)  (111,15)  (185,13) 
saying:  (36,2)  (137,16)  (163,13) 
creeping:  (53,14)  (74,1)  (98,10)  (107,13)  (110,4)  (139,19)  (142,5) 
beast:  (53,11)  (82,10)  (97,18)  (107,9)  (142,3)  (145,15)  (155,17)  (159,19)  (165,7)  (165,23) 
kjv:  (2,1)  (42,1)  (79,1)  (114,1)  (152,1)  (194,1) 
filled:  (59,13)  (62,20) 
at:  (52,8)  (124,7)  (159,14)  (160,2)  (160,7) 
come:  (62,13)  (71,1)  (74,14)  (81,8)  (170,12) 
ye:  (158,21)  (162,5) 
evil:  (51,8)  (148,3) 
heart:  (51,5)  (52,10)  (147,3)  (148,1) 
imagination:  (50,18)  (147,18) 
every:  (50,17)  (70,1)  (71,21)  (72,8)  (73,20)  (74,11)  (82,8)  (85,19)  (90,18)  (97,17)  (98,9)  (99,2)  (99,7)  (99,10)  (107,12)  (108,2)  (109,3)  (116,7)  (138,21)  (139,18)  (142,2)  (142,4)  (142,8)  (145,13)  (145,18)  (148,14)  (155,16)  (156,1)  (157,7)  (159,18)  (160,11)  (164,12)  (165,6)  (165,22)  (168,16)  (172,5)  (174,6)  (201,18) 
bare:  (49,1)  (102,16) 
commanded:  (76,18)  (87,5)  (92,4)  (101,7) 
also:  (47,2)  (48,5)  (59,4)  (83,20)  (117,18)  (126,4) 
above:  (67,8)  (103,4) 
set:  (67,17)  (169,10) 
my:  (46,12)  (70,17)  (163,20)  (166,9)  (169,11)  (171,16) 
kind:  (73,12)  (73,18)  (74,8)  (97,21)  (98,7)  (98,19)  (99,6) 
said:  (46,11)  (52,15)  (62,4)  (81,5)  (146,19)  (154,10)  (167,21)  (175,2)  (187,4)  (189,4)  (207,5) 
an:  (7,5)  (11,5)  (24,5)  (32,5)  (35,5)  (47,10)  (63,15)  (112,4)  (130,24)  (144,3)  (145,5)  (181,7) 
even:  (68,14)  (157,17)  (207,6)  (216,6) 
families:  (202,7)  (214,7)  (217,1) 
began:  (44,9)  (181,4)  (206,5) 
men:  (44,8)  (45,13)  (48,19)  (49,9)  (49,14) 
pass:  (44,6)  (92,11)  (117,7)  (124,6)  (134,6)  (170,14) 
under:  (69,16)  (105,8) 
on:  (43,2)  (44,12)  (52,1)  (115,4)  (120,13)  (122,3)  (128,6)  (136,17)  (146,5) 
begat:  (7,11)  (9,4)  (11,11)  (11,19)  (12,6)  (14,8)  (14,16)  (15,5)  (17,8)  (17,16)  (18,7)  (20,10)  (20,18)  (21,8)  (24,13)  (25,1)  (25,7)  (27,10)  (28,1)  (28,7)  (32,12)  (33,4)  (33,13)  (35,12)  (37,13)  (38,4)  (40,11)  (58,8)  (206,2)  (210,13)  (212,4) 
ham:  (40,13)  (58,12)  (96,11)  (178,16)  (178,20)  (182,13)  (196,13)  (204,6)  (216,15) 
8:  (12,10)  (56,1)  (90,2)  (113,2)  (126,3)  (163,1)  (205,16) 
canaan:  (179,4)  (182,17)  (187,7)  (189,13)  (190,16)  (204,13)  (212,3) 
son:  (7,13)  (35,14)  (186,8) 
which:  (37,2)  (46,4)  (49,10)  (65,2)  (109,8)  (124,21)  (125,9)  (132,10)  (158,15)  (168,8)  (171,18)  (175,12) 
because:  (36,16)  (89,17) 
raamah:  (205,5)  (205,12) 
eight:  (8,18)  (11,21)  (14,18)  (18,1)  (21,2)  (22,2)  (25,3) 
five:  (11,8)  (16,1)  (20,7)  (22,6)  (27,7)  (29,6)  (37,15)  (38,1)  (40,5) 
deep:  (94,15)  (118,1) 
destroy:  (52,18)  (63,7)  (69,6)  (86,8)  (167,15)  (173,1) 
died:  (10,5)  (13,6)  (16,5)  (19,7)  (22,10)  (26,9)  (34,17)  (39,6)  (106,13)  (108,22)  (192,7) 
hundred:  (7,6)  (8,19)  (9,18)  (11,6)  (12,1)  (12,19)  (14,19)  (15,18)  (18,2)  (19,1)  (21,3)  (22,3)  (24,6)  (25,4)  (26,2)  (28,4)  (29,3)  (32,6)  (33,7)  (34,10)  (35,6)  (37,16)  (38,17)  (40,6)  (47,11)  (65,16)  (88,6)  (112,5)  (119,14)  (191,9)  (192,1) 
mighty:  (49,8)  (206,9)  (206,18)  (207,10) 
was:  (29,16)  (40,4)  (50,10)  (51,6)  (57,9)  (59,5)  (59,12)  (60,7)  (88,4)  (88,14)  (95,9)  (102,5)  (103,1)  (108,9)  (108,17)  (109,6)  (109,9)  (116,15)  (118,14)  (130,23)  (136,9)  (137,6)  (179,16)  (182,2)  (182,6)  (206,16)  (208,4)  (215,3) 
11:  (15,9)  (59,1)  (93,5)  (130,7)  (166,4)  (208,17) 
me:  (54,5)  (62,15)  (82,2)  (168,12)  (170,4)  (172,1)  (175,17) 
shem:  (40,12)  (58,11)  (96,9)  (178,14)  (183,13)  (189,11)  (190,14)  (196,12) 
image:  (7,20)  (161,16) 
after:  (7,18)  (8,12)  (11,17)  (14,14)  (17,14)  (20,16)  (24,19)  (27,18)  (33,2)  (37,11)  (48,6)  (73,10)  (73,16)  (74,6)  (92,12)  (97,19)  (98,5)  (98,17)  (99,4)  (119,9)  (142,16)  (164,7)  (191,5)  (197,3)  (202,2)  (202,5)  (216,16)  (217,2) 
covenant:  (70,18)  (153,2)  (163,21)  (166,10)  (168,7)  (170,2)  (171,17)  (174,2)  (175,11) 
be:  (47,9)  (65,14)  (73,3)  (76,1)  (140,15)  (154,13)  (155,14)  (157,13)  (161,11)  (162,4)  (166,17)  (167,11)  (169,19)  (171,6)  (173,9)  (181,6)  (187,6)  (187,14)  (189,6)  (189,15)  (190,18)  (206,7) 
him:  (5,4)  (30,2)  (52,7)  (76,19)  (87,6)  (89,13)  (101,8)  (101,13)  (111,11)  (116,17)  (126,11)  (127,20)  (129,6)  (130,14)  (132,15)  (141,20)  (163,12)  (186,12) 
and:  (5,7)  (5,12)  (5,15)  (7,2)  (7,7)  (7,10)  (8,1)  (8,7)  (9,2)  (9,6)  (9,9)  (9,19)  (10,3)  (11,2)  (11,7)  (11,10)  (11,14)  (12,2)  (12,5)  (12,8)  (12,11)  (13,1)  (13,4)  (14,2)  (14,7)  (14,11)  (15,1)  (15,4)  (15,7)  (15,10)  (15,19)  (16,3)  (17,2)  (17,7)  (17,11)  (18,3)  (18,6)  (18,9)  (18,12)  (19,2)  (19,5)  (20,2)  (20,6)  (20,9)  (20,13)  (21,4)  (21,7)  (21,10)  (21,13)  (22,5)  (22,8)  (24,2)  (24,8)  (24,11)  (24,16)  (25,6)  (25,9)  (25,12)  (26,4)  (26,7)  (27,2)  (27,6)  (27,9)  (27,13)  (28,6)  (28,9)  (28,12)  (29,5)  (29,9)  (29,14)  (32,2)  (32,8)  (32,11)  (32,15)  (33,9)  (33,12)  (33,15)  (34,2)  (34,12)  (34,15)  (35,2)  (35,8)  (35,11)  (35,16)  (36,11)  (37,8)  (37,18)  (38,3)  (38,6)  (38,9)  (39,1)  (39,4)  (40,2)  (40,9)  (40,14)  (44,2)  (44,18)  (45,18)  (46,8)  (47,12)  (48,4)  (48,20)  (50,2)  (50,15)  (51,11)  (52,4)  (52,12)  (53,10)  (53,12)  (53,16)  (57,13)  (57,18)  (58,6)  (58,13)  (59,9)  (59,17)  (60,4)  (62,2)  (63,3)  (64,8)  (64,13)  (64,18)  (66,6)  (66,22)  (67,9)  (68,3)  (68,11)  (69,18)  (70,19)  (71,6)  (71,9)  (71,12)  (71,19)  (73,5)  (73,13)  (75,3)  (75,14)  (75,21)  (76,6)  (81,2)  (81,10)  (82,20)  (83,3)  (83,14)  (84,6)  (85,3)  (85,15)  (85,18)  (86,17)  (88,2)  (88,19)  (89,2)  (89,5)  (89,8)  (90,6)  (90,13)  (90,16)  (91,10)  (91,19)  (92,7)  (94,18)  (95,6)  (95,15)  (96,8)  (96,10)  (96,12)  (96,18)  (97,2)  (97,16)  (98,1)  (98,8)  (99,1)  (99,13)  (100,1)  (100,13)  (100,21)  (101,9)  (102,2)  (102,11)  (102,15)  (102,20)  (103,8)  (103,12)  (104,1)  (104,12)  (105,1)  (106,4)  (106,10)  (107,4)  (107,7)  (107,10)  (108,1)  (109,2)  (109,18)  (110,2)  (110,6)  (110,12)  (111,1)  (111,6)  (111,16)  (112,6)  (116,2)  (116,6)  (116,10)  (117,1)  (117,11)  (118,2)  (118,9)  (118,17)  (119,8)  (119,15)  (120,5)  (121,7)  (123,5)  (124,2)  (125,3)  (125,13)  (127,16)  (128,19)  (129,1)  (129,11)  (129,18)  (130,8)  (130,18)  (131,18)  (132,5)  (134,2)  (134,11)  (135,11)  (135,19)  (136,2)  (136,12)  (136,20)  (137,11)  (138,4)  (138,7)  (138,10)  (139,13)  (139,16)  (140,14)  (140,17)  (141,5)  (141,9)  (141,12)  (141,15)  (142,7)  (142,10)  (145,2)  (145,10)  (145,16)  (146,1)  (146,9)  (146,16)  (149,7)  (149,9)  (149,11)  (149,13)  (149,15)  (149,17)  (150,2)  (154,2)  (154,6)  (154,9)  (154,15)  (154,17)  (155,3)  (155,8)  (155,21)  (156,13)  (159,4)  (160,1)  (162,2)  (162,7)  (162,15)  (163,2)  (163,7)  (163,15)  (164,3)  (164,10)  (165,4)  (166,5)  (167,19)  (168,13)  (168,15)  (169,16)  (170,5)  (170,9)  (171,12)  (172,2)  (172,4)  (172,11)  (173,5)  (173,13)  (174,5)  (174,18)  (175,18)  (177,3)  (178,2)  (178,15)  (178,17)  (178,19)  (179,13)  (181,2)  (181,9)  (181,15)  (182,1)  (182,4)  (182,12)  (183,5)  (183,12)  (183,14)  (184,1)  (184,8)  (184,11)  (185,1)  (185,6)  (185,14)  (186,3)  (187,2)  (188,3)  (189,2)  (189,12)  (190,6)  (190,15)  (191,2)  (191,10)  (191,14)  (192,2)  (192,5)  (196,14)  (196,16)  (199,7)  (199,9)  (199,11)  (199,13)  (199,15)  (199,17)  (200,2)  (200,8)  (200,10)  (200,13)  (200,19)  (201,3)  (204,2)  (204,8)  (204,10)  (204,12)  (204,15)  (204,21)  (205,2)  (205,4)  (205,6)  (205,8)  (205,14)  (205,17)  (207,16)  (208,6)  (208,8)  (208,10)  (209,4)  (209,7)  (209,11)  (209,14)  (210,2)  (210,11)  (210,15)  (210,17)  (211,1)  (211,4)  (211,6)  (211,13)  (212,2)  (212,8)  (212,11)  (212,14)  (212,17)  (213,3)  (213,6)  (213,9)  (213,13)  (213,16)  (213,19)  (214,3)  (214,14)  (215,18)  (216,2)  (216,4)  (217,8) 
name:  (5,18)  (8,4)  (35,20) 
went:  (88,21)  (91,7)  (99,15)  (100,16)  (100,18)  (104,4)  (125,10)  (141,7)  (143,3)  (178,8)  (184,9)  (209,1) 
sixty:  (20,5)  (24,7)  (26,3)  (27,5)  (29,4)  (34,11) 
mountains:  (106,6)  (121,3)  (122,15) 
blessed:  (5,13)  (154,4)  (189,5) 
generations:  (4,8)  (57,5)  (57,17)  (169,6)  (196,6) 
nakedness:  (183,1)  (184,14)  (185,12)
...
```
### 2) to detect links in text
+ ```input.txt```
```
Hello there! Please visit our website at https://www.example.com for more information.  
You can also check out our blog at www.blog-example.org or follow us on Twitter at https://twitter.com/example.  
For documentation, go to docs.example.com/guide.  
If you have any questions, email us or visit http://support.example.com?ref=chat.  
Have a nice day!

For our products, updates are posted regularly at https://updates.example.com/latest-news.  
Join our community forum at www.community.example.com and share your feedback.  
The official documentation site, docs.example.com/faq, is updated weekly.  
For support, submit a ticket at http://support.example.com/tickets or chat live at www.support.example.com/chat.  
Check out our partners at https://partners.example.net.  

Don’t forget to check our deals on https://deals.example.com/sale and follow our Instagram at https://instagram.com/example.  
Our developers blog at dev.example.com/blog is very active.  
More resources are always available on www.resources.example.com/resources.  
If you are a student, visit students.example.edu/portal for special offers.  
Feedback helps us improve: https://feedback.example.com/form?source=website

Get the app at https://apps.example.com/download or scan the QR code in our newsletter.  
Our European customers should use eu.example.com for region-specific info.  
The press kit is available at www.example.com/press.  
Find our code samples at code.example.com/samples and get started quickly.  
For old releases, see https://archive.example.com/versions.

If you encounter any issues, open a ticket at support.example.com/help.  
Follow our open-source work at https://github.com/example or connect on LinkedIn: https://linkedin.com/company/example-inc.  
Our terms are posted at www.example.com/terms and privacy policy is at www.example.com/privacy.  
To unsubscribe from emails, go to unsubscribe.example.com.  
Thank you for being part of our community!
```
+ ``` urls.txt```
```
https://www.example.com
www.blog-example.org
https://twitter.com/example
docs.example.com/guide
http://support.example.com?ref=chat
https://updates.example.com/latest-news
www.community.example.com
docs.example.com/faq
http://support.example.com/tickets
www.support.example.com/chat
https://partners.example.net
https://deals.example.com/sale
https://instagram.com/example
dev.example.com/blog
www.resources.example.com/resources
students.example.edu/portal
https://feedback.example.com/form?source=website
https://apps.example.com/download
eu.example.com
www.example.com/press
code.example.com/samples
https://archive.example.com/versions
support.example.com/help
https://github.com/example
https://linkedin.com/company/example-inc
www.example.com/terms
www.example.com/privacy
unsubscribe.example.com
```
### 3) to do both 1) and 2)
+ ```input.txt```
```
Once upon a time in the bustling city of Technopolis, there was a young coder named Ava who dreamed of building tools to help others. Every day, she read inspiring stories on https://medium.com/tag/programming and watched tutorials on www.youtube.com/c/TechWithTim.

One rainy afternoon, Ava stumbled upon an open-source repository at https://github.com/openai/gpt-3. Curious, she forked the project and started exploring. Soon, she joined a vibrant community on www.reddit.com/r/learnprogramming, where she asked questions and shared her progress.

One of her mentors suggested she check out the official documentation at docs.python.org/3/ and to practice coding challenges on https://leetcode.com. Ava also found a treasure trove of resources at www.freecodecamp.org, which helped her improve her web development skills.

After months of hard work, Ava launched her own website at https://ava-codes.dev, where she blogged about her journey and shared learning resources. She even started a newsletter at https://substack.com/ava-codes-newsletter to connect with other aspiring programmers.

Her project caught the attention of a startup. They invited her for an interview through www.linkedin.com/in/ava-codes, and soon she was working on innovative new apps! Ava never forgot where she started and made sure to give back to the community by open-sourcing her code at github.com/ava-codes/tools and mentoring newcomers on www.stackoverflow.com.

And so, Ava’s passion for sharing knowledge and helping others continued, making Technopolis a little brighter every day.

For more inspirational stories, visit https://inspiration.tech/stories or join the conversation at forum.ava-codes.dev.
```
+  ```output.txt```
```
where 3
project 2
her 9
one 2
soon 2
started 3
community 2
and 10
on 6
to 5
technopolis 2
the 6
at 7
an 2
upon 2
a 7
was 2
shared 2
she 9
stories 2
for 3
ava 5
every 2
resources 2
others 2
day 2
of 6
```
+  ```refs.txt```
```
where:  (3,28)  (7,13)  (9,29) 
project:  (3,16)  (9,2) 
her:  (3,34)  (5,3)  (5,33)  (5,35)  (7,8)  (7,17)  (9,1)  (9,11)  (9,43) 
one:  (3,1)  (5,1) 
soon:  (3,20)  (9,18) 
started:  (3,18)  (7,25)  (9,31) 
community:  (3,25)  (9,40) 
and:  (1,34)  (3,17)  (3,32)  (5,14)  (7,19)  (9,17)  (9,32)  (9,47)  (11,1)  (11,8) 
on:  (1,32)  (1,37)  (3,26)  (5,19)  (9,22)  (9,50) 
to:  (1,23)  (5,15)  (7,30)  (9,35)  (9,38) 
technopolis:  (1,10)  (11,13) 
the:  (1,6)  (3,15)  (5,9)  (9,4)  (9,39)  (13,9) 
at:  (3,10)  (5,12)  (5,29)  (7,11)  (7,28)  (9,45)  (13,11) 
an:  (3,7)  (9,13) 
upon:  (1,2)  (3,6) 
a:  (1,3)  (1,13)  (3,23)  (5,24)  (7,26)  (9,7)  (11,14) 
was:  (1,12)  (9,20) 
shared:  (3,33)  (7,20) 
she:  (1,28)  (3,13)  (3,21)  (3,29)  (5,6)  (7,14)  (7,23)  (9,19)  (9,30) 
stories:  (1,31)  (13,4) 
for:  (9,12)  (11,5)  (13,1) 
ava:  (1,17)  (3,4)  (5,21)  (7,6)  (9,26) 
every:  (1,26)  (11,17) 
resources:  (5,28)  (7,22) 
others:  (1,25)  (11,10) 
day:  (1,27)  (11,18) 
of:  (1,9)  (1,20)  (5,2)  (5,27)  (7,3)  (9,6) 
```

+ ```urls.txt```
```
https://medium.com/tag/programming
www.youtube.com/c/TechWithTim
https://github.com/openai/gpt-3
www.reddit.com/r/learnprogramming
docs.python.org/3/
https://leetcode.com
www.freecodecamp.org
https://ava-codes.dev
https://substack.com/ava-codes-newsletter
www.linkedin.com/in/ava-codes
github.com/ava-codes/tools
www.stackoverflow.com
https://inspiration.tech/stories
forum.ava-codes.dev
```
## Programos instaliavimas ir paleidimas
### Naudojant Make
+ Klonuojame arba parsisiunčiame šitą repozitoriją                
+ Šio projekto direktorijoje atsidarome terminalą ir rašome ```make```
+ Turi atsirasti aplankas: ```obj```
+ Paleidžiame prorgamą naudodami komandą ```./main```
+ Baigus darbą ištriname visus komandos ```make``` sugeneruotus failus naudodami komandą ```make clean```
+ Kilus klausimams ar nesusipratimams, prašome sukurti naują issue github sistemoje
## Programos testavimas
+ Sukurti unit testai naudojant [Catch2](https://github.com/catchorg/Catch2)
+ Šiais testais yra testuoajamas ar funkcijų veikimas atitinka reikalavimus
## Programos dokumentacija
+ Sukurta dokumentacija naudojant [Doxygen](https://www.doxygen.nl/index.html)
