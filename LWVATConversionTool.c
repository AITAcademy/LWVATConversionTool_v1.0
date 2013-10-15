/*
 * Author: Kevin Figueroa
 * Purpose: Converting Length, Weight, Volume, Area, Temperture.
 * Created: Oct. 16,2012
 * Last Updated: Jun 18, 2013
 * fix the word wieght to "weight" 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Length();
void YardsFeet(), YardsInches(), YardsCentimeters(), YardsMeters(), YardsKilometers(), YardsMiles(), YardsNautMiles(), YardsDecimeters();
void FtYds(), FeetInches(), FeetCentimeters(), FeetMeters(), FeetKilometers(), FeetMiles(), FeetNautmiles(), FeetDecimeter();
void InchesYards(), InchesFeet(), InchesCentimeters(), InchesMeters(), InchesKilometers(), InchesMiles(), InchesNautMiles(), InchesDecimeter();
void MetersYards(), MetersFeet(), MetersInches(), MetersCentimeters();
void MetersKilometers(), MetersMiles(), MetersNautmiles(), MetersDecimeters();
void KiloYards(), KiloFeet(), KiloInches(), KiloCentimeters(), KiloMeters(), KiloMiles(), KiloNautMiles(), KiloDeci();
void MilesYards(), MilesFeet(), MilesInches(), MilesCenti(), MilesMeters(), MilesKilo(), MilesNautMiles(), MilesDeci();
void NautMilesYards(), NautMilesFeet(), NautMilesInches(), NautMilesCenti(), NautMilesMeters(),NautMilesKilometers(), NautMilesDecimeters();
void DecimetersYards(), DecimetersInches(), DecimetersFeet(), DecimetersCentimeters(), DecimetersMeters(), DecimetersKilo(), DecimeterMiles(), DeciNautmiles();

void Weight();
void CentigramDecigrams(), CentigramDekagrams(), CentigramDrams(), CentigramGrains(), CentigramMicrograms(), CentigramMilligrams(), CentigramGrams(), CentigramOunces();
void CentigramPounds(), CentigramTons();
void DecigramCentigrams(), DecigramDekagrams(), DecigramDrams(), DecigramGrains(), DecigramMicrograms(), DecigramMilligrams(), DecigramGrams(), DecigramOunces();
void DecigramPounds(), DecigramTons(); 
void DekagramCentigrams(), DekagramDecigrams(), DekagramDrams(), DekagramGrains(), DekagramMicrograms(), DekagramMilligrams(), DekagramGrams(), DekagramOunces();
void DekagramPounds(),  DekagramTons(); 
void DramCentigrams(), DramDecigrams(), DramDekagrams(), DramGrains(), DramMicrograms(), DramMilligrams(), DramGrams(), DramOunces(), DramPounds(), DramTons(); 
void GrainCentigrams(), GrainDecigrams(), GrainDekagrams(), GrainDrams(), GrainMicrograms(), GrainMilligrams(), GrainGrams(), GrainOunces(), GrainPounds(), GrainTons();
void MicrogramCentigrams(), MicrogramDecigrams(), MicrogramDekagrams(), MicrogramDrams(),  MicrogramGrains(),  MicrogramMilligrams(), MicrogramGrams(), MicrogramOunces();
void MicrogramPounds(), MicrogramTons();
void MilligramCentigrams(), MilligramDecigrams(), MilligramDekagrams(), MilligramDrams(), MilligramGrains(), MilligramMicrograms(), MilligramGrams(), MilligramOunces();
void MilligramPounds(), MilligramTons();
void GramCentigrams(), GramDecigrams(), GramDekagrams(), GramDrams(), GramGrains(), GramMicrograms(), GramMilligrams(), GramOunces(), GramPounds(), GramTons();
void OunceCentigrams(), OunceDecigrams(), OunceDekagrams(), OunceDrams(), OunceGrains(), OunceMicrograms(), OunceMilligrams(), OunceGrams(), OuncePounds(), OunceTons();
void PoundCentigrams(), PoundDecigrams(), PoundDekagrams(), PoundDrams(), PoundGrains(), PoundMicrograms(), PoundMilligrams(), PoundGrams(), PoundOunces(), PoundTons();
void TonCentigrams(), TonDecigrams(), TonDekagrams(), TonDrams(), TonGrains(), TonMicrograms(), TonMilligrams(), TonGrams(), TonOunces(), TonPounds();

void Volume();
void CubicCentiInches(), CubicCentiFoot(), CubicCentiMeters(), CubicCentiTeaspoons(), CubicCentiTablespoons(), CubicCentiFluidOunces(), CubicCentiCups(),CubicCentiPints();
void CubicCentiQuarts(), CubicCentiGallons(), CubicCentiImpGallons(), CubicCentiMilliters(), CubicCentiLiters(), CubicCentiKiloliters();
void CubicInchesCenti(),CubicInchesFeet(), CubicInchesMeters(), CubicInchesTeaspoons(), CubicInchesTablespoons(), CubicInchesfloz(), CubicInchesCups(), CubicInchesPints();
void CubicInchesQuarts(), CubicInchesGallons(), CubicInchesImpGallons(), CubicInchesMilliters(), CubicInchesLiters(), CubicInchesKiloliters();
void CubicFootCentimeters(), CubicFootInches(), CubicFootMeters(), CubicFootTeaspoons(), CubicFootTablespoons(), CubicFootFloz(), CubicFootCups(), CubicFootPints();
void CubicFootQuarts(), CubicFootGallons(), CubicFootImpGallons(), CubicFootMilliters(), CubicFootLiters(), CubicFootKiloliters();
void CubicMetersCenti(), CubicMetersInches(), CubicMetersFeet(), CubicMetersTeaspoons(), CubicMetersTablespoons(), CubicMetersFLOZ(), CubicMetersCups(), CubicMetersPints();
void CubicMetersQuarts(), CubicMetersGallons(), CubicMetersImpGallons(), CubicMetersMilLiters(), CubicMetersLiters(), CubicMetersKiloliters();
void TeaspoonsCuCentimeters(), TeaspoonsInches(), TeaspoonsFeet(), TeaspoonsMeters(), TeaspoonsTablespoons(), TeaspoonsFLOZ(), TeaspoonsCups(), TeaspoonsQuarts();
void TeaspoonsPints(), TeaspoonsGallons(), TeaspoonsImpGallons(), TeaspoonsMilliters(), TeaspoonsLiters(), TeaspoonsKiloliters();
void TablespoonsCuCentimeters(), TablespoonsInches(), TablespoonsFeet(), TablespoonsMeters(), TablespoonsTeaspoons(), TablespoonsFLOZ(), TablespoonsCups(), TablespoonsQuarts();
void TablespoonsPints(), TablespoonsGallons(), TablespoonsImpGallons(), TablespoonsMilliters(), TablespoonsLiters(), TablespoonsKiloliters();
void FlozCuCenti(), FlozInches(), FlozFeet(), FlozMeters(), FlozTeaspoons(), FlozTablespoons(), FlozCups(), FlozPints(), FlozQuarts(), FlozGallons(), FlozImpGallons();
void FlozMilliters(), FlozLiters(), FlozKiloliters();
void CupsCuCenti(), CupsInches(), CupsFeet(), CupsMeters(), CupsFLOZ(), CupsTeaspoons(), CupsTablespoons(), CupsPints(), CupsQuarts(), CupsGallons(), CupsGallons(), CupsImpGallons();
void CupsMilliters(), CupsLiters(), CupsKiloliters();
void PintCenti(), PintInches(), PintFeet(), PintMeters(), PintTeaspoons(), PintTablespoons(), PintFLOZ(), PintCups(), PintQuarts(), PintGallons(), PintImpGallons(), PintMilliters();
void PintLiters(), PintKilo();
void QuartCenti(), QuartInches(), QuartFeet(), QuartMeters(), QuartFLOZ(), QuartCups(), QuartTeaspoons(), QuartTablespoons(), QuartPints(), QuartGallons(), QuartImpGallons();
void QuartMilliters(), QuartLiters(), QuartKiloliters();
void GallonCenti(), GallonInches(), GallonFeet(), GallonMeters(), GallonFLOZ(), GallonCups(), GallonTeaspoons(), GallonTablespoons(), GallonPints(), GallonQuarts();
void GallonImpGallons(), GallonMilliters(), GallonLiters(), GallonKiloliters();
void ImpGallonCenti(), ImpGallonInches(), ImpGallonFeet(), ImpGallonMeters(), ImpGallonFLOZ(), ImpGallonCups(), ImpGallonTeaspoons(), ImpGallonTablespoons();
void ImpGallonPints(), ImpGallonQuarts(), ImpGallonGallons(), ImpGallonMilliters(), ImpGallonLiters(), ImpGallonKiloliters();
void MilliterCenti(), MilliterInches(), MilliterFeet(), MilliterMeters(), MilliterFLOZ(), MilliterCups(), MilliterTeaspoons(), MilliterTablespoons(), MilliterPints();
void MilliterQuarts(), MilliterGallons(), MilliterImpGallons(), MilliterLiters(), MilliterKilo();
void LiterCenti(), LiterInches(), LiterFeet(), LiterMeters(), LiterFLOZ(), LiterCups(), LiterTeaspoons(), LiterTablespoons(), LiterPints();
void LiterQuarts(), LiterGallons(), LiterImpGallons(), LiterMilliters(), LiterKilo();
void KilosCenti(), KilosInches(), KilosFeet(), KilosMeters(), KilosFLOZ(), KilosCups(), KilosTeaspoons(), KilosTablespoons(), KilosPints();
void KilosQuarts(), KilosGallons(), KilosImpGallons(), KilosMilliters(), KilosLiters();

void Area();
void SqFootInches(), SqFootMeters(), SqFootYards(), SqFootMiles();
void SqInchFoot(), SqInchMeters(),SqInchYards(), SqInchMiles();
void SqMeterInches(), SqMeterFoot(),SqMeterYards(), SqMeterMiles();
void SqYardFoot(), SqYardInches(), SqYardMeters(), SqYardMiles();
void SqMileFoot(),SqMileInches(), SqMileYards(), SqMileMeters();

void Temperture();
void CelFahr(), CelKel(), CelRank();
void FahrCel(), FahrKel(), FahrRank();
void KelCel(), KelFahr(), KelRank(); 
void RankCel(), RankFahr(), RankKel();
        


main()
{
    int ansconvert;
    int anslength = 1;
    int answeight = 2;
    int ansvol = 3;
    int ansarea = 4;
    int anstemp = 5;
    
    printf("\n");
    printf("What would like to convert: \n");
    printf("[1]Length, [2]Weight, [3]Volume, [4]Area, [5]Temperature: ");
    scanf("%d", &ansconvert);
    //fflush(stdin);
    
    if (ansconvert != anslength && ansconvert != answeight && ansconvert != ansvol && ansconvert != ansarea && ansconvert != anstemp)
    {
        printf("\nERROR: INCORRECT VALUE!\n");
    }
    
    if(ansconvert == anslength)
    {
        Length();
    }
    if (ansconvert == answeight)
    {
        Weight();
    }
     if (ansconvert == ansvol)
    {
        Volume();
    }
    if (ansconvert == ansarea)
    {
        Area();
    }
    if (ansconvert == anstemp)
    {
        Temperture();
    }
    
    printf("\n");
    fflush(stdin);
    getchar();
}
// Convert Length Unit
void Length()
{
        int subfirstlength, subsecondlength;
        int subansyds;
        int subansft;
        int lenyards = 1;
        int lenfeet = 2;
        int leninches = 3;
        int lencentimeters = 4;
        int lenmeters = 5;
        int lenkilometer = 6;
        int lenmiles = 7;
        int lennautmile = 8;
        int lendecimeter = 9;
        
	printf("\n");
	printf("Your selection is Length.\n");
	printf("[1] Yards\n");
	printf("[2] Feet\n");
	printf("[3] Inches\n");
        printf("[4] Centimeters\n");
	printf("[5] Meters\n");
        printf("[6] Kilometer\n");
        printf("[7] Miles\n");
        printf("[8] Nautical Miles\n");
        printf("[9] Decimeters\n");
	printf("Which would you like to covert: ");
	scanf("%d", &subfirstlength);
        printf("Convert to: ");
        scanf("%d", &subsecondlength);
        
        if (subfirstlength != lenyards && subfirstlength != lenfeet && subfirstlength != leninches && subfirstlength != lenmeters &&
            subfirstlength != lencentimeters && subfirstlength != lenkilometer && subfirstlength != lenmiles && subfirstlength != lennautmile &&
            subfirstlength != lendecimeter)
        {
            printf("\nERROR: INCORRECT VALUE.\n");
        }
        if (subsecondlength != lenyards && subsecondlength != lenfeet && subsecondlength != leninches && subsecondlength != lenmeters &&
            subsecondlength != lencentimeters && subsecondlength != lenkilometer && subsecondlength != lenmiles && subsecondlength != lennautmile &&
            subsecondlength != lendecimeter)
        {
            printf("\nERROR: INCORRECT VALUE.\n");
        }
        if (subfirstlength == subsecondlength)
        {
            printf("\nERROR: YOU CANNOT CONVERT INTO THE SAME UNIT.\n");
        }
        if (subfirstlength == lenyards && subsecondlength == lenfeet)
        {
            YardsFeet();            
        }
        if (subfirstlength == lenyards && subsecondlength == leninches)
        {
            YardsInches();
        }
        if (subfirstlength == lenyards && subsecondlength == lencentimeters)
        {
            YardsCentimeters();
        }
        if (subfirstlength == lenyards && subsecondlength == lenmeters)
        {
            YardsMeters();
        }
        if (subfirstlength == lenyards && subsecondlength == lenkilometer)
        {
            YardsKilometers();
        }
        if (subfirstlength == lenyards && subsecondlength == lenmiles)
        {
            YardsMiles();
        }
        if (subfirstlength == lenyards && subsecondlength == lennautmile)
        {
            YardsNautMiles();
        }
        if (subfirstlength == lenyards && subsecondlength == lendecimeter)
        {
            YardsDecimeters();
        }
        if (subfirstlength == lenfeet && subsecondlength == lenyards)
        {
            FtYds();
        }
        if (subfirstlength == lenfeet && subsecondlength == leninches)
        {
            FeetInches();
        }
        if (subfirstlength == lenfeet && subsecondlength == lencentimeters)
        {
            FeetCentimeters();
        }
        if (subfirstlength == lenfeet && subsecondlength == lenmeters)
        {
            FeetMeters();
        }
        if (subfirstlength == lenfeet && subsecondlength == lenkilometer)
        {
            FeetKilometers();
        }
        if (subfirstlength == lenfeet && subsecondlength == lenmiles)
        {
            FeetMiles();
        }
        if (subfirstlength == lenfeet && subsecondlength == lennautmile)
        {
            FeetNautmiles();
        }
        if (subfirstlength == lenfeet && subsecondlength == lendecimeter)
        {
            FeetDecimeter();
        }
        if (subfirstlength == leninches && subsecondlength == lenyards)
        {
            InchesYards();   
        }
        if (subfirstlength == leninches && subsecondlength == lenfeet)
        {
            InchesFeet();
        }
        if (subfirstlength == leninches && subsecondlength == lencentimeters)
        {
            InchesCentimeters();
        }
        if (subfirstlength == leninches && subsecondlength == lenmeters)
        {
            InchesMeters();
        }
        if (subfirstlength == leninches && subsecondlength == lenkilometer)
        {
            InchesKilometers();            
        }
        if (subfirstlength == leninches && subsecondlength == lenmiles)
        {
            InchesMiles();            
        }
        if (subfirstlength == leninches && subsecondlength == lennautmile)
        {
            InchesNautMiles();            
        }
        if (subfirstlength == leninches && subsecondlength == lendecimeter)
        {
            InchesDecimeter();            
        }
        if (subfirstlength == lenmeters && subsecondlength == lenyards)
        {
            MetersYards();            
        }
        if (subfirstlength == lenmeters && subsecondlength == lenfeet)
        {
            MetersFeet();            
        }
        if (subfirstlength == lenmeters && subsecondlength == leninches)
        {
            MetersInches();            
        }
        if (subfirstlength == lenmeters && subsecondlength == lencentimeters)
        {
            MetersCentimeters();            
        }
        if (subfirstlength == lenmeters && subsecondlength == lenkilometer)
        {
            MetersKilometers();            
        }
        if (subfirstlength == lenmeters && subsecondlength == lenmiles)
        {
            MetersMiles();            
        }
        if (subfirstlength == lenmeters && subsecondlength == lennautmile)
        {
            MetersNautmiles();            
        }
        if (subfirstlength == lenmeters && subsecondlength == lendecimeter)
        {
            MetersDecimeters();            
        }
        if (subfirstlength == lenkilometer && subsecondlength == lenyards)
        {
            KiloYards();            
        }
        if (subfirstlength == lenkilometer && subsecondlength == lenfeet)
        {
            KiloFeet();            
        }
        if (subfirstlength == lenkilometer && subsecondlength == leninches)
        {
            KiloInches();            
        }
        if (subfirstlength == lenkilometer && subsecondlength == lencentimeters)
        {
            KiloCentimeters();            
        }
        if (subfirstlength == lenkilometer && subsecondlength == lenmeters)
        {
            KiloMeters();            
        }
        if (subfirstlength == lenkilometer && subsecondlength == lenmiles)
        {
            KiloMiles();            
        }
        if (subfirstlength == lenkilometer && subsecondlength == lennautmile)
        {
            KiloNautMiles();          
        }
        if (subfirstlength == lenkilometer && subsecondlength == lendecimeter)
        {
            KiloDeci();           
        }
        if (subfirstlength == lenmiles && subsecondlength == lenyards)
        {
            MilesYards();           
        }
        if (subfirstlength == lenmiles && subsecondlength == lenfeet)
        {
            MilesFeet();           
        }
        if (subfirstlength == lenmiles && subsecondlength == leninches)
        {
            MilesInches();           
        }
        if (subfirstlength == lenmiles && subsecondlength == lencentimeters)
        {
            MilesCenti();           
        }
        if (subfirstlength == lenmiles && subsecondlength == lenmeters)
        {
            MilesMeters();           
        }
        if (subfirstlength == lenmiles && subsecondlength == lenkilometer)
        {
            MilesKilo();           
        }
        if (subfirstlength == lenmiles && subsecondlength == lennautmile)
        {
            MilesNautMiles();           
        }
        if (subfirstlength == lenmiles && subsecondlength == lendecimeter)
        {
            MilesDeci();           
        }
        if (subfirstlength == lennautmile && subsecondlength == lenyards)
        {
            NautMilesYards();        
        }
        if (subfirstlength == lennautmile && subsecondlength == lenfeet)
        {
            NautMilesFeet();        
        }
        if (subfirstlength == lennautmile && subsecondlength == leninches)
        {
            NautMilesInches();     
        }
        if (subfirstlength == lennautmile && subsecondlength == lencentimeters)
        {
            NautMilesCenti();   
        }
        if (subfirstlength == lennautmile && subsecondlength == lenmeters)
        {
            NautMilesMeters();   
        }
        if (subfirstlength == lennautmile && subsecondlength == lenkilometer)
        {
            NautMilesKilometers();   
        }
        if (subfirstlength == lennautmile && subsecondlength == lendecimeter)
        {
            NautMilesDecimeters();   
        }
        if (subfirstlength == lendecimeter && subsecondlength == lenyards)
        {
            DecimetersYards();
        }
        if(subfirstlength == lendecimeter && subsecondlength == leninches)
        {
            DecimetersInches();
        }
        if (subfirstlength == lendecimeter && subsecondlength == lenfeet)
        {
            DecimetersFeet();   
        }
        if(subfirstlength == lendecimeter && subsecondlength == lencentimeters)
        {
            DecimetersCentimeters();
        }
        if(subfirstlength == lendecimeter && subsecondlength == lenmeters)
        {
            DecimetersMeters();
        }
        if(subfirstlength == lendecimeter && subsecondlength == lenkilometer)
        {
            DecimetersKilo();
        }
        if(subfirstlength == lendecimeter && subsecondlength == lenmiles)
        {
            DecimeterMiles();
        }
        if(subfirstlength == lendecimeter && subsecondlength == lennautmile)
        {
            DeciNautmiles();
        }
}
// Convert Yards to Feet
void YardsFeet()
{   
    float yardsans;
    float totalfeet;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many yards would you like to convert to feet: ");
    scanf("%f", &yardsans);
    printf("Converting %f yards to feets equals: \n", yardsans);
    totalfeet = yardsans * 3;
    printf("----------------------------------------------------------------\n");
    printf("%f yards = %f feets\n", yardsans, totalfeet);
    printf("----------------------------------------------------------------\n");
}
// Convert Yards to Inches
void YardsInches()
{   
    float ydsinans;
    float totalyi;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many yards would you like to convert to inches: ");
    scanf("%f", &ydsinans);
    printf("Converting %f yards to inches equals: \n", ydsinans);
    totalyi = ydsinans * 36;
    printf("----------------------------------------------------------------\n");
    printf("%f yards = %f inches\n", ydsinans, totalyi);
    printf("----------------------------------------------------------------\n");
}
// Convert Yards to Centimeters
void YardsCentimeters()
{   
    float ydscenti;
    float totalydscenti;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many yards would you like to convert to centimeters: ");
    scanf("%f", &ydscenti);
    printf("Converting %f yards to centimeters equals: \n", ydscenti);
    totalydscenti = ydscenti * 91.44;
    printf("----------------------------------------------------------------\n");
    printf("%f yards = %f centimeters\n", ydscenti, totalydscenti);
    printf("----------------------------------------------------------------\n");
}

// Convert Yards to Meters
void YardsMeters()
{
    float ydsmeters;
    float totalmeters;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many yards would you like to convert to meters: ");
    scanf("%f", &ydsmeters);
    printf("Converting %f yards to meters equals: \n", ydsmeters);
    totalmeters = ydsmeters * .9144;
    printf("----------------------------------------------------------------\n");
    printf("%f yards = %f meters\n", ydsmeters, totalmeters);
    printf("----------------------------------------------------------------\n");
}
// Convert Yards to Kilometers
void YardsKilometers()
{
    float ydskilometers;
    float totalkilometers;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many yards would you like to convert to kilometers: ");
    scanf("%f", &ydskilometers);
    printf("Converting %f yards to kilometers equals: \n", ydskilometers);
    totalkilometers = ydskilometers * 0.00091;
    printf("----------------------------------------------------------------\n");
    printf("%f yards = %f kilometers\n", ydskilometers, totalkilometers);
    printf("----------------------------------------------------------------\n");
}
// Convert Yards to Kilometers
void YardsMiles()
{
    float ydsmiles;
    float totalmiles;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many yards would you like to convert to miles: ");
    scanf("%f", &ydsmiles);
    printf("Converting %f yards to miles equals: \n", ydsmiles);
    totalmiles = ydsmiles * 0.000568;
    printf("----------------------------------------------------------------\n");
    printf("%f yards = %f miles\n", ydsmiles, totalmiles);
    printf("----------------------------------------------------------------\n");
}
// Convert Yards to Nautical Miles
void YardsNautMiles()
{
    float ydsnautmiles;
    float totalnautmiles;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many yards would you like to convert to nautical miles: ");
    scanf("%f", &ydsnautmiles);
    printf("Converting %f yards to nautical miles equals: \n", ydsnautmiles);
    totalnautmiles = ydsnautmiles * 0.00049373650107992;
    printf("----------------------------------------------------------------\n");
    printf("%f yards = %f nautical miles\n", ydsnautmiles, totalnautmiles);
    printf("----------------------------------------------------------------\n");
}
// Convert Yards to Decimeters
void YardsDecimeters()
{
    float ydsdeci;
    float totaldecimeter;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many yards would you like to convert to decimeters: ");
    scanf("%f", &ydsdeci);
    printf("Converting %f yards to decimeter equals: \n", ydsdeci);
    totaldecimeter = ydsdeci * 9.144;
    printf("----------------------------------------------------------------\n");
    printf("%f yards = %f decimeter\n", ydsdeci, totaldecimeter);
    printf("----------------------------------------------------------------\n");
}
// Convert Feet to Yards
void FtYds()
{   
    float feetans;
    float totalyds;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many feet would you like to convert to yards: ");
    scanf("%f", &feetans);
    printf("Converting %f yards to feets equals: \n", feetans);
    totalyds = feetans / 3;
    printf("----------------------------------------------------------------\n");
    printf("%f feet = %f yards\n", feetans, totalyds);
    printf("----------------------------------------------------------------\n");
}
// Convert Feet to Inches
void FeetInches()
{
    float ansfi;
    float totalfi;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many feet would you like converted to inches: ");
    scanf("%f", &ansfi);
    printf("Converting %f feet to inches equals: \n", ansfi);
    totalfi = ansfi * 12;
    printf("----------------------------------------------------------------\n");
    printf("%f feet = %f inches\n", ansfi, totalfi);
    printf("----------------------------------------------------------------\n");
}
// Convert Feet to Centimeters
void FeetCentimeters()
{
    float ftcm;
    float totalftcm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many feet would you like converted to centimeters: ");
    scanf("%f", &ftcm);
    printf("Converting %f feet to centimeters equals: \n", ftcm);
    totalftcm = ftcm * 30.48;
    printf("----------------------------------------------------------------\n");
    printf("%f feet = %f inches\n", ftcm, totalftcm);
    printf("----------------------------------------------------------------\n");
}
// Convert Feet to Meters
void FeetMeters()
{
    float ftmt;
    float totalfm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many feet would you like converted to meters: ");
    scanf("%f", &ftmt);
    printf("Converting %f feet to meters equals: \n", ftmt);
    totalfm = ftmt * 0.3048;
    printf("----------------------------------------------------------------\n");
    printf("%f feet = %f meters\n", ftmt, totalfm);
    printf("----------------------------------------------------------------\n");
}
// Convert Feet to Kilometers
void FeetKilometers()
{
    float ftkm;
    float totalfk;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many feet would you like converted to kilometers: ");
    scanf("%f", &ftkm);
    printf("Converting %f feet to kilometers equals: \n", ftkm);
    totalfk = ftkm * 0.0003048;
    printf("----------------------------------------------------------------\n");
    printf("%f feet = %f kilometers\n", ftkm, totalfk);
    printf("----------------------------------------------------------------\n");
}
// Convert Feet to Miles
void FeetMiles()
{
    float ftml;
    float totalfml;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many feet would you like converted to miles: ");
    scanf("%f", &ftml);
    printf("Converting %f feet to miles equals: \n", ftml);
    totalfml = ftml / 5280;
    printf("----------------------------------------------------------------\n");
    printf("%f feet = %f miles\n", ftml, totalfml);
    printf("----------------------------------------------------------------\n");
}
// Convert Feet to Nautical Miles
void FeetNautmiles()
{
    float ftnm;
    float totalftnm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many feet would you like converted to nautical miles: ");
    scanf("%f", &ftnm);
    printf("Converting %f feet to nautical miles equals: \n", ftnm);
    totalftnm = ftnm * 0.00016457;
    printf("----------------------------------------------------------------\n");
    printf("%f feet = %f nautical miles\n", ftnm, totalftnm);
    printf("----------------------------------------------------------------\n");
}
// Convert Feet to Decimeter
void FeetDecimeter()
{
    float ftdm;
    float totalftdm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many feet would you like converted to decimeters: ");
    scanf("%f", &ftdm);
    printf("Converting %f feet to decimeters equals: \n", ftdm);
    totalftdm = ftdm * 3.048;
    printf("----------------------------------------------------------------\n");
    printf("%f feet = %f decimeters\n", ftdm, totalftdm);
    printf("----------------------------------------------------------------\n");
}
// Convert Inches to Yards
void InchesYards()
{
    float inyds;
    float totalinyds;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many inches would you like converted to yards: ");
    scanf("%f", &inyds);
    printf("Converting %f inches to yards equals: \n", inyds);
    totalinyds = inyds / 36;
    printf("----------------------------------------------------------------\n");
    printf("%f inches = %f yards\n", inyds, totalinyds);
    printf("----------------------------------------------------------------\n");
}
// Convert Inches to Feet
void InchesFeet()
{
    float ansif;
    float totalif;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many inches would you like converted to feet: ");
    scanf("%f", &ansif);
    printf("Converting %f inches to feet equals: \n", ansif);
    totalif = ansif / 12;
    printf("----------------------------------------------------------------\n");
    printf("%f inches = %f feet\n", ansif, totalif);
    printf("----------------------------------------------------------------\n");
}
// Convert Inches to Meters
void InchesCentimeters()
{
    float incm;
    float totalincm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many inches would you like converted to centimeters: ");
    scanf("%f", &incm);
    printf("Converting %f inches to centimeters equals: \n", incm);
    totalincm = incm * 2.54;
    printf("----------------------------------------------------------------\n");
    printf("%f inches = %f centimeters\n", incm, totalincm);
    printf("----------------------------------------------------------------\n");
}
// Convert Inches to Meters
void InchesMeters()
{
    float inmt;
    float totalinmt;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many inches would you like converted to meters: ");
    scanf("%f", &inmt);
    printf("Converting %f inches to meters equals: \n", inmt);
    totalinmt = inmt * 0.0254;
    printf("----------------------------------------------------------------\n");
    printf("%f inches = %f meters\n", inmt, totalinmt);
    printf("----------------------------------------------------------------\n");
}
// Convert Inches to Kilometers
void InchesKilometers()
{
    float inkm;
    float totalinkm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many inches would you like converted to kilometers: ");
    scanf("%f", &inkm);
    printf("Converting %f inches to kilometers equals: \n", inkm);
    totalinkm = inkm * 0.0000254;
    printf("----------------------------------------------------------------\n");
    printf("%f inches = %f kilometers\n", inkm, totalinkm);
    printf("----------------------------------------------------------------\n");
}
// Convert Inches to Miles
void InchesMiles()
{
    float inml;
    float totalinml;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many inches would you like converted to miles: ");
    scanf("%f", &inml);
    printf("Converting %f inches to miles equals: \n", inml);
    totalinml = inml / 63360;
    printf("----------------------------------------------------------------\n");
    printf("%f inches = %f miles\n", inml, totalinml);
    printf("----------------------------------------------------------------\n");
}
// Convert Inches to Nautical Miles
void InchesNautMiles()
{
    float innm;
    float totalinnm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many inches would you like converted to nautical miles: ");
    scanf("%f", &innm);
    printf("Converting %f inches to nautical miles equals: \n", innm);
    totalinnm = innm * 0.000013714;
    printf("----------------------------------------------------------------\n");
    printf("%f inches = %f nautical miles\n", innm, totalinnm);
    printf("----------------------------------------------------------------\n");
}
// Convert Inches to Nautical Miles
void InchesDecimeter()
{
    float indm;
    float totalindm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many inches would you like converted to decimeters: ");
    scanf("%f", &indm);
    printf("Converting %f inches to decimeters equals: \n", indm);
    totalindm = indm * 0.254;
    printf("----------------------------------------------------------------\n");
    printf("%f inches = %f decimeters\n", indm, totalindm);
    printf("----------------------------------------------------------------\n");
}
// Convert Meters to Yards
void MetersYards()
{
    float mtyds;
    float totalmtyds;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many meters would you like converted to yards: ");
    scanf("%f", &mtyds);
    printf("Converting %f meters to yards equals: \n", mtyds);
    totalmtyds = mtyds * 1.093613;
    printf("----------------------------------------------------------------\n");
    printf("%f meters = %f yards\n", mtyds, totalmtyds);
    printf("----------------------------------------------------------------\n");
}
// Convert Meters to Yards
void MetersFeet()
{
    float mtft;
    float totalmtft;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many meters would you like converted to feet: ");
    scanf("%f", &mtft);
    printf("Converting %f meters to feet equals: \n", mtft);
    totalmtft = mtft * 3.2808;
    printf("----------------------------------------------------------------\n");
    printf("%f meters = %f feet\n", mtft, totalmtft);
    printf("----------------------------------------------------------------\n");
}
// Convert Meters to Inches
void MetersInches()
{
    float mtin;
    float totalmtin;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many meters would you like converted to inches: ");
    scanf("%f", &mtin);
    printf("Converting %f meters to inches equals: \n", mtin);
    totalmtin = mtin * 39.37007;
    printf("----------------------------------------------------------------\n");
    printf("%f meters = %f inches\n", mtin, totalmtin);
    printf("----------------------------------------------------------------\n");
}
// Convert Meters to Centimeters
void MetersCentimeters()
{
    float mtcm;
    float totalmtcm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many meters would you like converted to inches: ");
    scanf("%f", &mtcm);
    printf("Converting %f meters to inches equals: \n", mtcm);
    totalmtcm = mtcm * 100;
    printf("----------------------------------------------------------------\n");
    printf("%f meters = %f inches\n", mtcm, totalmtcm);
    printf("----------------------------------------------------------------\n");
}
// Convert Meters to Kilometers
void MetersKilometers()
{
    float mtkm;
    float totalmtkm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many meters would you like converted to kilometers: ");
    scanf("%f", &mtkm);
    printf("Converting %f meters to kilometers equals: \n", mtkm);
    totalmtkm = mtkm / 1000;
    printf("----------------------------------------------------------------\n");
    printf("%f meters = %f kilometers\n", mtkm, totalmtkm);
    printf("----------------------------------------------------------------\n");
}
// Convert Meters to Miles
void MetersMiles()
{
    float mtml;
    float totalmtml;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many meters would you like converted to miles: ");
    scanf("%f", &mtml);
    printf("Converting %f meters to miles equals: \n", mtml);
    totalmtml = mtml / 0.00062137;
    printf("----------------------------------------------------------------\n");
    printf("%f meters = %f miles\n", mtml, totalmtml);
    printf("----------------------------------------------------------------\n");
}
// Convert Meters to Nautical Miles
void MetersNautmiles()
{
    float mtnm;
    float totalmtnm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many meters would you like converted to nautical miles: ");
    scanf("%f", &mtnm);
    printf("Converting %f meters to nautical miles equals: \n", mtnm);
    totalmtnm = mtnm / 1852;
    printf("----------------------------------------------------------------\n");
    printf("%f meters = %f nautical miles\n", mtnm, totalmtnm);
    printf("----------------------------------------------------------------\n");
}
// Convert Meters to decimeters
void MetersDecimeters()
{
    float mtdm;
    float totalmtdm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many meters would you like converted to decimeters: ");
    scanf("%f", &mtdm);
    printf("Converting %f meters to decimeters equals: \n", mtdm);
    totalmtdm = mtdm / 1852;
    printf("----------------------------------------------------------------\n");
    printf("%f meters = %f decimeters\n", mtdm, totalmtdm);
    printf("----------------------------------------------------------------\n");
}
// Convert Kilometers to Yards
void KiloYards()
{
    float kmyds;
    float totalkmyds;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many kilometers would you like converted to yards: ");
    scanf("%f", &kmyds);
    printf("Converting %f kilometers to yards equals: \n", kmyds);
    totalkmyds = kmyds * 1093.61329;
    printf("----------------------------------------------------------------\n");
    printf("%f kilometers = %f yards\n", kmyds, totalkmyds);
    printf("----------------------------------------------------------------\n");
}
// Convert Kilometers to Feet
void KiloFeet()
{
    float kmft;
    float totalkmft;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Kilometers would you like converted to Feet: ");
    scanf("%f", &kmft);
    printf("Converting %f Kilometers to Feet equals: \n", kmft);
    totalkmft = kmft * 3280.83989;
    printf("----------------------------------------------------------------\n");
    printf("%f Kilometers = %f Feet\n", kmft, totalkmft);
    printf("----------------------------------------------------------------\n");
}
// Convert Kilometers to Inches
void KiloInches()
{
    float kmin;
    float totalkmin;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many kilometers would you like converted to inches: ");
    scanf("%f", &kmin);
    printf("Converting %f kilometers to inches equals: \n", kmin);
    totalkmin = kmin * 39.37007;
    printf("----------------------------------------------------------------\n");
    printf("%f kilometers = %f inches\n", kmin, totalkmin);
    printf("----------------------------------------------------------------\n");
}
// Convert Kilometers to Centimeters
void KiloCentimeters()
{
    float kmcm;
    float totalkmcm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many kilometers would you like converted to centimeters: ");
    scanf("%f", &kmcm);
    printf("Converting %f kilometers to centimeters equals: \n", kmcm);
    totalkmcm = kmcm * 100000;
    printf("----------------------------------------------------------------\n");
    printf("%f kilometers = %f centimeters\n", kmcm, totalkmcm);
    printf("----------------------------------------------------------------\n");
}
// Convert Kilometers to Meters
void KiloMeters()
{
    float kmmt;
    float totalkmmt;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many kilometers would you like converted to meters: ");
    scanf("%f", &kmmt);
    printf("Converting %f kilometers to meters equals: \n", kmmt);
    totalkmmt = kmmt * 100000;
    printf("----------------------------------------------------------------\n");
    printf("%f kilometers = %f meters\n", kmmt, totalkmmt);
    printf("----------------------------------------------------------------\n");
}
// Convert Kilometers to Miles
void KiloMiles()
{
    float kmml;
    float totalkmml;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many kilometers would you like converted to miles: ");
    scanf("%f", &kmml);
    printf("Converting %f kilometers to miles equals: \n", kmml);
    totalkmml = kmml * 0.6213727;
    printf("----------------------------------------------------------------\n");
    printf("%f kilometers = %f miles\n", kmml, totalkmml);
    printf("----------------------------------------------------------------\n");
}
// Convert Kilometers to Nauticle Miles
void KiloNautMiles()
{
    float kmnm;
    float totalkmnm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many kilometers would you like converted to Nauticle Miles: ");
    scanf("%f", &kmnm);
    printf("Converting %f kilometers to Nauticle Miles equals: \n", kmnm);
    totalkmnm = kmnm * 250/463;
    printf("----------------------------------------------------------------\n");
    printf("%f kilometers = %f nauticle miles\n", kmnm, totalkmnm);
    printf("----------------------------------------------------------------\n");
}
// Convert Kilometers to Decimeters
void KiloDeci()
{
    float kmdm;
    float totalkmdm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many kilometers would you like converted to Decimeters: ");
    scanf("%f", &kmdm);
    printf("Converting %f kilometers to decimeters equals: \n", kmdm);
    totalkmdm = kmdm * 10000.0;
    printf("----------------------------------------------------------------\n");
    printf("%f kilometers = %f decimeters\n", kmdm, totalkmdm);
    printf("----------------------------------------------------------------\n");
}
// Convert Miles to Yards
void MilesYards()
{
    float mlyds;
    float totalmlyds;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Miles would you like converted to Yards: ");
    scanf("%f", &mlyds);
    printf("Converting %f miles to yards equals: \n", mlyds);
    totalmlyds = mlyds * 1760;
    printf("----------------------------------------------------------------\n");
    printf("%f miles = %f yards\n", mlyds, totalmlyds);
    printf("----------------------------------------------------------------\n");
}
// Convert Miles to Feet
void MilesFeet()
{
    float mlft;
    float totalmlft;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Miles would you like converted to Feet: ");
    scanf("%f", &mlft);
    printf("Converting %f miles to feet equals: \n", mlft);
    totalmlft = mlft * 5280;
    printf("----------------------------------------------------------------\n");
    printf("%f miles = %f feet\n", mlft, totalmlft);
    printf("----------------------------------------------------------------\n");
}
// Convert Miles to Inches
void MilesInches()
{
    float mlin;
    float totalmlin;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Miles would you like converted to Inches: ");
    scanf("%f", &mlin);
    printf("Converting %f miles to inches equals: \n", mlin);
    totalmlin = mlin * 63360;
    printf("----------------------------------------------------------------\n");
    printf("%f miles = %f inches\n", mlin, totalmlin);
    printf("----------------------------------------------------------------\n");
}
// Convert Miles to Centimeters
void MilesCenti()
{
    float mlcm;
    float totalmlcm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Miles would you like converted to Centimeters: ");
    scanf("%f", &mlcm);
    printf("Converting %f miles to centimeters equals: \n", mlcm);
    totalmlcm = mlcm * 160934.4;
    printf("----------------------------------------------------------------\n");
    printf("%f miles = %f centimeters\n", mlcm, totalmlcm);
    printf("----------------------------------------------------------------\n");
}
// Convert Miles to Meters
void MilesMeters()
{
    float mlmt;
    float totalmlmt;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Miles would you like converted to Meters: ");
    scanf("%f", &mlmt);
    printf("Converting %f miles to meters equals: \n", mlmt);
    totalmlmt = mlmt * 1609.344;
    printf("----------------------------------------------------------------\n");
    printf("%f miles = %f meters\n", mlmt, totalmlmt);
    printf("----------------------------------------------------------------\n");
}
// Convert Miles to Kilometers
void MilesKilo()
{
    float mlkm;
    float totalmlkm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Miles would you like converted to Kilometers: ");
    scanf("%f", &mlkm);
    printf("Converting %f Miles to Kilometers equals: \n", mlkm);
    totalmlkm = mlkm * 1.60934;
    printf("----------------------------------------------------------------\n");
    printf("%f Miles = %f Kilometers\n", mlkm, totalmlkm);
    printf("----------------------------------------------------------------\n");
}
// Convert Miles to Nautical Miles
void MilesNautMiles()
{
    float mlnm;
    float totalmlnm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Miles would you like converted to Nautical Miles: ");
    scanf("%f", &mlnm);
    printf("Converting %f Miles to Nautical Miles equals: \n", mlnm);
    totalmlnm = mlnm * 0.868976241900648;
    printf("----------------------------------------------------------------\n");
    printf("%f miles = %f nautical miles\n", mlnm, totalmlnm);
    printf("----------------------------------------------------------------\n");
}
// Convert Miles to Decimeters
void MilesDeci()
{
    float mldm;
    float totalmldm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Miles would you like converted to Decimeters: ");
    scanf("%f", &mldm);
    printf("Converting %f Miles to Decimeters equals: \n", mldm);
    totalmldm = mldm * 16093.44;
    printf("----------------------------------------------------------------\n");
    printf("%f Miles = %f Decimeters\n", mldm, totalmldm);
    printf("----------------------------------------------------------------\n");
}
// Convert Nautical Miles to Yards
void NautMilesYards()
{
    float nmyds;
    float totalnmyds;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Nautical Miles would you like converted to Yards: ");
    scanf("%f", &nmyds);
    printf("Converting %f Nautical Miles to Yards equals: \n", nmyds);
    totalnmyds = nmyds * 2025.37182852144;
    printf("----------------------------------------------------------------\n");
    printf("%f Nautical Miles = %f Yards\n", nmyds, totalnmyds);
    printf("----------------------------------------------------------------\n");
}
// Convert Nautical Miles to Feet
void NautMilesFeet()
{
    float nmft;
    float totalnmft;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Nautical Miles would you like converted to Feet: ");
    scanf("%f", &nmft);
    printf("Converting %f Nautical Miles to Feet equals: \n", nmft);
    totalnmft = nmft * 6076.1154855643;
    printf("----------------------------------------------------------------\n");
    printf("%f Nautical Miles = %f Yards\n", nmft, totalnmft);
    printf("----------------------------------------------------------------\n");
}
// Convert Nautical Miles to Inches
void NautMilesInches()
{
    float nmin;
    float totalnmin;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Nautical Miles would you like converted to Inches: ");
    scanf("%f", &nmin);
    printf("Converting %f Nautical Miles to Inches equals: \n", nmin);
    totalnmin = nmin * 72913.3858267717;
    printf("----------------------------------------------------------------\n");
    printf("%f Nautical Miles = %f Inches\n", nmin, totalnmin);
    printf("----------------------------------------------------------------\n");
}
// Convert Nautical Miles to Centimeter
void NautMilesCenti()
{
    float nmcm;
    float totalnmcm;
    
    printf("\n");
    printf("-------------------------------------------------------------------");
    printf("\nHow many Nautical Miles would you like converted to Centimeters: ");
    scanf("%f", &nmcm);
    printf("Converting %f Nautical Miles to Centimeters equals: \n", nmcm);
    totalnmcm = nmcm * 185200;
    printf("-----------------------------------------------------------------\n");
    printf("%f Nautical Miles = %f Centimeters\n", nmcm, totalnmcm);
    printf("-----------------------------------------------------------------\n");
}
// Convert Nautical Miles to Meter
void NautMilesMeters()
{
    float nmmt;
    float totalnmmt;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Nautical Miles would you like converted to Meters: ");
    scanf("%f", &nmmt);
    printf("Converting %f Nautical Miles to Meters equals: \n", nmmt);
    totalnmmt = nmmt * 1852;
    printf("----------------------------------------------------------------\n");
    printf("%f Nautical Miles = %f Meters\n", nmmt, totalnmmt);
    printf("----------------------------------------------------------------\n");
}
// Convert Nautical Miles to Kilometers
void NautMilesKilometers()
{
    float nmkm;
    float totalnmkm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Nautical Miles would you like converted to Kilometers: ");
    scanf("%f", &nmkm);
    printf("Converting %f Nautical Miles to Kilometers equals: \n", nmkm);
    totalnmkm = nmkm * 1213/250;
    printf("----------------------------------------------------------------\n");
    printf("%f Nautical Miles = %f Kilometers\n", nmkm, totalnmkm);
    printf("----------------------------------------------------------------\n");
}
// Convert Nautical Miles to Kilometers
void NautMilesDecimeters()
{
    float nmdm;
    float totalnmdm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Nautical Miles would you like converted to Decimeters: ");
    scanf("%f", &nmdm);
    printf("Converting %f Nautical Miles to Decimeters equals: \n", nmdm);
    totalnmdm = nmdm * 18520;
    printf("----------------------------------------------------------------\n");
    printf("%f Nautical Miles = %f Decimeters\n", nmdm, totalnmdm);
    printf("----------------------------------------------------------------\n");
}
// Convert Decimeters to Yards
void DecimetersYards()
{
    float dmyds;
    float totaldmyds;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decimeters would you like converted to Yards: ");
    scanf("%f", &dmyds);
    printf("Converting %f Decimeters to Yards equals: \n", dmyds);
    totaldmyds = dmyds * 0.109361329833771;
    printf("----------------------------------------------------------------\n");
    printf("%f Decimeters = %f Yards\n", dmyds, totaldmyds);
    printf("----------------------------------------------------------------\n");
}
// Convert Deicmeters to Inches
void DecimetersInches()
{
    float dmin;
    float totaldmin;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decimeters would you like converted to Inches: ");
    scanf("%f", &dmin);
    printf("Converting %f Decimeters to Inches equals: \n", dmin);
    totaldmin = dmin * 3.93700787;
    printf("----------------------------------------------------------------\n");
    printf("%f Decimeters = %f Inches\n", dmin, totaldmin);
    printf("----------------------------------------------------------------\n");
}
// Convert Decimeters to Feet
void DecimetersFeet()
{
    float dmft;
    float totaldmft;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decimeters would you like converted to Yards: ");
    scanf("%f", &dmft);
    printf("Converting %f Decimeters to Yards equals: \n", dmft);
    totaldmft = dmft * 0.109361329833771;
    printf("----------------------------------------------------------------\n");
    printf("%f Decimeters = %f Yards\n", dmft, totaldmft);
    printf("----------------------------------------------------------------\n");
}
// Convert Decimeters to Centimeters
void DecimetersCentimeters()
{
    float dmcm;
    float totaldmcm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decimeters would you like converted to Centimeters: ");
    scanf("%f", &dmcm);
    printf("Converting %f Decimeters to Centimeters equals: \n", dmcm);
    totaldmcm = dmcm * 10;
    printf("----------------------------------------------------------------\n");
    printf("%f Decimeters = %f Centimeter\n", dmcm, totaldmcm);
    printf("----------------------------------------------------------------\n");
}
// Convert Decimeters to Meters
void DecimetersMeters()
{
    float dmmt;
    float totaldmmt;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decimeters would you like converted to Meters: ");
    scanf("%f", &dmmt);
    printf("Converting %f Decimeters to Meters equals: \n", dmmt);
    totaldmmt = dmmt * 0.1;
    printf("----------------------------------------------------------------\n");
    printf("%f Decimeters = %f Meters\n", dmmt, totaldmmt);
    printf("----------------------------------------------------------------\n");
}
// Convert Decimeters to Kilometers
void DecimetersKilo()
{
    float dmkm;
    float totaldmkm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decimeters would you like converted to Kilometers: ");
    scanf("%f", &dmkm);
    printf("Converting %f Decimeters to Kilometers equals: \n", dmkm);
    totaldmkm = dmkm * 0.0001;
    printf("----------------------------------------------------------------\n");
    printf("%f Decimeters = %f Kilometers\n", dmkm, totaldmkm);
    printf("----------------------------------------------------------------\n");
}

// Convert Decimeter to Miles
void DecimeterMiles()
{
    float dmml;
    float totaldmml;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decimeters would you like converted to Miles: ");
    scanf("%f", &dmml);
    printf("Converting %f Decimeters to Miles equals: \n", dmml);
    totaldmml = dmml * 6.21371192 * pow(10,-5);
    printf("----------------------------------------------------------------\n");
    printf("%f Decimeters = %f Miles\n", dmml, totaldmml);
    printf("----------------------------------------------------------------\n");
}

// Convert Decimeter to Nautical Miles
void DeciNautmiles()
{
    float dcnm;
    float totaldcnm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decimeters would you like converted to Nautical Miles: ");
    scanf("%f", &dcnm);
    printf("Converting %f Decimeters to Miles equals: \n", dcnm);
    totaldcnm = dcnm * 5.39956803 * pow(10,-5);
    printf("----------------------------------------------------------------\n");
    printf("%f Decimeters = %f Nautical Miles\n", dcnm, totaldcnm);
    printf("----------------------------------------------------------------\n");
}

// Convert Weight Units
void Weight()
{
    int subfirstweight;
    int subsecondweight;
    int wcenti = 1;
    int wdeci = 2;
    int wdeka = 3;
    int wdram = 4;
    int wgrain = 5;
    int wmicro = 6;
    int wmilli = 7;
    int wgram = 8;
    int wounce = 9;
    int wpound = 10;
    int wton = 11;
        
    printf("\n");
    printf("Your selection is Weight.\n");
    printf("[1]  Centigram\n");
    printf("[2]  Decigram\n");
    printf("[3]  Dekagram\n");
    printf("[4]  Dram\n");
    printf("[5]  Grain\n");
    printf("[6]  Microgram\n");
    printf("[7]  Milligram\n");
    printf("[8]  Gram\n");
    printf("[9]  Ounce\n");
    printf("[10] Pounds\n");
    printf("[11] Tons\n");
    printf("Which would you like to covert: ");
    scanf("%d", &subfirstweight);
    printf("Convert to: ");
    scanf("%d", &subsecondweight);
        
    if (subfirstweight != wcenti && subfirstweight != wdeci && subfirstweight != wdeka && subfirstweight != wdram &&
        subfirstweight != wgrain && subfirstweight != wmicro && subfirstweight != wmilli && subfirstweight != wgram &&
        subfirstweight != wounce && subfirstweight != wpound && subfirstweight != wton)
    {
        printf("\nERROR: INCORRECT VALUE.\n");
    }
    if (subsecondweight != wcenti && subsecondweight != wdeci && subsecondweight != wdeka && subsecondweight != wdram &&
        subsecondweight != wgrain && subsecondweight != wmicro && subsecondweight != wmilli && subsecondweight != wgram &&
        subsecondweight != wounce && subsecondweight != wpound && subsecondweight != wton)
    {
        printf("\nERROR: INCORRECT VALUE.\n");
    }
    if (subfirstweight == subsecondweight)
        {
            printf("\nERROR: YOU CANNOT CONVERT INTO THE SAME UNIT.\n");
        }
        if (subfirstweight == wcenti && subsecondweight == wdeci)
        {
            CentigramDecigrams();
        }
        if (subfirstweight == wcenti && subsecondweight == wdeka)
        {
            CentigramDekagrams();
        }
        if (subfirstweight == wcenti && subsecondweight == wdram)
        {
            CentigramDrams();
        }
        if (subfirstweight == wcenti && subsecondweight == wgrain)
        {
            CentigramGrains();
        }
        if (subfirstweight == wcenti && subsecondweight == wmicro)
        {
            CentigramMicrograms();
        }
        if (subfirstweight == wcenti && subsecondweight == wmilli)
        {
            CentigramMilligrams();
        }
        if (subfirstweight == wcenti && subsecondweight == wgram)
        {
            CentigramGrams();
        }
        if (subfirstweight == wcenti && subsecondweight == wounce)
        {
            CentigramOunces();
        }
        if (subfirstweight == wcenti && subsecondweight == wpound)
        {
            CentigramPounds();
        }
        if (subfirstweight == wcenti && subsecondweight == wton)
        {
            CentigramTons();
        }
        if (subfirstweight == wdeci && subsecondweight == wcenti)
        {
            DecigramCentigrams();
        }
        if (subfirstweight == wdeci && subsecondweight == wdeka)
        {
            DecigramDekagrams();
        }
        if (subfirstweight == wdeci && subsecondweight == wdram)
        {
            DecigramDrams();
        }
        if (subfirstweight == wdeci && subsecondweight == wgrain)
        {
            DecigramGrains();
        }
        if (subfirstweight == wdeci && subsecondweight == wmicro)
        {
            DecigramMicrograms();
        }
        if (subfirstweight == wdeci && subsecondweight == wmilli)
        {
            DecigramMilligrams();
        }
        if (subfirstweight == wdeci && subsecondweight == wgram)
        {
            DecigramGrams();
        }
        if (subfirstweight == wdeci && subsecondweight == wounce)
        {
            DecigramOunces();   
        }
        if (subfirstweight == wdeci && subsecondweight == wpound)
        {
            DecigramPounds();
        }
        if (subfirstweight == wdeci && subsecondweight == wton)
        {
            DecigramTons();
        }
        if (subfirstweight == wdeka && subsecondweight == wcenti)
        {
            DekagramCentigrams();
        }
        if (subfirstweight == wdeka && subsecondweight == wdeci)
        {
            DekagramDecigrams();            
        }
        if (subfirstweight == wdeka && subsecondweight == wdram)
        {
            DekagramDrams();            
        }
        if (subfirstweight == wdeka && subsecondweight == wgrain)
        {
            DekagramGrains();            
        }
        if (subfirstweight == wdeka && subsecondweight == wmicro)
        {
            DekagramMicrograms();            
        }
        if (subfirstweight == wdeka && subsecondweight == wmilli)
        {
            DekagramMilligrams();            
        }
        if (subfirstweight == wdeka && subsecondweight == wgram)
        {
            DekagramGrams();            
        }
        if (subfirstweight == wdeka && subsecondweight == wounce)
        {
            DekagramOunces();            
        }
        if (subfirstweight == wdeka && subsecondweight == wpound)
        {
            DekagramPounds();            
        }
        if (subfirstweight == wdeka && subsecondweight == wton)
        {
            DekagramTons();            
        }
        if (subfirstweight == wdram && subsecondweight == wcenti)
        {
            DramCentigrams();            
        }
        if (subfirstweight == wdram && subsecondweight == wdeci)
        {
            DramDecigrams();            
        }
        if (subfirstweight == wdram && subsecondweight == wdeka)
        {
            DramDekagrams();            
        }
        if (subfirstweight == wdram && subsecondweight == wgrain)
        {
            DramGrains();            
        }
        if (subfirstweight == wdram && subsecondweight == wmicro)
        {
            DramMicrograms();            
        }
        if (subfirstweight == wdram && subsecondweight == wmilli)
        {
            DramMilligrams();            
        }
        if (subfirstweight == wdram && subsecondweight == wgram)
        {
            DramGrams();            
        }
        if (subfirstweight == wdram && subsecondweight == wounce)
        {
            DramOunces();            
        }
        if (subfirstweight == wdram && subsecondweight == wpound)
        {
            DramPounds();            
        }
        if (subfirstweight == wdram && subsecondweight == wton)
        {
            DramTons();            
        }
        if (subfirstweight == wgrain && subsecondweight == wcenti)
        {
            GrainCentigrams();          
        }
        if (subfirstweight == wgrain && subsecondweight == wdeci)
        {
            GrainDecigrams();           
        }
        if (subfirstweight == wgrain && subsecondweight == wdeka)
        {
            GrainDekagrams();           
        }
        if (subfirstweight == wgrain && subsecondweight == wdram)
        {
            GrainDrams();           
        }
        if (subfirstweight == wgrain && subsecondweight == wmicro)
        {
            GrainMicrograms();           
        }
        if (subfirstweight == wgrain && subsecondweight == wmilli)
        {
            GrainMilligrams();           
        }
        if (subfirstweight == wgrain && subsecondweight == wgram)
        {
            GrainGrams();           
        }
        if (subfirstweight == wgrain && subsecondweight == wounce)
        {
            GrainOunces();           
        }
        if (subfirstweight == wgrain && subsecondweight == wpound)
        {
            GrainPounds();           
        }
        if (subfirstweight == wgrain && subsecondweight == wton)
        {
            GrainTons();           
        }
        if (subfirstweight == wmicro && subsecondweight == wcenti)
        {
            MicrogramCentigrams();        
        }
        if (subfirstweight == wmicro && subsecondweight == wdeci)
        {
            MicrogramDecigrams();        
        }
        if (subfirstweight == wmicro && subsecondweight == wdeka)
        {
            MicrogramDekagrams();        
        }
        if (subfirstweight == wmicro && subsecondweight == wdram)
        {
            MicrogramDrams();        
        }
        if (subfirstweight == wmicro && subsecondweight == wgrain)
        {
            MicrogramGrains();        
        }

        if (subfirstweight == wmicro && subsecondweight == wmilli)
        {
            MicrogramMilligrams();        
        }
        if (subfirstweight == wmicro && subsecondweight == wgram)
        {
            MicrogramGrams();        
        }
        if (subfirstweight == wmicro && subsecondweight == wounce)
        {
            MicrogramOunces();        
        }
        if (subfirstweight == wmicro && subsecondweight == wpound)
        {
            MicrogramPounds();        
        }
        if (subfirstweight == wmicro && subsecondweight == wton)
        {
            MicrogramTons();        
        }
        if (subfirstweight == wmilli && subsecondweight == wcenti)
        {
            MilligramCentigrams();        
        }
        if (subfirstweight == wmilli && subsecondweight == wdeci)
        {
            MilligramDecigrams();     
        }
        if (subfirstweight == wmilli && subsecondweight == wdeka)
        {
            MilligramDekagrams();   
        }
        if (subfirstweight == wmilli && subsecondweight == wdram)
        {
            MilligramDrams();   
        }
        if (subfirstweight == wmilli && subsecondweight == wgrain)
        {
            MilligramGrains();   
        }
        if (subfirstweight == wmilli && subsecondweight == wmicro)
        {
            MilligramMicrograms();   
        }
         if (subfirstweight == wmilli && subsecondweight == wgram)
        {
            MilligramGrams();   
        }
         if (subfirstweight == wmilli && subsecondweight == wounce)
        {
            MilligramOunces();   
        }
         if (subfirstweight == wmilli && subsecondweight == wpound)
        {
            MilligramPounds();   
        }
         if (subfirstweight == wmilli && subsecondweight == wton)
        {
            MilligramTons();   
        }
        if (subfirstweight == wgram && subsecondweight == wcenti)
        {
            GramCentigrams();
        }
        if(subfirstweight == wgram && subsecondweight == wdeci)
        {
            GramDecigrams();
        }
        if (subfirstweight == wgram && subsecondweight == wdeka)
        {
            GramDekagrams();   
        }
        if (subfirstweight == wgram && subsecondweight == wdram)
        {
            GramDrams();   
        }
        if(subfirstweight == wgram && subsecondweight == wgrain)
        {
            GramGrains();
        }
        if(subfirstweight == wgram && subsecondweight == wmicro)
        {
            GramMicrograms();
        }
        if(subfirstweight == wgram && subsecondweight == wmilli)
        {
            GramMilligrams();
        }
        if(subfirstweight == wgram && subsecondweight == wounce)
        {
            GramOunces();
        }
        if(subfirstweight == wgram && subsecondweight == wpound)
        {
            GramPounds();
        }
        if(subfirstweight == wgram && subsecondweight == wton)
        {
            GramTons();
        }
        if(subfirstweight == wounce && subsecondweight == wcenti)
        {
            OunceCentigrams();
        }
        if(subfirstweight == wounce && subsecondweight == wdeci)
        {
            OunceDecigrams();
        }
        if(subfirstweight == wounce && subsecondweight == wdeka)
        {
            OunceDekagrams();
        }
        if(subfirstweight == wounce && subsecondweight == wdram)
        {
            OunceDrams();
        }
        if(subfirstweight == wounce && subsecondweight == wgrain)
        {
            OunceGrains();
        }
        if(subfirstweight == wounce && subsecondweight == wmicro)
        {
            OunceMicrograms();
        }
        if(subfirstweight == wounce && subsecondweight == wmilli)
        {
            OunceMilligrams();
        }
        if(subfirstweight == wounce && subsecondweight == wgram)
        {
            OunceGrams();
        }
        if(subfirstweight == wounce && subsecondweight == wpound)
        {
            OuncePounds();
        }
        if(subfirstweight == wounce && subsecondweight == wton)
        {
            OunceTons();
        }
        if(subfirstweight == wpound && subsecondweight == wcenti)
        {
            PoundCentigrams();
        }
        if(subfirstweight == wpound && subsecondweight == wdeci)
        {
            PoundDecigrams();
        }
        if(subfirstweight == wpound && subsecondweight == wdeka)
        {
            PoundDekagrams();
        }
        if(subfirstweight == wpound && subsecondweight == wdram)
        {
            PoundDrams();
        }
        if(subfirstweight == wpound && subsecondweight == wgrain)
        {
            PoundGrains();
        }
        if(subfirstweight == wpound && subsecondweight == wmicro)
        {
            PoundMicrograms();
        }
        if(subfirstweight == wpound && subsecondweight == wmilli)
        {
            PoundMilligrams();
        }
        if(subfirstweight == wpound && subsecondweight == wgram)
        {
            PoundGrams();
        }
        if(subfirstweight == wpound && subsecondweight == wounce)
        {
            PoundOunces();
        }
        if(subfirstweight == wpound && subsecondweight == wton)
        {
            PoundTons();
        }
        if(subfirstweight == wton && subsecondweight == wcenti)
        {
            TonCentigrams();
        }
        if(subfirstweight == wton && subsecondweight == wdeci)
        {
            TonDecigrams();
        }
        if(subfirstweight == wton && subsecondweight == wdeka)
        {
            TonDekagrams();
        }
        if(subfirstweight == wton && subsecondweight == wdram)
        {
            TonDrams();
        }
        if(subfirstweight == wton && subsecondweight == wgrain)
        {
            TonGrains();
        }
        if(subfirstweight == wton && subsecondweight == wmicro)
        {
            TonMicrograms();
        }
        if(subfirstweight == wton && subsecondweight == wmilli)
        {
            TonMilligrams();
        }
        if(subfirstweight == wton && subsecondweight == wgram)
        {
            TonGrams();
        }
        if(subfirstweight == wton && subsecondweight == wounce)
        {
            TonOunces();
        }
        if(subfirstweight == wton && subsecondweight == wpound)
        {
            TonPounds();
        }
}

// Convert Centigram to Decigrams
void CentigramDecigrams()
{
    float cmdm;
    float totalcmdm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Centigram would you like converted to Decigrams: ");
    scanf("%f", &cmdm);
    printf("Converting %f Centigram to Decigrams equals: \n", cmdm);
    totalcmdm = cmdm * 0.1;
    printf("----------------------------------------------------------------\n");
    printf("%f Centigrams = %f Decigrams\n", cmdm, totalcmdm);
    printf("----------------------------------------------------------------\n");
}
// Convert Centigram to Dekagrams
void CentigramDekagrams()
{
    float cmdk;
    float totalcmdk;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Centigram would you like converted to Dekagrams: ");
    scanf("%f", &cmdk);
    printf("Converting %f Centigram to Dekagrams equals: \n", cmdk);
    totalcmdk = cmdk * 0.001;
    printf("----------------------------------------------------------------\n");
    printf("%f Centigrams = %f Dekagrams\n", cmdk, totalcmdk);
    printf("----------------------------------------------------------------\n");
}
// Convert Centigram to Drams
void CentigramDrams()
{
    float cmdr;
    float totalcmdr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Centigram would you like converted to Drams: ");
    scanf("%f", &cmdr);
    printf("Converting %f Centigram to Drams equals: \n", cmdr);
    totalcmdr = cmdr * 0.00564383391;
    printf("----------------------------------------------------------------\n");
    printf("%f Centigrams = %f Drams\n", cmdr, totalcmdr);
    printf("----------------------------------------------------------------\n");
}
// Convert Centigram to Grains
void CentigramGrains()
{
    float cmgr;
    float totalcmgr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Centigram would you like converted to Grains: ");
    scanf("%f", &cmgr);
    printf("Converting %f Centigram to Grains equals: \n", cmgr);
    totalcmgr = cmgr * 0.154323584;
    printf("----------------------------------------------------------------\n");
    printf("%f Centigrams = %f Grains\n", cmgr, totalcmgr);
    printf("----------------------------------------------------------------\n");
}
// Convert Centigram to Micrograms
void CentigramMicrograms()
{
    float cmmg;
    float totalcmmg;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Centigram would you like converted to Micorgrams: ");
    scanf("%f", &cmmg);
    printf("Converting %f Centigram to Micrograms equals: \n", cmmg);
    totalcmmg = cmmg * 10000;
    printf("----------------------------------------------------------------\n");
    printf("%f Centigrams = %f Micrograms\n", cmmg, totalcmmg);
    printf("----------------------------------------------------------------\n");
}
// Convert Centigram to Milligrams
void CentigramMilligrams()
{
    float cmml;
    float totalcmml;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Centigram would you like converted to Milligrams: ");
    scanf("%f", &cmml);
    printf("Converting %f Centigram to Milligrams equals: \n", cmml);
    totalcmml = cmml * 10;
    printf("----------------------------------------------------------------\n");
    printf("%f Centigrams = %f Milligrams\n", cmml, totalcmml);
    printf("----------------------------------------------------------------\n");
}
// Convert Centigram to Grams
void CentigramGrams()
{
    float cmgm;
    float totalcmgm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Centigram would you like converted to Grams: ");
    scanf("%f", &cmgm);
    printf("Converting %f Centigram to Grams equals: \n", cmgm);
    totalcmgm = cmgm * 0.01;
    printf("----------------------------------------------------------------\n");
    printf("%f Centigrams = %f Grams\n", cmgm, totalcmgm);
    printf("----------------------------------------------------------------\n");
}
// Convert Centigram to Ounces
void CentigramOunces()
{
    float cmgm;
    float totalcmgm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Centigram would you like converted to Ounces: ");
    scanf("%f", &cmgm);
    printf("Converting %f Centigram to Ounces equals: \n", cmgm);
    totalcmgm = cmgm * 0.000352739619;
    printf("----------------------------------------------------------------\n");
    printf("%f Centigrams = %f Ounces\n", cmgm, totalcmgm);
    printf("----------------------------------------------------------------\n");
}
// Convert Centigram to Pounds
void CentigramPounds()
{
    float cmpd;
    float totalcmpd;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Centigram would you like converted to Pounds: ");
    scanf("%f", &cmpd);
    printf("Converting %f Centigram to Pounds equals: \n", cmpd);
    totalcmpd = cmpd * 2.20462262 * pow(10,-5);
    printf("----------------------------------------------------------------\n");
    printf("%f Centigrams = %f Pounds\n", cmpd, totalcmpd);
    printf("----------------------------------------------------------------\n");
}
// Convert Centigram to Tons
void CentigramTons()
{
    float cmtn;
    float totalcmtn;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Centigram would you like converted to Tons: ");
    scanf("%f", &cmtn);
    printf("Converting %f Centigram to Tons equals: \n", cmtn);
    totalcmtn = cmtn * 2.20462262 * pow(10,-5);
    printf("----------------------------------------------------------------\n");
    printf("%f Centigrams = %f Tons\n", cmtn, totalcmtn);
    printf("----------------------------------------------------------------\n");
}

// Convert Decigram to Centigrams
void DecigramCentigrams()
{
    float dmcm;
    float totaldmcm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decigram would you like converted to Centigrams: ");
    scanf("%f", &dmcm);
    printf("Converting %f Decigrams to Centigrams equals: \n", dmcm);
    totaldmcm = dmcm * 10;
    printf("----------------------------------------------------------------\n");
    printf("%f Decigrams = %f Centigrams\n", dmcm, totaldmcm);
    printf("----------------------------------------------------------------\n");
}
// Convert Decigram to Dekagrams
void DecigramDekagrams()
{
    float dmdk;
    float totaldmdk;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decigram would you like converted to Dekagrams: ");
    scanf("%f", &dmdk);
    printf("Converting %f Decigrams to Dekagrams equals: \n", dmdk);
    totaldmdk = dmdk * 0.01;
    printf("----------------------------------------------------------------\n");
    printf("%f Decigrams = %f Dekagrams\n", dmdk, totaldmdk);
    printf("----------------------------------------------------------------\n");
}
// Convert Decigram to Drams
void DecigramDrams()
{
    float dmdr;
    float totaldmdr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decigram would you like converted to Drams: ");
    scanf("%f", &dmdr);
    printf("Converting %f Decigrams to Drams equals: \n", dmdr);
    totaldmdr = dmdr * 0.0564383391;
    printf("----------------------------------------------------------------\n");
    printf("%f Decigrams = %f Drams\n", dmdr, totaldmdr);
    printf("----------------------------------------------------------------\n");
}
// Convert Decigram to Grains
void DecigramGrains()
{
    float dmgr;
    float totaldmgr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decigram would you like converted to Grains: ");
    scanf("%f", &dmgr);
    printf("Converting %f Decigrams to Grains equals: \n", dmgr);
    totaldmgr = dmgr * 1.54323584;
    printf("----------------------------------------------------------------\n");
    printf("%f Decigrams = %f Grains\n", dmgr, totaldmgr);
    printf("----------------------------------------------------------------\n");
}
// Convert Decigram to Micrograms
void DecigramMicrograms()
{
    float dmmg;
    float totaldmmg;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decigram would you like converted to Micrograms: ");
    scanf("%f", &dmmg);
    printf("Converting %f Decigrams to Micrograms equals: \n", dmmg);
    totaldmmg = dmmg * 100000;
    printf("----------------------------------------------------------------\n");
    printf("%f Decigrams = %f Micrograms\n", dmmg, totaldmmg);
    printf("----------------------------------------------------------------\n");
}
// Convert Decigram to Milligrams
void DecigramMilligrams()
{
    float dmml;
    float totaldmml;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decigram would you like converted to Milligrams: ");
    scanf("%f", &dmml);
    printf("Converting %f Decigrams to Milligrams equals: \n", dmml);
    totaldmml = dmml * 100;
    printf("----------------------------------------------------------------\n");
    printf("%f Decigrams = %f Milligrams\n", dmml, totaldmml);
    printf("----------------------------------------------------------------\n");
}
// Convert Decigram to Grams
void DecigramGrams()
{
    float dmgr;
    float totaldmgr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decigram would you like converted to Grams: ");
    scanf("%f", &dmgr);
    printf("Converting %f Decigrams to Grams equals: \n", dmgr);
    totaldmgr = dmgr * 0.1;
    printf("----------------------------------------------------------------\n");
    printf("%f Decigrams = %f Grams\n", dmgr, totaldmgr);
    printf("----------------------------------------------------------------\n");
}
// Convert Decigram to Ounces
void DecigramOunces()
{
    float dmoz;
    float totaldmoz;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decigram would you like converted to Ounces: ");
    scanf("%f", &dmoz);
    printf("Converting %f Decigrams to Ounces equals: \n", dmoz);
    totaldmoz = dmoz * 0.00352739619;
    printf("----------------------------------------------------------------\n");
    printf("%f Decigrams = %f Ounces\n", dmoz, totaldmoz);
    printf("----------------------------------------------------------------\n");
}
// Convert Decigram to Pounds
void DecigramPounds()
{
    float dmpd;
    float totaldmpd;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decigram would you like converted to Pounds: ");
    scanf("%f", &dmpd);
    printf("Converting %f Decigrams to Pounds equals: \n", dmpd);
    totaldmpd = dmpd * 0.000220462262;
    printf("----------------------------------------------------------------\n");
    printf("%f Decigrams = %f Pounds\n", dmpd, totaldmpd);
    printf("----------------------------------------------------------------\n");
}
// Convert Decigram to Tons
void DecigramTons()
{
    float dmtn;
    float totaldmtn;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Decigram would you like converted to Tons: ");
    scanf("%f", &dmtn);
    printf("Converting %f Decigrams to Tons equals: \n", dmtn);
    totaldmtn = dmtn * 1.10231131 * pow(10,-7);
    printf("----------------------------------------------------------------\n");
    printf("%f Decigrams = %f Tons\n", dmtn, totaldmtn);
    printf("----------------------------------------------------------------\n");
}
// Convert Dekagram to Centigrams
void DekagramCentigrams()
{
    float dkcm;
    float totaldkcm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dekagram would you like converted to Centigrams: ");
    scanf("%f", &dkcm);
    printf("Converting %f Dekagrams to Centigrams equals: \n", dkcm);
    totaldkcm = dkcm * 1000;
    printf("----------------------------------------------------------------\n");
    printf("%f Dekagrams = %f Centigrams\n", dkcm, totaldkcm);
    printf("----------------------------------------------------------------\n");
}
// Convert Dekagram to Decigrams
void DekagramDecigrams()
{
    float dkdm;
    float totaldkdm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dekagram would you like converted to Decigrams: ");
    scanf("%f", &dkdm);
    printf("Converting %f Dekagrams to Decigrams equals: \n", dkdm);
    totaldkdm = dkdm * 1000;
    printf("----------------------------------------------------------------\n");
    printf("%f Dekagrams = %f Decigrams\n", dkdm, totaldkdm);
    printf("----------------------------------------------------------------\n");
}
// Convert Dekagram to Drams
void DekagramDrams()
{
    float dkdm;
    float totaldkdm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dekagram would you like converted to Drams: ");
    scanf("%f", &dkdm);
    printf("Converting %f Dekagrams to Drams equals: \n", dkdm);
    totaldkdm = dkdm * 5.64383391;
    printf("----------------------------------------------------------------\n");
    printf("%f Dekagrams = %f Drams\n", dkdm, totaldkdm);
    printf("----------------------------------------------------------------\n");
}
// Convert Dekagram to Grains
void DekagramGrains()
{
    float dkgr;
    float totaldkgr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dekagram would you like converted to Grains: ");
    scanf("%f", &dkgr);
    printf("Converting %f Dekagrams to Grains equals: \n", dkgr);
    totaldkgr = dkgr * 154.323584;
    printf("----------------------------------------------------------------\n");
    printf("%f Dekagrams = %f Grains\n", dkgr, totaldkgr);
    printf("----------------------------------------------------------------\n");
}
// Convert Dekagram to Micrograms
void DekagramMicrograms()
{
    float dkmg;
    float totaldkmg;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dekagram would you like converted to Micrograms: ");
    scanf("%f", &dkmg);
    printf("Converting %f Dekagrams to Micrograms equals: \n", dkmg);
    totaldkmg = dkmg * 10000000;
    printf("----------------------------------------------------------------\n");
    printf("%f Dekagrams = %f Micrograms\n", dkmg, totaldkmg);
    printf("----------------------------------------------------------------\n");
}
// Convert Dekagram to Milligrams
void DekagramMilligrams()
{
    float dkmg;
    float totaldkmg;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dekagram would you like converted to Milligrams: ");
    scanf("%f", &dkmg);
    printf("Converting %f Dekagrams to Milligrams equals: \n", dkmg);
    totaldkmg = dkmg * 10000;
    printf("----------------------------------------------------------------\n");
    printf("%f Dekagrams = %f Milligrams\n", dkmg, totaldkmg);
    printf("----------------------------------------------------------------\n");
}
// Convert Dekagram to Grams
void DekagramGrams()
{
    float dkgm;
    float totaldkgm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dekagram would you like converted to Grams: ");
    scanf("%f", &dkgm);
    printf("Converting %f Dekagrams to Grams equals: \n", dkgm);
    totaldkgm = dkgm * 10;
    printf("----------------------------------------------------------------\n");
    printf("%f Dekagrams = %f Grams\n", dkgm, totaldkgm);
    printf("----------------------------------------------------------------\n");
}
// Convert Dekagram to Ounces
void DekagramOunces()
{
    float dkoz;
    float totaldkoz;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dekagram would you like converted to Ounces: ");
    scanf("%f", &dkoz);
    printf("Converting %f Dekagrams to Ounces equals: \n", dkoz);
    totaldkoz = dkoz * 0.352739619;
    printf("----------------------------------------------------------------\n");
    printf("%f Dekagrams = %f Ounces\n", dkoz, totaldkoz);
    printf("----------------------------------------------------------------\n");
}
// Convert Dekagram to Pounds
void DekagramPounds()
{
    float dkpd;
    float totaldkpd;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dekagram would you like converted to Pounds: ");
    scanf("%f", &dkpd);
    printf("Converting %f Dekagrams to Pounds equals: \n", dkpd);
    totaldkpd = dkpd * 0.0220462262;
    printf("----------------------------------------------------------------\n");
    printf("%f Dekagrams = %f Pounds\n", dkpd, totaldkpd);
    printf("----------------------------------------------------------------\n");
}

// Convert Dekagram to Tons
void DekagramTons()
{
    float dktn;
    float totaldktn;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dekagram would you like converted to Tons: ");
    scanf("%f", &dktn);
    printf("Converting %f Dekagrams to Tons equals: \n", dktn);
    totaldktn = dktn * 1.10231131 * pow(10,-5);
    printf("----------------------------------------------------------------\n");
    printf("%f Dekagrams = %f Tons\n", dktn, totaldktn);
    printf("----------------------------------------------------------------\n");
}


// Convert Dram to Centigrams
void DramCentigrams()
{
    float drcm;
    float totaldrcm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dram would you like converted to Centigrams: ");
    scanf("%f", &drcm);
    printf("Converting %f Drams to Centigrams equals: \n", drcm);
    totaldrcm = drcm * 177.18452;
    printf("----------------------------------------------------------------\n");
    printf("%f Drams = %f Centigrams\n", drcm, totaldrcm);
    printf("----------------------------------------------------------------\n");
}
// Convert Dram to Decigrams
void DramDecigrams()
{
    float drdm;
    float totaldrdm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dram would you like converted to Decigrams: ");
    scanf("%f", &drdm);
    printf("Converting %f Drams to Decigrams equals: \n", drdm);
    totaldrdm = drdm * 17.718452;
    printf("----------------------------------------------------------------\n");
    printf("%f Drams = %f Decigrams\n", drdm, totaldrdm);
    printf("----------------------------------------------------------------\n");
}
// Convert Dram to Dekagrams
void DramDekagrams()
{
    float drdk;
    float totaldrdk;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dram would you like converted to Dekagrams: ");
    scanf("%f", &drdk);
    printf("Converting %f Drams to Dekagrams equals: \n", drdk);
    totaldrdk = drdk * 0.17718452;
    printf("----------------------------------------------------------------\n");
    printf("%f Drams = %f Dekagrams\n", drdk, totaldrdk);
    printf("----------------------------------------------------------------\n");
}
// Convert Dram to Grains
void DramGrains()
{
    float drgr;
    float totaldrgr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dram would you like converted to Grains: ");
    scanf("%f", &drgr);
    printf("Converting %f Drams to Grains equals: \n", drgr);
    totaldrgr = drgr * 27.34375;
    printf("----------------------------------------------------------------\n");
    printf("%f Drams = %f Grains\n", drgr, totaldrgr);
    printf("----------------------------------------------------------------\n");
}
// Convert Dram to Micrograms
void DramMicrograms()
{
    float drmg;
    float totaldrmg;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dram would you like converted to Micrograms: ");
    scanf("%f", &drmg);
    printf("Converting %f Drams to Micrograms equals: \n", drmg);
    totaldrmg = drmg * 1771845.2;
    printf("----------------------------------------------------------------\n");
    printf("%f Drams = %f Micrograms\n", drmg, totaldrmg);
    printf("----------------------------------------------------------------\n");
}
// Convert Dram to Milligrams
void DramMilligrams()
{
    float drml;
    float totaldrml;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dram would you like converted to Milligrams: ");
    scanf("%f", &drml);
    printf("Converting %f Drams to Milligrams equals: \n", drml);
    totaldrml = drml * 1771.8452;
    printf("----------------------------------------------------------------\n");
    printf("%f Drams = %f Milligrams\n", drml, totaldrml);
    printf("----------------------------------------------------------------\n");
}
// Convert Dram to Grams
void DramGrams()
{
    float drgm;
    float totaldrgm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dram would you like converted to Grams: ");
    scanf("%f", &drgm);
    printf("Converting %f Drams to Grams equals: \n", drgm);
    totaldrgm = drgm * 1.7718452;
    printf("----------------------------------------------------------------\n");
    printf("%f Drams = %f Grams\n", drgm, totaldrgm);
    printf("----------------------------------------------------------------\n");
}
// Convert Dram to Ounces
void DramOunces()
{
    float droz;
    float totaldroz;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dram would you like converted to Ounces: ");
    scanf("%f", &droz);
    printf("Converting %f Drams to Ounces equals: \n", droz);
    totaldroz = droz * 0.0625;
    printf("----------------------------------------------------------------\n");
    printf("%f Drams = %f Ounces\n", droz, totaldroz);
    printf("----------------------------------------------------------------\n");
}
// Convert Dram to Pounds
void DramPounds()
{
    float drpd;
    float totaldrpd;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dram would you like converted to Pounds: ");
    scanf("%f", &drpd);
    printf("Converting %f Drams to Pounds equals: \n", drpd);
    totaldrpd = drpd * 0.00390625;
    printf("----------------------------------------------------------------\n");
    printf("%f Drams = %f Pounds\n", drpd, totaldrpd);
    printf("----------------------------------------------------------------\n");
}


// Convert Dram to Tons
void DramTons()
{
    float drtn;
    float totaldrtn;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Dram would you like converted to Tons: ");
    scanf("%f", &drtn);
    printf("Converting %f Drams to Tons equals: \n", drtn);
    totaldrtn = drtn * 1.953125 * pow(10,-6);
    printf("----------------------------------------------------------------\n");
    printf("%f Drams = %f Tons\n", drtn, totaldrtn);
    printf("----------------------------------------------------------------\n");
}


// Convert Grain to Centigrams
void GrainCentigrams()
{
    float grcm;
    float totalgrcm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Grain would you like converted to Centigrams: ");
    scanf("%f", &grcm);
    printf("Converting %f Grain to Centigrams equals: \n", grcm);
    totalgrcm = grcm * 6.479891;
    printf("----------------------------------------------------------------\n");
    printf("%f Grains = %f Centigrams\n", grcm, totalgrcm);
    printf("----------------------------------------------------------------\n");
}
// Convert Grain to Decigrams
void GrainDecigrams()
{
    float grdm;
    float totalgrdm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Grain would you like converted to Decigrams: ");
    scanf("%f", &grdm);
    printf("Converting %f Grain to Decigrams equals: \n", grdm);
    totalgrdm = grdm * 0.6479891;
    printf("----------------------------------------------------------------\n");
    printf("%f Grains = %f Decigrams\n", grdm, totalgrdm);
    printf("----------------------------------------------------------------\n");
}
// Convert Grain to Dekdgrams
void GrainDekagrams()
{
    float grdk;
    float totalgrdk;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Grain would you like converted to Dekdgrams: ");
    scanf("%f", &grdk);
    printf("Converting %f Grain to Dekdgrams equals: \n", grdk);
    totalgrdk = grdk * 0.006479891;
    printf("----------------------------------------------------------------\n");
    printf("%f Grains = %f Dekdgrams\n", grdk, totalgrdk);
    printf("----------------------------------------------------------------\n");
}
// Convert Grain to Drams
void GrainDrams()
{
    float grdr;
    float totalgrdr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Grain would you like converted to Drams: ");
    scanf("%f", &grdr);
    printf("Converting %f Grain to Drams equals: \n", grdr);
    totalgrdr = grdr * 0.0365714286;
    printf("----------------------------------------------------------------\n");
    printf("%f Grains = %f Drams\n", grdr, totalgrdr);
    printf("----------------------------------------------------------------\n");
}
// Convert Grain to Micrograms
void GrainMicrograms()
{
    float grmg;
    float totalgrmg;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Grain would you like converted to Micrograms: ");
    scanf("%f", &grmg);
    printf("Converting %f Grain to Micrograms equals: \n", grmg);
    totalgrmg = grmg * 64798.91;
    printf("----------------------------------------------------------------\n");
    printf("%f Grains = %f Micrograms\n", grmg, totalgrmg);
    printf("----------------------------------------------------------------\n");
}
// Convert Grain to Milligrams
void GrainMilligrams()
{
    float grml;
    float totalgrml;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Grain would you like converted to Milligrams: ");
    scanf("%f", &grml);
    printf("Converting %f Grain to Milligrams equals: \n", grml);
    totalgrml = grml * 64.79891;
    printf("----------------------------------------------------------------\n");
    printf("%f Grains = %f Milligrams\n", grml, totalgrml);
    printf("----------------------------------------------------------------\n");
}
// Convert Grain to Grams
void GrainGrams()
{
    float grgm;
    float totalgrgm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Grain would you like converted to Grams: ");
    scanf("%f", &grgm);
    printf("Converting %f Grain to Grams equals: \n", grgm);
    totalgrgm = grgm * 0.06479891;
    printf("----------------------------------------------------------------\n");
    printf("%f Grains = %f Grams\n", grgm, totalgrgm);
    printf("----------------------------------------------------------------\n");
}
// Convert Grain to Ounces
void GrainOunces()
{
    float groz;
    float totalgroz;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Grain would you like converted to Ounces: ");
    scanf("%f", &groz);
    printf("Converting %f Grain to Ounces equals: \n", groz);
    totalgroz = groz * 0.00228571429;
    printf("----------------------------------------------------------------\n");
    printf("%f Grains = %f Ounces\n", groz, totalgroz);
    printf("----------------------------------------------------------------\n");
}
// Convert Grain to Pounds
void GrainPounds()
{
    float grpd;
    float totalgrpd;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Grain would you like converted to Pounds: ");
    scanf("%f", &grpd);
    printf("Converting %f Grain to Pounds equals: \n", grpd);
    totalgrpd = grpd * 0.000142857143;
    printf("----------------------------------------------------------------\n");
    printf("%f Grains = %f Pounds\n", grpd, totalgrpd);
    printf("----------------------------------------------------------------\n");
}

// Convert Grain to Tons
void GrainTons()
{
    float grtn;
    float totalgrtn;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Grain would you like converted to Tons: ");
    scanf("%f", &grtn);
    printf("Converting %f Grain to Tons equals: \n", grtn);
    totalgrtn = grtn * 7.14285714 * pow(10,-8);
    printf("----------------------------------------------------------------\n");
    printf("%f Grains = %f Tons\n", grtn, totalgrtn);
    printf("----------------------------------------------------------------\n");
}


// Convert Microgram to Centigrams
void MicrogramCentigrams()
{
    float mgcm;
    float totalmgcm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Microgram would you like converted to Centigrams: ");
    scanf("%f", &mgcm);
    printf("Converting %f Micrograms to Centigrams equals: \n", mgcm);
    totalmgcm = mgcm * 0.0001;
    printf("----------------------------------------------------------------\n");
    printf("%f Micrograms = %f Centigrams\n", mgcm, totalmgcm);
    printf("----------------------------------------------------------------\n");
}
// Convert Microgram to Decigrams
void MicrogramDecigrams()
{
    float mgdm;
    float totalmgdm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Microgram would you like converted to Decigrams: ");
    scanf("%f", &mgdm);
    printf("Converting %f Micrograms to Decigrams equals: \n", mgdm);
    totalmgdm = mgdm * 1.0 * pow(10,-5);
    printf("----------------------------------------------------------------\n");
    printf("%f Micrograms = %f Decigrams\n", mgdm, totalmgdm);
    printf("----------------------------------------------------------------\n");
}
// Convert Microgram to Dekagrams
void MicrogramDekagrams()
{
    float mgdk;
    float totalmgdk;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Microgram would you like converted to Dekagrams: ");
    scanf("%f", &mgdk);
    printf("Converting %f Micrograms Dekagrams equals: \n", mgdk);
    totalmgdk = mgdk * 1.0 * pow(10,-7);
    printf("----------------------------------------------------------------\n");
    printf("%f Micrograms = %f Dekagrams\n", mgdk, totalmgdk);
    printf("----------------------------------------------------------------\n");
}
// Convert Microgram to Drams
void MicrogramDrams()
{
    float mgdr;
    float totalmgdr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Microgram would you like converted to Drams: ");
    scanf("%f", &mgdr);
    printf("Converting %f Micrograms to Drams equals: \n", mgdr);
    totalmgdr = mgdr * 5.64383391 * pow(10,-7);
    printf("----------------------------------------------------------------\n");
    printf("%f Micrograms = %f Drams\n", mgdr, totalmgdr);
    printf("----------------------------------------------------------------\n");
}
// Convert Microgram to Grains
void MicrogramGrains()
{
    float mggr;
    float totalmggr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Microgram would you like converted to Grains: ");
    scanf("%f", &mggr);
    printf("Converting %f Micrograms to Grains equals: \n", mggr);
    totalmggr = mggr * 1.54323584 * pow(10,-5);
    printf("----------------------------------------------------------------\n");
    printf("%f Micrograms = %f Grains\n", mggr, totalmggr);
    printf("----------------------------------------------------------------\n");
}
// Convert Microgram to Milligrams
void MicrogramMilligrams()
{
    float mgml;
    float totalmgml;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Microgram would you like converted to Milligrams: ");
    scanf("%f", &mgml);
    printf("Converting %f Micrograms to Milligrams equals: \n", mgml);
    totalmgml = mgml * 0.001;
    printf("----------------------------------------------------------------\n");
    printf("%f Micrograms = %f Milligrams\n", mgml, totalmgml);
    printf("----------------------------------------------------------------\n");
}
// Convert Microgram to Grams
void MicrogramGrams()
{
    float mggm;
    float totalmggm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Microgram would you like converted to Grams: ");
    scanf("%f", &mggm);
    printf("Converting %f Micrograms to Grams equals: \n", mggm);
    totalmggm = mggm * 1.0 * pow(10,-6);
    printf("----------------------------------------------------------------\n");
    printf("%f Micrograms = %f Grams\n", mggm, totalmggm);
    printf("----------------------------------------------------------------\n");
}
// Convert Microgram to Ounces
void MicrogramOunces()
{
    float mggm;
    float totalmggm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Microgram would you like converted to Ounces: ");
    scanf("%f", &mggm);
    printf("Converting %f Micrograms to Ounces equals: \n", mggm);
    totalmggm = mggm * 3.52739619 * pow(10,-8);
    printf("----------------------------------------------------------------\n");
    printf("%f Micrograms = %f Ounces\n", mggm, totalmggm);
    printf("----------------------------------------------------------------\n");
}
// Convert Microgram to Pounds
void MicrogramPounds()
{
    float mgpd;
    float totalmgpd;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Microgram would you like converted to Pounds: ");
    scanf("%f", &mgpd);
    printf("Converting %f Micrograms to Pounds equals: \n", mgpd);
    totalmgpd = mgpd * 2.20462262 * pow(10,-9);
    printf("----------------------------------------------------------------\n");
    printf("%f Micrograms = %f Pounds\n", mgpd, totalmgpd);
    printf("----------------------------------------------------------------\n");
}
// Convert Microgram to Tons
void MicrogramTons()
{
    float mgtn;
    float totalmgtn;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Microgram would you like converted to Tons: ");
    scanf("%f", &mgtn);
    printf("Converting %f Micrograms to Short Tons equals: \n", mgtn);
    totalmgtn = mgtn * 1.10231131 * pow(10,-12);
    printf("----------------------------------------------------------------\n");
    printf("%f Micrograms = %f Short Tons\n", mgtn, totalmgtn);
    printf("----------------------------------------------------------------\n");
}
// Convert Milligram to Centigrams
void MilligramCentigrams()
{
    float mlcn;
    float totalmlcn;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Milligram would you like converted to Centigrams: ");
    scanf("%f", &mlcn);
    printf("Converting %f Milligrams to Centigrams equals: \n", mlcn);
    totalmlcn = mlcn * 0.1;
    printf("----------------------------------------------------------------\n");
    printf("%f Milligrams = %f Centigrams\n", mlcn, totalmlcn);
    printf("----------------------------------------------------------------\n");
}
// Convert Milligram to Decigrams
void MilligramDecigrams()
{
    float mldm;
    float totalmldm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Milligram would you like converted to Decigrams: ");
    scanf("%f", &mldm);
    printf("Converting %f Milligrams to Decigrams equals: \n", mldm);
    totalmldm = mldm * 0.01;
    printf("----------------------------------------------------------------\n");
    printf("%f Milligrams = %f Decigrams\n", mldm, totalmldm);
    printf("----------------------------------------------------------------\n");
}
// Convert Milligram to Dekagrams
void MilligramDekagrams()
{
    float mldk;
    float totalmldk;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Milligram would you like converted to Dekagrams: ");
    scanf("%f", &mldk);
    printf("Converting %f Milligrams to Dekagrams equals: \n", mldk);
    totalmldk = mldk * 0.01;
    printf("----------------------------------------------------------------\n");
    printf("%f Milligrams = %f Dekagrams\n", mldk, totalmldk);
    printf("----------------------------------------------------------------\n");
}
// Convert Milligram to Drams
void MilligramDrams()
{
    float mldk;
    float totalmldk;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Milligram would you like converted to Drams: ");
    scanf("%f", &mldk);
    printf("Converting %f Milligrams to Drams equals: \n", mldk);
    totalmldk = mldk * 0.000564383391;
    printf("----------------------------------------------------------------\n");
    printf("%f Milligrams = %f Drams\n", mldk, totalmldk);
    printf("----------------------------------------------------------------\n");
}
// Convert Milligram to Grains
void MilligramGrains()
{
    float mlgr;
    float totalmlgr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Milligram would you like converted to Dekagrams: ");
    scanf("%f", &mlgr);
    printf("Converting %f Milligrams to Dekagrams equals: \n", mlgr);
    totalmlgr = mlgr * 0.0154323584;
    printf("----------------------------------------------------------------\n");
    printf("%f Milligrams = %f Dekagrams\n", mlgr, totalmlgr);
    printf("----------------------------------------------------------------\n");
}
// Convert Milligram to Micrograms
void MilligramMicrograms()
{
    float mlmg;
    float totalmlmg;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Milligram would you like converted to Micrograms: ");
    scanf("%f", &mlmg);
    printf("Converting %f Milligrams to Micrograms equals: \n", mlmg);
    totalmlmg = mlmg * 1000;
    printf("----------------------------------------------------------------\n");
    printf("%f Milligrams = %f Micrograms\n", mlmg, totalmlmg);
    printf("----------------------------------------------------------------\n");
}
// Convert Milligram to Grams
void MilligramGrams()
{
    float mlgm;
    float totalmlgm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Milligram would you like converted to Grams: ");
    scanf("%f", &mlgm);
    printf("Converting %f Milligrams to Grams equals: \n", mlgm);
    totalmlgm = mlgm * 1000;
    printf("----------------------------------------------------------------\n");
    printf("%f Milligrams = %f Grams\n", mlgm, totalmlgm);
    printf("----------------------------------------------------------------\n");
}
// Convert Milligram to Ounces
void MilligramOunces()
{
    float mloz;
    float totalmloz;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Milligram would you like converted to Ounces: ");
    scanf("%f", &mloz);
    printf("Converting %f Milligrams to Ounces equals: \n", mloz);
    totalmloz = mloz * 3.52739619 * pow(10,-5);
    printf("----------------------------------------------------------------\n");
    printf("%f Milligrams = %f Ounces\n", mloz, totalmloz);
    printf("----------------------------------------------------------------\n");
}
// Convert Milligram to Pounds
void MilligramPounds()
{
    float mloz;
    float totalmloz;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Milligram would you like converted to Pounds: ");
    scanf("%f", &mloz);
    printf("Converting %f Milligrams to Pounds equals: \n", mloz);
    totalmloz = mloz * 2.20462262 * pow(10,-6);
    printf("----------------------------------------------------------------\n");
    printf("%f Milligrams = %f Pounds\n", mloz, totalmloz);
    printf("----------------------------------------------------------------\n");
}
// Convert Milligram to Tons
void MilligramTons()
{
    float mltn;
    float totalmltn;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Milligram would you like converted to Tons: ");
    scanf("%f", &mltn);
    printf("Converting %f Milligrams to Tons equals: \n", mltn);
    totalmltn = mltn * 1.10231131 * pow(10,-9);
    printf("----------------------------------------------------------------\n");
    printf("%f Milligrams = %f Tons\n", mltn, totalmltn);
    printf("----------------------------------------------------------------\n");
}
// Convert Gram to Centigrams
void GramCentigrams()
{
    float gmcm;
    float totalgmcm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Gram would you like converted to Centigrams: ");
    scanf("%f", &gmcm);
    printf("Converting %f Grams to Centigrams equals: \n", gmcm);
    totalgmcm = gmcm * 100;
    printf("----------------------------------------------------------------\n");
    printf("%f Grams = %f Centigrams\n", gmcm, totalgmcm);
    printf("----------------------------------------------------------------\n");
}
// Convert Gram to Decigrams
void GramDecigrams()
{
    float gmdm;
    float totalgmdm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Gram would you like converted to Decigrams: ");
    scanf("%f", &gmdm);
    printf("Converting %f Grams to Decigrams equals: \n", gmdm);
    totalgmdm = gmdm * 10;
    printf("----------------------------------------------------------------\n");
    printf("%f Grams = %f Decigrams\n", gmdm, totalgmdm);
    printf("----------------------------------------------------------------\n");
}
// Convert Gram to Dekagrams
void GramDekagrams()
{
    float gmdk;
    float totalgmdk;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Gram would you like converted to Decigrams: ");
    scanf("%f", &gmdk);
    printf("Converting %f Grams to Decigrams equals: \n", gmdk);
    totalgmdk = gmdk * 0.1;
    printf("----------------------------------------------------------------\n");
    printf("%f Grams = %f Decigrams\n", gmdk, totalgmdk);
    printf("----------------------------------------------------------------\n");
}
// Convert Gram to Drams
void GramDrams()
{
    float gmdr;
    float totalgmdr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Gram would you like converted to Drams: ");
    scanf("%f", &gmdr);
    printf("Converting %f Grams to Drams equals: \n", gmdr);
    totalgmdr = gmdr * 0.564383391;
    printf("----------------------------------------------------------------\n");
    printf("%f Grams = %f Drams\n", gmdr, totalgmdr);
    printf("----------------------------------------------------------------\n");
}
// Convert Gram to Grains
void GramGrains()
{
    float gmdr;
    float totalgmdr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Gram would you like converted to Grains: ");
    scanf("%f", &gmdr);
    printf("Converting %f Grams to Grains equals: \n", gmdr);
    totalgmdr = gmdr * 15.4323584;
    printf("----------------------------------------------------------------\n");
    printf("%f Grams = %f Grains\n", gmdr, totalgmdr);
    printf("----------------------------------------------------------------\n");
}
// Convert Gram to Micrograms
void GramMicrograms()
{
    float gmmg;
    float totalgmmg;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Gram would you like converted to Micrograms: ");
    scanf("%f", &gmmg);
    printf("Converting %f Grams to Micrograms equals: \n", gmmg);
    totalgmmg = gmmg * 1000000;
    printf("----------------------------------------------------------------\n");
    printf("%f Grams = %f Micrograms\n", gmmg, totalgmmg);
    printf("----------------------------------------------------------------\n");
}
// Convert Gram to Milligrams
void GramMilligrams()
{
    float gmml;
    float totalgmml;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Gram would you like converted to Milligrams: ");
    scanf("%f", &gmml);
    printf("Converting %f Grams to Milligrams equals: \n", gmml);
    totalgmml = gmml * 1000;
    printf("----------------------------------------------------------------\n");
    printf("%f Grams = %f Milligrams\n", gmml, totalgmml);
    printf("----------------------------------------------------------------\n");
}
// Convert Gram to Ounces
void GramOunces()
{
    float gmoz;
    float totalgmoz;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Gram would you like converted to Ounces: ");
    scanf("%f", &gmoz);
    printf("Converting %f Grams to Ounces equals: \n", gmoz);
    totalgmoz = gmoz * 0.0352739619;
    printf("----------------------------------------------------------------\n");
    printf("%f Grams = %f Ounces\n", gmoz, totalgmoz);
    printf("----------------------------------------------------------------\n");
}
// Convert Gram to Pounds
void GramPounds()
{
    float gmpd;
    float totalgmpd;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Gram would you like converted to Pounds: ");
    scanf("%f", &gmpd);
    printf("Converting %f Grams to Pounds equals: \n", gmpd);
    totalgmpd = gmpd * 0.00220462262;
    printf("----------------------------------------------------------------\n");
    printf("%f Grams = %f Pounds\n", gmpd, totalgmpd);
    printf("----------------------------------------------------------------\n");
}
// Convert Gram to Tons
void GramTons()
{
    float gmtn;
    float totalgmtn;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Gram would you like converted to Tons: ");
    scanf("%f", &gmtn);
    printf("Converting %f Grams to Tons equals: \n", gmtn);
    totalgmtn = gmtn * 1.10231131 * pow(10,-6);
    printf("----------------------------------------------------------------\n");
    printf("%f Grams = %f Tons\n", gmtn, totalgmtn);
    printf("----------------------------------------------------------------\n");
}
// Convert Ounce to Centigrams
void OunceCentigrams()
{
    float ozcm;
    float totalozcm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Ounce would you like converted to Centigrams: ");
    scanf("%f", &ozcm);
    printf("Converting %f Ounces to Centigrams equals: \n", ozcm);
    totalozcm = ozcm * 2834.95231;
    printf("----------------------------------------------------------------\n");
    printf("%f Ounces = %f Centigrams\n", ozcm, totalozcm);
    printf("----------------------------------------------------------------\n");
}
// Convert Ounce to Decigrams
void OunceDecigrams()
{
    float ozdm;
    float totalozdm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Ounce would you like converted to Decigrams: ");
    scanf("%f", &ozdm);
    printf("Converting %f Ounces to Decigrams equals: \n", ozdm);
    totalozdm = ozdm * 283.495231;
    printf("----------------------------------------------------------------\n");
    printf("%f Ounces = %f Decigrams\n", ozdm, totalozdm);
    printf("----------------------------------------------------------------\n");
}
// Convert Ounce to Dekagrams
void OunceDekagrams()
{
    float ozdk;
    float totalozdk;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Ounce would you like converted to Dekagrams: ");
    scanf("%f", &ozdk);
    printf("Converting %f Ounces to Dekagrams equals: \n", ozdk);
    totalozdk = ozdk * 2.83495231;
    printf("----------------------------------------------------------------\n");
    printf("%f Ounces = %f Dekagrams\n", ozdk, totalozdk);
    printf("----------------------------------------------------------------\n");
}
// Convert Ounce to Drams
void OunceDrams()
{
    float ozdr;
    float totalozdr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Ounce would you like converted to Drams: ");
    scanf("%f", &ozdr);
    printf("Converting %f Ounces to Drams equals: \n", ozdr);
    totalozdr = ozdr * 16;
    printf("----------------------------------------------------------------\n");
    printf("%f Ounces = %f Drams\n", ozdr, totalozdr);
    printf("----------------------------------------------------------------\n");
}
// Convert Ounce to Grains
void OunceGrains()
{
    float ozgr;
    float totalozgr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Ounce would you like converted to Grains: ");
    scanf("%f", &ozgr);
    printf("Converting %f Ounces to Grains equals: \n", ozgr);
    totalozgr = ozgr * 437.5;
    printf("----------------------------------------------------------------\n");
    printf("%f Ounces = %f Grains\n", ozgr, totalozgr);
    printf("----------------------------------------------------------------\n");
}
// Convert Ounce to Micrograms
void OunceMicrograms()
{
    float ozmg;
    float totalozmg;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Ounce would you like converted to Micrograms: ");
    scanf("%f", &ozmg);
    printf("Converting %f Ounces to Micrograms equals: \n", ozmg);
    totalozmg = ozmg * 28349523.1;
    printf("----------------------------------------------------------------\n");
    printf("%f Ounces = %f Micrograms\n", ozmg, totalozmg);
    printf("----------------------------------------------------------------\n");
}
// Convert Ounce to Milligrams
void OunceMilligrams()
{
    float ozml;
    float totalozml;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Ounce would you like converted to Milligrams: ");
    scanf("%f", &ozml);
    printf("Converting %f Ounces to Milligrams equals: \n", ozml);
    totalozml = ozml * 28349.5231;
    printf("----------------------------------------------------------------\n");
    printf("%f Ounces = %f Milligrams\n", ozml, totalozml);
    printf("----------------------------------------------------------------\n");
}
// Convert Ounce to Grams
void OunceGrams()
{
    float ozgm;
    float totalozgm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Ounce would you like converted to Grams: ");
    scanf("%f", &ozgm);
    printf("Converting %f Ounces to Grams equals: \n", ozgm);
    totalozgm = ozgm * 28.3495231;
    printf("----------------------------------------------------------------\n");
    printf("%f Ounces = %f Grams\n", ozgm, totalozgm);
    printf("----------------------------------------------------------------\n");
}
// Convert Ounce to Pounds
void OuncePounds()
{
    float ozpd;
    float totalozpd;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Ounce would you like converted to Pounds: ");
    scanf("%f", &ozpd);
    printf("Converting %f Ounces to Pounds equals: \n", ozpd);
    totalozpd = ozpd * 0.0625;
    printf("----------------------------------------------------------------\n");
    printf("%f Ounces = %f Pounds\n", ozpd, totalozpd);
    printf("----------------------------------------------------------------\n");
}
// Convert Ounce to Tons
void OunceTons()
{
    float oztn;
    float totaloztn;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Ounce would you like converted to Tons: ");
    scanf("%f", &oztn);
    printf("Converting %f Ounces to Short Tons equals: \n", oztn);
    totaloztn = oztn * 3.12500 * pow(10,-5);
    printf("----------------------------------------------------------------\n");
    printf("%f Ounces = %f Tons\n", oztn, totaloztn);
    printf("----------------------------------------------------------------\n");
}
// Convert Pound to Centigrams
void PoundCentigrams()
{
    float pdcm;
    float totalpdcm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Pound would you like converted to Centigrams: ");
    scanf("%f", &pdcm);
    printf("Converting %f Pound to Centigrams equals: \n", pdcm);
    totalpdcm = pdcm * 45359.237;
    printf("----------------------------------------------------------------\n");
    printf("%f Pound = %f Centigrams\n", pdcm, totalpdcm);
    printf("----------------------------------------------------------------\n");
}
// Convert Pound to Decigrams
void PoundDecigrams()
{
    float pddm;
    float totalpddm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Pound would you like converted to Decigrams: ");
    scanf("%f", &pddm);
    printf("Converting %f Pounds to Decigrams equals: \n", pddm);
    totalpddm = pddm * 4535.9237;
    printf("----------------------------------------------------------------\n");
    printf("%f Pounds = %f Decigrams\n", pddm, totalpddm);
    printf("----------------------------------------------------------------\n");
}
// Convert Pound to Dekagrams
void PoundDekagrams()
{
    float pddk;
    float totalpddk;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Pound would you like converted to Dekagrams: ");
    scanf("%f", &pddk);
    printf("Converting %f Pounds to Dekagrams equals: \n", pddk);
    totalpddk = pddk * 45.359237;
    printf("----------------------------------------------------------------\n");
    printf("%f Pounds = %f Dekagrams\n", pddk, totalpddk);
    printf("----------------------------------------------------------------\n");
}
// Convert Pound to Drams
void PoundDrams()
{
    float pddr;
    float totalpddr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Pound would you like converted to Drams: ");
    scanf("%f", &pddr);
    printf("Converting %f Pounds to Drams equals: \n", pddr);
    totalpddr = pddr * 256;
    printf("----------------------------------------------------------------\n");
    printf("%f Pounds = %f Drams\n", pddr, totalpddr);
    printf("----------------------------------------------------------------\n");
}
// Convert Pound to Grains
void PoundGrains()
{
    float pdgr;
    float totalpdgr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Pound would you like converted to Grains: ");
    scanf("%f", &pdgr);
    printf("Converting %f Pounds to Grains equals: \n", pdgr);
    totalpdgr = pdgr * 7000;
    printf("----------------------------------------------------------------\n");
    printf("%f Pounds = %f Grains\n", pdgr, totalpdgr);
    printf("----------------------------------------------------------------\n");
}
// Convert Pound to Micrograms
void PoundMicrograms()
{
    float pdmg;
    float totalpdmg;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Pound would you like converted to Micrograms: ");
    scanf("%f", &pdmg);
    printf("Converting %f Pounds to Micrograms equals: \n", pdmg);
    totalpdmg = pdmg * 453592370;
    printf("----------------------------------------------------------------\n");
    printf("%f Pounds = %f Micrograms\n", pdmg, totalpdmg);
    printf("----------------------------------------------------------------\n");
}
// Convert Pound to Milligrams
void PoundMilligrams()
{
    float pdml;
    float totalpdml;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Pound would you like converted to Milligrams: ");
    scanf("%f", &pdml);
    printf("Converting %f Pounds to Milligrams equals: \n", pdml);
    totalpdml = pdml * 453592.37;
    printf("----------------------------------------------------------------\n");
    printf("%f Pounds = %f Milligrams\n", pdml, totalpdml);
    printf("----------------------------------------------------------------\n");
}
// Convert Pound to Grams
void PoundGrams()
{
    float pdgm;
    float totalpdgm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Pound would you like converted to Grams: ");
    scanf("%f", &pdgm);
    printf("Converting %f Pounds to Grams equals: \n", pdgm);
    totalpdgm = pdgm * 453.59237;
    printf("----------------------------------------------------------------\n");
    printf("%f Pounds = %f Grams\n", pdgm, totalpdgm);
    printf("----------------------------------------------------------------\n");
}
// Convert Pound to Ounces
void PoundOunces()
{
    float pdoz;
    float totalpdoz;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Pound would you like converted to Ounces: ");
    scanf("%f", &pdoz);
    printf("Converting %f Pounds to Ounces equals: \n", pdoz);
    totalpdoz = pdoz * 16;
    printf("----------------------------------------------------------------\n");
    printf("%f Pounds = %f Ounces\n", pdoz, totalpdoz);
    printf("----------------------------------------------------------------\n");
}
// Convert Pound to Tons
void PoundTons()
{
    float pdtn;
    float totalpdtn;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Pound would you like converted to Tons: ");
    scanf("%f", &pdtn);
    printf("Converting %f Pounds to Tons equals: \n", pdtn);
    totalpdtn = pdtn * 0.0005;
    printf("----------------------------------------------------------------\n");
    printf("%f Pounds = %f Tons\n", pdtn, totalpdtn);
    printf("----------------------------------------------------------------\n");
}
// Convert Ton to Centigrams
void TonCentigrams()
{
    float tncm;
    float totaltncm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Short Ton would you like converted to Centigrams: ");
    scanf("%f", &tncm);
    printf("Converting %f Short Tons to Centigrams equals: \n", tncm);
    totaltncm = tncm * 90718474;
    printf("----------------------------------------------------------------\n");
    printf("%f Short Tons = %f Centigrams\n", tncm, totaltncm);
    printf("----------------------------------------------------------------\n");
}
// Convert Ton to Decigrams
void TonDecigrams()
{
    float tndm;
    float totaltndm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Short Ton would you like converted to Decigrams: ");
    scanf("%f", &tndm);
    printf("Converting %f Short Tons to Decigrams equals: \n", tndm);
    totaltndm = tndm * 9071847.4;
    printf("----------------------------------------------------------------\n");
    printf("%f Short Tons = %f Decigrams\n", tndm, totaltndm);
    printf("----------------------------------------------------------------\n");
}
// Convert Ton to Dekagrams
void TonDekagrams()
{
    float tndk;
    float totaltndk;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Short Ton would you like converted to Dekagrams: ");
    scanf("%f", &tndk);
    printf("Converting %f Short Tons to Dekagrams equals: \n", tndk);
    totaltndk = tndk * 90718.474;
    printf("----------------------------------------------------------------\n");
    printf("%f Short Tons = %f Dekagrams\n", tndk, totaltndk);
    printf("----------------------------------------------------------------\n");
}
// Convert Ton to Drams
void TonDrams()
{
    float tndr;
    float totaltndr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Short Ton would you like converted to Drams: ");
    scanf("%f", &tndr);
    printf("Converting %f Short Tons to Drams equals: \n", tndr);
    totaltndr = tndr * 512000;
    printf("----------------------------------------------------------------\n");
    printf("%f Short Tons = %f Drams\n", tndr, totaltndr);
    printf("----------------------------------------------------------------\n");
}
// Convert Ton to Grains
void TonGrains()
{
    float tngr;
    float totaltngr;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Short Ton would you like converted to Grains: ");
    scanf("%f", &tngr);
    printf("Converting %f Short Tons to Grains equals: \n", tngr);
    totaltngr = tngr * 512000;
    printf("----------------------------------------------------------------\n");
    printf("%f Short Tons = %f Grains\n", tngr, totaltngr);
    printf("----------------------------------------------------------------\n");
}
// Convert Ton to Micrograms
void TonMicrograms()
{
    float tnmg;
    float totaltnmg;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Short Ton would you like converted to Micrograms: ");
    scanf("%f", &tnmg);
    printf("Converting %f Short Tons to Micrograms equals: \n", tnmg);
    totaltnmg = tnmg * 907184740000;
    printf("----------------------------------------------------------------\n");
    printf("%f Short Tons = %f Micrograms\n", tnmg, totaltnmg);
    printf("----------------------------------------------------------------\n");
}
// Convert Ton to Milligrams
void TonMilligrams()
{
    float tnml;
    float totaltnml;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Short Ton would you like converted to Milligrams: ");
    scanf("%f", &tnml);
    printf("Converting %f Short Tons to Milligrams equals: \n", tnml);
    totaltnml = tnml * 907184740;
    printf("----------------------------------------------------------------\n");
    printf("%f Short Tons = %f Milligrams\n", tnml, totaltnml);
    printf("----------------------------------------------------------------\n");
}
// Convert Ton to Grams
void TonGrams()
{
    float tngm;
    float totaltngm;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Short Ton would you like converted to Grams: ");
    scanf("%f", &tngm);
    printf("Converting %f Short Tons to Grams equals: \n", tngm);
    totaltngm = tngm * 907184.74;
    printf("----------------------------------------------------------------\n");
    printf("%f Short Tons = %f Grams\n", tngm, totaltngm);
    printf("----------------------------------------------------------------\n");
}
// Convert Ton to Ounces
void TonOunces()
{
    float tnoz;
    float totaltnoz;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Short Ton would you like converted to Ounces: ");
    scanf("%f", &tnoz);
    printf("Converting %f Short Tons to Ounces equals: \n", tnoz);
    totaltnoz = tnoz * 32000;
    printf("----------------------------------------------------------------\n");
    printf("%f Short Tons = %f Ounces\n", tnoz, totaltnoz);
    printf("----------------------------------------------------------------\n");
}
// Convert Ton to Pounds
void TonPounds()
{
    float tnpd;
    float totaltnpd;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Short Ton would you like converted to Pounds: ");
    scanf("%f", &tnpd);
    printf("Converting %f Short Tons to Pounds equals: \n", tnpd);
    totaltnpd = tnpd * 2000;
    printf("----------------------------------------------------------------\n");
    printf("%f Short Tons = %f Pounds\n", tnpd, totaltnpd);
    printf("----------------------------------------------------------------\n");
}


/*   Volume Convert Stage  */

void Volume()
{
    int subfirstvol;
    int subsecondvol;
    int vcenti = 1;
    int vinch = 2;
    int vfoot = 3;
    int vmeter = 4;
    int vtea = 5;
    int vtable = 6;
    int vflounce = 7;
    int vcup = 8;
    int vpint = 9;
    int vquart = 10;
    int vgallon = 11;
    int vimpgal = 12;
    int vmilliter = 13;
    int vliter = 14;
    int vkilo = 15;
        
    printf("\n");
    printf("Your selection is Wieght.\n");
    printf("[1]  Cubic centimeter\n");
    printf("[2]  Cubic inch\n");
    printf("[3]  Cubic foot\n");
    printf("[4]  Cubic meter\n");
    printf("[5]  Teaspoon\n");
    printf("[6]  Tablespoon\n");
    printf("[7]  Fluid Ounce\n");
    printf("[8]  Cup\n");
    printf("[9]  Pint\n");
    printf("[10] Quart\n");
    printf("[11] Gallon\n");
    printf("[12] Imperial Gallon\n");
    printf("[13] Milliliter\n");
    printf("[14] Liter\n");
    printf("[15] Kiloliter\n");
    printf("Which would you like to covert: ");
    scanf("%d", &subfirstvol);
    printf("Convert to: ");
    scanf("%d", &subsecondvol);
        
    if (subfirstvol != vcenti && subfirstvol != vinch && subfirstvol != vfoot && subfirstvol != vmeter &&
        subfirstvol != vtea && subfirstvol != vtable && subfirstvol != vflounce && subfirstvol != vcup &&
        subfirstvol != vpint && subfirstvol != vquart && subfirstvol != vgallon && subfirstvol != vimpgal &&
        subfirstvol != vmilliter && subfirstvol != vliter && subfirstvol != vkilo)
    {
        printf("\nERROR: INCORRECT VALUE.\n");
    }
    if (subsecondvol != vcenti && subsecondvol != vinch && subsecondvol != vfoot && subsecondvol != vmeter &&
        subsecondvol != vtea && subsecondvol != vtable && subsecondvol != vflounce && subsecondvol != vcup &&
        subsecondvol != vpint && subsecondvol != vquart && subsecondvol != vgallon && subsecondvol != vimpgal &&
        subsecondvol != vmilliter && subsecondvol != vliter && subsecondvol != vkilo)
    {
        printf("\nERROR: INCORRECT VALUE.\n");
    }
    if (subfirstvol == subsecondvol)
        {
            printf("\nERROR: YOU CANNOT CONVERT INTO THE SAME UNIT.\n");
        }
        if (subfirstvol == vcenti && subsecondvol == vinch)
        {
            CubicCentiInches();
        }
        if (subfirstvol == vcenti && subsecondvol == vfoot)
        {
            CubicCentiFoot();
        }
        if (subfirstvol == vcenti && subsecondvol == vmeter)
        {
            CubicCentiMeters();
        }
        if (subfirstvol == vcenti && subsecondvol == vtea)
        {
            CubicCentiTeaspoons();
        }
        if (subfirstvol == vcenti && subsecondvol == vtable)
        {
            CubicCentiTablespoons();
        }
        if (subfirstvol == vcenti && subsecondvol == vflounce)
        {
            CubicCentiFluidOunces();
        }
        if (subfirstvol == vcenti && subsecondvol == vcup)
        {
            CubicCentiCups();
        }
        if (subfirstvol == vcenti && subsecondvol == vpint)
        {
            CubicCentiPints();
        }
        if (subfirstvol == vcenti && subsecondvol == vpint)
        {
            CubicCentiPints();
        }
        if (subfirstvol == vcenti && subsecondvol == vquart)
        {
            CubicCentiQuarts();
        }
        if (subfirstvol == vcenti && subsecondvol == vgallon)
        {
            CubicCentiGallons();
        }
        if (subfirstvol == vcenti && subsecondvol == vimpgal)
        {
            CubicCentiImpGallons();
        }
        if (subfirstvol == vcenti && subsecondvol == vmilliter)
        {
            CubicCentiMilliters();
        }
        if (subfirstvol == vcenti && subsecondvol == vliter)
        {
            CubicCentiLiters();
        }
        if (subfirstvol == vcenti && subsecondvol == vkilo)
        {
            CubicCentiKiloliters();
        }
        if (subfirstvol == vinch && subsecondvol == vcenti)
        {
            CubicInchesCenti();
        }
        if (subfirstvol == vinch && subsecondvol == vfoot)
        {
            CubicInchesFeet();
        }
        if (subfirstvol == vinch && subsecondvol == vmeter)
        {
            CubicInchesMeters();
        }
        if (subfirstvol == vinch && subsecondvol == vtea)
        {
            CubicInchesTeaspoons();
        }
        if (subfirstvol == vinch && subsecondvol == vtable)
        {
            CubicInchesTablespoons();
        }
        if (subfirstvol == vinch && subsecondvol == vflounce)
        {
            CubicInchesfloz();
        }
        if (subfirstvol == vinch && subsecondvol == vcup)
        {
            CubicInchesCups();
        }
        if (subfirstvol == vinch && subsecondvol == vpint)
        {
            CubicInchesPints();
        }
        if (subfirstvol == vinch && subsecondvol == vquart)
        {
            CubicInchesQuarts();
        }
        if (subfirstvol == vinch && subsecondvol == vgallon)
        {
            CubicInchesGallons();
        }
        if (subfirstvol == vinch && subsecondvol == vimpgal)
        {
            CubicInchesImpGallons();
        }
        if (subfirstvol == vinch && subsecondvol == vmilliter)
        {
            CubicInchesMilliters();
        }
        if (subfirstvol == vinch && subsecondvol == vliter)
        {
            CubicInchesLiters();
        }
        if (subfirstvol == vinch && subsecondvol == vkilo)
        {
            CubicInchesKiloliters();
        }
        if (subfirstvol == vfoot && subsecondvol == vcenti)
        {
            CubicFootCentimeters();
        }
        if (subfirstvol == vfoot && subsecondvol == vinch)
        {
            CubicFootInches();
        }
        if (subfirstvol == vfoot && subsecondvol == vmeter)
        {
            CubicFootMeters();
        }
        if (subfirstvol == vfoot && subsecondvol == vtea)
        {
            CubicFootTeaspoons();
        }
        if (subfirstvol == vfoot && subsecondvol == vtable)
        {
            CubicFootTablespoons();
        }
        if (subfirstvol == vfoot && subsecondvol == vtable)
        {
            CubicFootFloz();
        }
        if (subfirstvol == vfoot && subsecondvol == vcup)
        {
            CubicFootCups();
        }
        if (subfirstvol == vfoot && subsecondvol == vpint)
        {
            CubicFootPints();
        }
        if (subfirstvol == vfoot && subsecondvol == vquart)
        {
            CubicFootQuarts();
        }
        if (subfirstvol == vfoot && subsecondvol == vmilliter)
        {
            CubicFootMilliters();
        }
        if (subfirstvol == vfoot && subsecondvol == vliter)
        {
            CubicFootLiters();
        }
        if (subfirstvol == vfoot && subsecondvol == vkilo)
        {
            CubicFootKiloliters();
        }
        if (subfirstvol == vmeter && subsecondvol == vcenti)
        {
            CubicMetersCenti();
        }
        if (subfirstvol == vmeter && subsecondvol == vinch)
        {
            CubicMetersInches();
        }
        if (subfirstvol == vmeter && subsecondvol == vfoot)
        {
            CubicMetersFeet();
        }
        if (subfirstvol == vmeter && subsecondvol == vtea)
        {
            CubicMetersTeaspoons();
        }
        if (subfirstvol == vmeter && subsecondvol == vtable)
        {
            CubicMetersTablespoons();
        }
        if (subfirstvol == vmeter && subsecondvol == vflounce)
        {
            CubicMetersFLOZ();
        }
        if (subfirstvol == vmeter && subsecondvol == vcup)
        {
            CubicMetersCups();
        }
        if (subfirstvol == vmeter && subsecondvol == vpint)
        {
            CubicMetersPints();
        }
        if (subfirstvol == vmeter && subsecondvol == vquart)
        {
            CubicMetersQuarts();
        }
        if (subfirstvol == vmeter && subsecondvol == vgallon)
        {
            CubicMetersGallons();
        }
        if (subfirstvol == vmeter && subsecondvol == vimpgal)
        {
            CubicMetersImpGallons();
        }
        if (subfirstvol == vmeter && subsecondvol == vmilliter)
        {
            CubicMetersMilLiters();
        }
        if (subfirstvol == vmeter && subsecondvol == vliter)
        {
            CubicMetersLiters();
        }
        if (subfirstvol == vmeter && subsecondvol == vkilo)
        {
            CubicMetersKiloliters();
        }
        if (subfirstvol == vtea && subsecondvol == vcenti)
        {
            TeaspoonsCuCentimeters();
        }
        if (subfirstvol == vtea && subsecondvol == vinch)
        {
            TeaspoonsInches();
        }
        if (subfirstvol == vtea && subsecondvol == vfoot)
        {
            TeaspoonsFeet();
        }
        if (subfirstvol == vtea && subsecondvol == vmeter)
        {
            TeaspoonsMeters();
        }
        if (subfirstvol == vtea && subsecondvol == vtable)
        {
            TeaspoonsTablespoons();
        }
        if (subfirstvol == vtea && subsecondvol == vflounce)
        {
            TeaspoonsFLOZ();
        }
        if (subfirstvol == vtea && subsecondvol == vcup)
        {
            TeaspoonsCups();
        }
        if (subfirstvol == vtea && subsecondvol == vpint)
        {
            TeaspoonsPints();
        }
        if (subfirstvol == vtea && subsecondvol == vquart)
        {
            TeaspoonsQuarts();
        }
        if (subfirstvol == vtea && subsecondvol == vgallon)
        {
            TeaspoonsGallons();
        }
        if (subfirstvol == vtea && subsecondvol == vimpgal)
        {
            TeaspoonsImpGallons();
        }
        if (subfirstvol == vtea && subsecondvol == vmilliter)
        {
            TeaspoonsMilliters();
        }
        if (subfirstvol == vtea && subsecondvol == vliter)
        {
            TeaspoonsLiters();
        }
        if (subfirstvol == vtea && subsecondvol == vkilo)
        {
            TeaspoonsKiloliters();
        }
        if (subfirstvol == vtable && subsecondvol == vcenti)
        {
            TablespoonsCuCentimeters();
        }
        if (subfirstvol == vtable && subsecondvol == vinch)
        {
            TablespoonsInches();
        }
        if (subfirstvol == vtable && subsecondvol == vfoot)
        {
            TablespoonsFeet();
        }
        if (subfirstvol == vtable && subsecondvol == vmeter)
        {
            TablespoonsMeters();
        }
        if (subfirstvol == vtable && subsecondvol == vtea)
        {
            TablespoonsTeaspoons();
        }
        if (subfirstvol == vtable && subsecondvol == vflounce)
        {
            TablespoonsFLOZ();
        }
        if (subfirstvol == vtable && subsecondvol == vcup)
        {
            TablespoonsCups();
        }
        if (subfirstvol == vtable && subsecondvol == vpint)
        {
            TablespoonsPints();
        }
        if (subfirstvol == vtable && subsecondvol == vquart)
        {
            TablespoonsQuarts();
        }
        if (subfirstvol == vtable && subsecondvol == vgallon)
        {
            TablespoonsGallons();
        }
        if (subfirstvol == vtable && subsecondvol == vimpgal)
        {
            TablespoonsImpGallons();
        }
        if (subfirstvol == vtable && subsecondvol == vmilliter)
        {
            TablespoonsMilliters();
        }
        if (subfirstvol == vtable && subsecondvol == vliter)
        {
            TablespoonsLiters();
        }
        if (subfirstvol == vtable && subsecondvol == vkilo)
        {
            TablespoonsKiloliters();
        }
        if (subfirstvol == vflounce && subsecondvol == vcenti)
        {
            FlozCuCenti();
        }
        if (subfirstvol == vflounce && subsecondvol == vinch)
        {
            FlozInches();
        }
        if (subfirstvol == vflounce && subsecondvol == vfoot)
        {
            FlozFeet();
        }
        if (subfirstvol == vflounce && subsecondvol == vmeter)
        {
            FlozMeters();
        }
        if (subfirstvol == vflounce && subsecondvol == vtea)
        {
            FlozTeaspoons();
        }
        if (subfirstvol == vflounce && subsecondvol == vtable)
        {
            FlozTablespoons();
        }
        if (subfirstvol == vflounce && subsecondvol == vcup)
        {
            FlozCups();
        }
        if (subfirstvol == vflounce && subsecondvol == vpint)
        {
            FlozPints();
        }
        if (subfirstvol == vflounce && subsecondvol == vquart)
        {
            FlozQuarts();
        }
        if (subfirstvol == vflounce && subsecondvol == vgallon)
        {
            FlozGallons();
        }
        if (subfirstvol == vflounce && subsecondvol == vimpgal)
        {
            FlozImpGallons();
        }
        if (subfirstvol == vflounce && subsecondvol == vmilliter)
        {
            FlozMilliters();
        }
        if (subfirstvol == vflounce && subsecondvol == vliter)
        {
            FlozLiters();
        }
        if (subfirstvol == vflounce && subsecondvol == vkilo)
        {
            FlozKiloliters();
        }
        if (subfirstvol == vcup && subsecondvol == vcenti)
        {
            CupsCuCenti();
        }
        if (subfirstvol == vcup && subsecondvol == vinch)
        {
            CupsInches();
        }
        if (subfirstvol == vcup && subsecondvol == vfoot)
        {
            CupsFeet();
        }
        if (subfirstvol == vcup && subsecondvol == vmeter)
        {
            CupsMeters();
        }
        if (subfirstvol == vcup && subsecondvol == vtea)
        {
            CupsTeaspoons();
        }
        if (subfirstvol == vcup && subsecondvol == vtable)
        {
            CupsTablespoons();
        }
        if (subfirstvol == vcup && subsecondvol == vflounce)
        {
            CupsFLOZ();
        }
        if (subfirstvol == vcup && subsecondvol == vpint)
        {
            CupsPints();
        }
        if (subfirstvol == vcup && subsecondvol == vquart)
        {
            CupsQuarts();
        }
        if (subfirstvol == vcup && subsecondvol == vgallon)
        {
            CupsGallons();
        }
        if (subfirstvol == vcup && subsecondvol == vimpgal)
        {
            CupsImpGallons();
        }
        if (subfirstvol == vcup && subsecondvol == vmilliter)
        {
            CupsMilliters();
        }
        if (subfirstvol == vcup && subsecondvol == vliter)
        {
            CupsLiters();
        }
        if (subfirstvol == vcup && subsecondvol == vkilo)
        {
            CupsKiloliters();
        }
        if (subfirstvol == vpint && subsecondvol == vcenti)
        {
            PintCenti();
        }
        if (subfirstvol == vpint && subsecondvol == vinch)
        {
            PintInches();
        }
        if (subfirstvol == vpint && subsecondvol == vfoot)
        {
            PintFeet();
        }
        if (subfirstvol == vpint && subsecondvol == vmeter)
        {
            PintMeters();
        }
        if (subfirstvol == vpint && subsecondvol == vtea)
        {
            PintTeaspoons();
        }
        if (subfirstvol == vpint && subsecondvol == vtable)
        {
            PintTablespoons();
        }
        if (subfirstvol == vpint && subsecondvol == vflounce)
        {
            PintFLOZ();
        }
        if (subfirstvol == vpint && subsecondvol == vquart)
        {
            PintQuarts();
        }
        if (subfirstvol == vpint && subsecondvol == vgallon)
        {
            PintGallons();
        }
        if (subfirstvol == vpint && subsecondvol == vimpgal)
        {
            PintImpGallons();
        }
        if (subfirstvol == vpint && subsecondvol == vmilliter)
        {
            PintMilliters();
        }
        if (subfirstvol == vpint && subsecondvol == vliter)
        {
            PintLiters();
        }
        if (subfirstvol == vpint && subsecondvol == vkilo)
        {
            PintKilo();
        }
        if (subfirstvol == vquart && subsecondvol == vcenti)
        {
            QuartCenti();
        }
        if (subfirstvol == vquart && subsecondvol == vinch)
        {
            QuartInches();
        }
        if (subfirstvol == vquart && subsecondvol == vfoot)
        {
            QuartFeet();
        }
        if (subfirstvol == vquart && subsecondvol == vmeter)
        {
            QuartMeters();
        }
        if (subfirstvol == vquart && subsecondvol == vtea)
        {
            QuartTeaspoons();
        }
        if (subfirstvol == vquart && subsecondvol == vtable)
        {
            QuartTablespoons();
        }
        if (subfirstvol == vquart && subsecondvol == vcup)
        {
            QuartCups();
        }
        if (subfirstvol == vquart && subsecondvol == vflounce)
        {
            QuartFLOZ();
        }
        if (subfirstvol == vquart && subsecondvol == vpint)
        {
            QuartPints();
        }
        if (subfirstvol == vquart && subsecondvol == vgallon)
        {
            QuartGallons();
        }
        if (subfirstvol == vquart && subsecondvol == vimpgal)
        {
            QuartImpGallons();
        }
        if (subfirstvol == vquart && subsecondvol == vmilliter)
        {
            QuartMilliters();
        }
        if (subfirstvol == vquart && subsecondvol == vliter)
        {
            QuartLiters();
        }
        if (subfirstvol == vquart && subsecondvol == vkilo)
        {
            QuartKiloliters();
        }
        if (subfirstvol == vgallon && subsecondvol == vcenti)
        {
            GallonCenti();
        }
        if (subfirstvol == vgallon && subsecondvol == vinch)
        {
            GallonInches();
        }
        if (subfirstvol == vgallon && subsecondvol == vfoot)
        {
            GallonFeet();
        }
        if (subfirstvol == vgallon && subsecondvol == vmeter)
        {
            GallonMeters();
        }
        if (subfirstvol == vgallon && subsecondvol == vtea)
        {
            GallonTeaspoons();
        }
        if (subfirstvol == vgallon && subsecondvol == vtable)
        {
            GallonTablespoons();
        }
        if (subfirstvol == vgallon && subsecondvol == vcup)
        {
            GallonCups();
        }
        if (subfirstvol == vgallon && subsecondvol == vflounce)
        {
            GallonFLOZ();
        }
        if (subfirstvol == vgallon && subsecondvol == vpint)
        {
            GallonPints();
        }
        if (subfirstvol == vgallon && subsecondvol == vimpgal)
        {
            GallonImpGallons();
        }
        if (subfirstvol == vgallon && subsecondvol == vmilliter)
        {
            GallonMilliters();
        }
        if (subfirstvol == vgallon && subsecondvol == vliter)
        {
            GallonLiters();
        }
        if (subfirstvol == vgallon && subsecondvol == vkilo)
        {
            GallonKiloliters();
        }
        if (subfirstvol == vimpgal && subsecondvol == vcenti)
        {
            ImpGallonCenti();
        }
        if (subfirstvol == vimpgal && subsecondvol == vinch)
        {
            ImpGallonInches();
        }
        if (subfirstvol == vimpgal && subsecondvol == vfoot)
        {
            ImpGallonFeet();
        }
        if (subfirstvol == vimpgal && subsecondvol == vmeter)
        {
            ImpGallonMeters();
        }
        if (subfirstvol == vimpgal && subsecondvol == vtea)
        {
            ImpGallonTeaspoons();
        }
        if (subfirstvol == vimpgal && subsecondvol == vtable)
        {
            ImpGallonTablespoons();
        }
        if (subfirstvol == vimpgal && subsecondvol == vcup)
        {
            ImpGallonCups();
        }
        if (subfirstvol == vimpgal && subsecondvol == vflounce)
        {
            ImpGallonFLOZ();
        }
        if (subfirstvol == vimpgal && subsecondvol == vpint)
        {
            ImpGallonPints();
        }
        if (subfirstvol == vimpgal && subsecondvol == vgallon)
        {
            ImpGallonGallons();
        }
        if (subfirstvol == vimpgal && subsecondvol == vmilliter)
        {
            ImpGallonMilliters();
        }
        if (subfirstvol == vimpgal && subsecondvol == vliter)
        {
            ImpGallonLiters();
        }
        if (subfirstvol == vimpgal && subsecondvol == vkilo)
        {
            ImpGallonKiloliters();
        }
        if (subfirstvol == vmilliter && subsecondvol == vcenti)
        {
            MilliterCenti();
        }
        if (subfirstvol == vmilliter && subsecondvol == vinch)
        {
            MilliterInches();
        }
        if (subfirstvol == vmilliter && subsecondvol == vfoot)
        {
            MilliterFeet();
        }
        if (subfirstvol == vmilliter && subsecondvol == vmeter)
        {
            MilliterMeters();
        }
        if (subfirstvol == vmilliter && subsecondvol == vtea)
        {
            MilliterTeaspoons();
        }
        if (subfirstvol == vmilliter && subsecondvol == vtable)
        {
            MilliterTablespoons();
        }
        if (subfirstvol == vmilliter && subsecondvol == vflounce)
        {
            MilliterFLOZ();
        }
        if (subfirstvol == vmilliter && subsecondvol == vcup)
        {
            MilliterCups();
        }
        if (subfirstvol == vmilliter && subsecondvol == vpint)
        {
            MilliterPints();
        }
        if (subfirstvol == vmilliter && subsecondvol == vquart)
        {
            MilliterQuarts();
        }
        if (subfirstvol == vmilliter && subsecondvol == vgallon)
        {
            MilliterGallons();
        }
        if (subfirstvol == vmilliter && subsecondvol == vimpgal)
        {
            MilliterImpGallons();
        }
        if (subfirstvol == vmilliter && subsecondvol == vliter)
        {
            MilliterLiters();
        }
        if (subfirstvol == vmilliter && subsecondvol == vkilo)
        {
            MilliterKilo();
        }
        if (subfirstvol == vliter && subsecondvol == vcenti)
        {
            LiterCenti();
        }
        if (subfirstvol == vliter && subsecondvol == vinch)
        {
            LiterInches();
        }
        if (subfirstvol == vliter && subsecondvol == vfoot)
        {
            LiterFeet();
        }
        if (subfirstvol == vliter && subsecondvol == vmeter)
        {
            LiterMeters();
        }
        if (subfirstvol == vliter && subsecondvol == vtea)
        {
            LiterTeaspoons();
        }
        if (subfirstvol == vliter && subsecondvol == vtable)
        {
            LiterTablespoons();
        }
        if (subfirstvol == vliter && subsecondvol == vflounce)
        {
            LiterFLOZ();
        }
        if (subfirstvol == vliter && subsecondvol == vcup)
        {
            LiterCups();
        }
        if (subfirstvol == vliter && subsecondvol == vpint)
        {
            LiterPints();
        }
        if (subfirstvol == vliter && subsecondvol == vquart)
        {
            LiterQuarts();
        }
        if (subfirstvol == vliter && subsecondvol == vgallon)
        {
            LiterGallons();
        }
        if (subfirstvol == vliter && subsecondvol == vimpgal)
        {
            LiterImpGallons();
        }
        if (subfirstvol == vliter && subsecondvol == vmilliter)
        {
            LiterMilliters();
        }
        if (subfirstvol == vliter && subsecondvol == vkilo)
        {
            LiterKilo();
        }
        if (subfirstvol == vkilo && subsecondvol == vcenti)
        {
            KilosCenti();
        }
        if (subfirstvol == vkilo && subsecondvol == vinch)
        {
            KilosInches();
        }
        if (subfirstvol == vkilo && subsecondvol == vfoot)
        {
            KilosFeet();
        }
        if (subfirstvol == vkilo && subsecondvol == vmeter)
        {
            KilosMeters();
        }
        if (subfirstvol == vkilo && subsecondvol == vtea)
        {
            KilosTeaspoons();
        }
        if (subfirstvol == vkilo && subsecondvol == vtable)
        {
            KilosTablespoons();
        }
        if (subfirstvol == vkilo && subsecondvol == vflounce)
        {
            KilosFLOZ();
        }
        if (subfirstvol == vkilo && subsecondvol == vcup)
        {
            KilosCups();
        }
        if (subfirstvol == vkilo && subsecondvol == vpint)
        {
            KilosPints();
        }
        if (subfirstvol == vkilo && subsecondvol == vquart)
        {
            KilosQuarts();
        }
        if (subfirstvol == vkilo && subsecondvol == vgallon)
        {
            KilosGallons();
        }
        if (subfirstvol == vkilo && subsecondvol == vimpgal)
        {
            KilosImpGallons();
        }
        if (subfirstvol == vkilo && subsecondvol == vmilliter)
        {
            KilosMilliters();
        }
        if (subfirstvol == vkilo && subsecondvol == vliter)
        {
            KilosLiters();
        }
}

// Convert Cubic Centimeter to Cubic inches
void CubicCentiInches()
{
    float cucmin;
    double totalcucmin;
    
    printf("\n");
    printf("----------------------------------------------------------------------");
    printf("\nHow many Cubic Centimeter would you like converted to Cubic Inches: ");
    scanf("%f", &cucmin);
    printf("Converting %f Cubic Centimeters to Cubic Inches equals: \n", cucmin);
    totalcucmin = cucmin * 0.0610237441;
    printf("--------------------------------------------------------------------\n");
    printf("%f Cubic Centimeters = %f Cubic Inches\n", cucmin, totalcucmin);
    printf("--------------------------------------------------------------------\n");
}
// Convert Cubic Centimeter to Cubic Feet
void CubicCentiFoot()
{
    float cucmft;
    double totalcucmft;
    
    printf("\n");
    printf("--------------------------------------------------------------------");
    printf("\nHow many Cubic Centimeter would you like converted to Cubic Feet: ");
    scanf("%f", &cucmft);
    printf("Converting %f Cubic Centimeters to Cubic Feet equals: \n", cucmft);
    totalcucmft = cucmft * 0.000578703704;
    printf("------------------------------------------------------------------\n");
    printf("%f Cubic Centimeters = %f Cubic Feet\n", cucmft, totalcucmft);
    printf("------------------------------------------------------------------\n");
}
// Convert Cubic Centimeter to Cubic Meters
void CubicCentiMeters()
{
    float cucmmt;
    double totalcucmmt;
    
    printf("\n");
    printf("----------------------------------------------------------------------");
    printf("\nHow many Cubic Centimeter would you like converted to Cubic Meters: ");
    scanf("%f", &cucmmt);
    printf("Converting %f Cubic Centimeters to Cubic Meters equals: \n", cucmmt);
    totalcucmmt = cucmmt * 1.0 * pow(10,-6);
    printf("--------------------------------------------------------------------\n");
    printf("%f Cubic Centimeters = %f Cubic Meters\n", cucmmt, totalcucmmt);
    printf("--------------------------------------------------------------------\n");
}

// Convert Cubic Centimeter to US Teaspoons
void CubicCentiTeaspoons()
{
    float cucmtsp;
    double totalcucmtsp;
    
    printf("\n");
    printf("---------------------------------------------------------------------");
    printf("\nHow many Cubic Centimeter would you like converted to US Teaspons: ");
    scanf("%f", &cucmtsp);
    printf("Converting %f Cubic Centimeters to US Teaspons equals: \n", cucmtsp);
    totalcucmtsp = cucmtsp * 0.202884136;
    printf("-------------------------------------------------------------------\n");
    printf("%f Cubic Centimeters = %f US Teaspons\n", cucmtsp, totalcucmtsp);
    printf("-------------------------------------------------------------------\n");
}

// Convert Cubic Centimeter to US Tablespoons
void CubicCentiTablespoons()
{
    float cucmtbl;
    double totalcucmtbl;
    
    printf("\n");
    printf("------------------------------------------------------------------------");
    printf("\nHow many Cubic Centimeter would you like converted to US Tablespoons: ");
    scanf("%f", &cucmtbl);
    printf("Converting %f Cubic Centimeters to US Tablespoons equals: \n", cucmtbl);
    totalcucmtbl = cucmtbl * 0.0676280454;
    printf("----------------------------------------------------------------------\n");
    printf("%f Cubic Centimeters = %f US Tablespoons\n", cucmtbl, totalcucmtbl);
    printf("----------------------------------------------------------------------\n");
}
// Convert Cubic Centimeter to US Fluid Ounces
void CubicCentiFluidOunces()
{
    float cucmfloz;
    double totalcucmfloz;
    
    printf("\n");
    printf("-------------------------------------------------------------------------");
    printf("\nHow many Cubic Centimeter would you like converted to US Fluid Ounces: ");
    scanf("%f", &cucmfloz);
    printf("Converting %f Cubic Centimeters to US Fluid Ounces equals: \n", cucmfloz);
    totalcucmfloz = cucmfloz * 0.0338140227;
    printf("-----------------------------------------------------------------------\n");
    printf("%f Cubic Centimeters = %f US Fluid Ounces\n", cucmfloz, totalcucmfloz);
    printf("-----------------------------------------------------------------------\n");
}
// Convert Cubic Centimeter to US Cups
void CubicCentiCups()
{
    float cucmcp;
    double totalcucmcp;
    
    printf("\n");
    printf("-----------------------------------------------------------------");
    printf("\nHow many Cubic Centimeter would you like converted to US Cups: ");
    scanf("%f", &cucmcp);
    printf("Converting %f Cubic Centimeters to US Cups equals: \n", cucmcp);
    totalcucmcp = cucmcp * 0.00422675284;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Centimeters = %f US Cups\n", cucmcp, totalcucmcp);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Centimeter to US Pints
void CubicCentiPints()
{
    float cucmcp;
    double totalcucmcp;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Cubic Centimeter would you like converted to US Pints: ");
    scanf("%f", &cucmcp);
    printf("Converting %f Cubic Centimeters to US Pints equals: \n", cucmcp);
    totalcucmcp = cucmcp * 0.00211337642;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Centimeters = %f US Pints\n", cucmcp, totalcucmcp);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Centimeter to US Quarts
void CubicCentiQuarts()
{
    float cucmqt;
    double totalcucmqt;
    
    printf("\n");
    printf("-------------------------------------------------------------------");
    printf("\nHow many Cubic Centimeter would you like converted to US Quarts: ");
    scanf("%f", &cucmqt);
    printf("Converting %f Cubic Centimeters to US Quarts equals: \n", cucmqt);
    totalcucmqt = cucmqt * 0.00105668821;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Centimeters = %f US Quarts\n", cucmqt, totalcucmqt);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Centimeter to US Gallons
void CubicCentiGallons()
{
    float cucmgl;
    double totalcucmgl;
    
    printf("\n");
    printf("--------------------------------------------------------------------");
    printf("\nHow many Cubic Centimeter would you like converted to US Gallons: ");
    scanf("%f", &cucmgl);
    printf("Converting %f Cubic Centimeters to US Gallons equals: \n", cucmgl);
    totalcucmgl = cucmgl * 0.000264172052;
    printf("------------------------------------------------------------------\n");
    printf("%f Cubic Centimeters = %f US Gallons\n", cucmgl, totalcucmgl);
    printf("------------------------------------------------------------------\n");
}
// Convert Cubic Centimeter to Imperial Gallons
void CubicCentiImpGallons()
{
    float cucmigl;
    double totalcucmigl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Cubic Centimeter would you like converted to Imperial Gallons: ");
    scanf("%f", &cucmigl);
    printf("Converting %f Cubic Centimeters to Imperial Gallons equals: \n", cucmigl);
    totalcucmigl = cucmigl * 0.000219969157;
    printf("------------------------------------------------------------------------\n");
    printf("%f Cubic Centimeters = %f Imperial Gallons\n", cucmigl, totalcucmigl);
    printf("------------------------------------------------------------------------\n");
}
// Convert Cubic Centimeter to Milliliters
void CubicCentiMilliters()
{
    float cucmml;
    double totalcucmml;
    
    printf("\n");
    printf("---------------------------------------------------------------------");
    printf("\nHow many Cubic Centimeter would you like converted to Milliliters: ");
    scanf("%f", &cucmml);
    printf("Converting %f Cubic Centimeters to Milliliters equals: \n", cucmml);
    totalcucmml = cucmml * 1;
    printf("-------------------------------------------------------------------\n");
    printf("%f Cubic Centimeters = %f Milliliters\n", cucmml, totalcucmml);
    printf("-------------------------------------------------------------------\n");
}
// Convert Cubic Centimeter to Liters
void CubicCentiLiters()
{
    float cucmlt;
    double totalcucmlt;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Centimeter would you like converted to Liters: ");
    scanf("%f", &cucmlt);
    printf("Converting %f Cubic Centimeters to Liters equals: \n", cucmlt);
    totalcucmlt = cucmlt * 0.001;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Centimeters = %f Liters\n", cucmlt, totalcucmlt);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Centimeter to Kiloliters
void CubicCentiKiloliters()
{
    float cucmkl;
    double totalcucmkl;
    
    printf("\n");
    printf("--------------------------------------------------------------------");
    printf("\nHow many Cubic Centimeter would you like converted to Kiloliters: ");
    scanf("%f", &cucmkl);
    printf("Converting %f CubCentimeteric Centimeters to Kiloliters equals: \n", cucmkl);
    totalcucmkl = cucmkl * 0.001;
    printf("------------------------------------------------------------------\n");
    printf("%f Cubic Centimeters = %f Kiloliters\n", cucmkl, totalcucmkl);
    printf("------------------------------------------------------------------\n");
}
// Convert Cubic Inches to Cubic Centimeter
void CubicInchesCenti()
{
    float cuincm;
    double totalcuincm;
    
    printf("\n");
    printf("-----------------------------------------------------------------------");
    printf("\nHow many Cubic Inches would you like converted to Cubic Centimeters: ");
    scanf("%f", &cuincm);
    printf("Converting %f Cubic Inches to Cubic Centimeter equals: \n", cuincm);
    totalcuincm = cuincm * 16.387064;
    printf("---------------------------------------------------------------------\n");
    printf("%f Cubic Inches = %f Cubic Centimeter\n", cuincm, totalcuincm);
    printf("---------------------------------------------------------------------\n");
}
// Convert Cubic Inches to Cubic Feet
void CubicInchesFeet()
{
    float cuinft;
    double totalcuinft;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Inches would you like converted to Cubic Feet: ");
    scanf("%f", &cuinft);
    printf("Converting %f Cubic Inches to Cubic Feet equals: \n", cuinft);
    totalcuinft = cuinft * 16.387064;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Inches = %f Cubic Feet\n", cuinft, totalcuinft);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Inches to Cubic Meters
void CubicInchesMeters()
{
    float cuinmt;
    double totalcuinmt;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Cubic Inches would you like converted to Cubic Meters: ");
    scanf("%f", &cuinmt);
    printf("Converting %f Cubic Inches to Cubic Meter equals: \n", cuinmt);
    totalcuinmt = cuinmt * 1.6387064 * pow(10,-5);
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Inches = %f Cubic Meter\n", cuinmt, totalcuinmt);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Inches to US Teaspoons
void CubicInchesTeaspoons()
{
    float cuintsp;
    double totalcuintsp;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Cubic Inches would you like converted to US Teaspoons: ");
    scanf("%f", &cuintsp);
    printf("Converting %f Cubic Inches to US Teaspoons equals: \n", cuintsp);
    totalcuintsp = cuintsp * 3.32467532;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Inches = %f US Teaspoons\n", cuintsp, totalcuintsp);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Inches to US Tablespoons
void CubicInchesTablespoons()
{
    float cuintbl;
    double totalcuintbl;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Cubic Inches would you like converted to US Teaspoons: ");
    scanf("%f", &cuintbl);
    printf("Converting %f Cubic Inches to US Teaspoons equals: \n", cuintbl);
    totalcuintbl = cuintbl * 1.10822511;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Inches = %f US Teaspoons\n", cuintbl, totalcuintbl);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Inches to US Fluid Ounces
void CubicInchesfloz()
{
    float cuinfloz;
    double totalcuinfloz;
    
    printf("\n");
    printf("---------------------------------------------------------------------");
    printf("\nHow many Cubic Inches would you like converted to US Fluid Ounces: ");
    scanf("%f", &cuinfloz);
    printf("Converting %f Cubic Inches to US Fluid Ounces equals: \n", cuinfloz);
    totalcuinfloz = cuinfloz * 0.554112554;
    printf("-------------------------------------------------------------------\n");
    printf("%f Cubic Inches = %f US Fluid Ounces\n", cuinfloz, totalcuinfloz);
    printf("-------------------------------------------------------------------\n");
}
// Convert Cubic Inches to US Cups
void CubicInchesCups()
{
    float cuincp;
    double totalcuincp;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Cubic Inches would you like converted to US Cups: ");
    scanf("%f", &cuincp);
    printf("Converting %f Cubic Inches to US Cups equals: \n", cuincp);
    totalcuincp = cuincp * 0.0692640693;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Inches = %f US Cups\n", cuincp, totalcuincp);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Inches to US Pints
void CubicInchesPints()
{
    float cuinpt;
    double totalcuinpt;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Cubic Inches would you like converted to US Pints: ");
    scanf("%f", &cuinpt);
    printf("Converting %f Cubic Inches to US Pints equals: \n", cuinpt);
    totalcuinpt = cuinpt * 0.0346320346;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Inches = %f US Pints\n", cuinpt, totalcuinpt);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Inches to US Quarts
void CubicInchesQuarts()
{
    float cuinqt;
    double totalcuinqt;
    
    printf("\n");
    printf("---------------------------------------------------------------------");
    printf("\nHow many Cubic Inches would you like converted to US Fluid Ounces: ");
    scanf("%f", &cuinqt);
    printf("Converting %f Cubic Inches to US Fluid Ounces equals: \n", cuinqt);
    totalcuinqt = cuinqt * 0.0173160173;
    printf("-------------------------------------------------------------------\n");
    printf("%f Cubic Inches = %f US Fluid Ounces\n", cuinqt, totalcuinqt);
    printf("-------------------------------------------------------------------\n");
}
// Convert Cubic Inches to US Gallons
void CubicInchesGallons()
{
    float cuingl;
    double totalcuingl;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Inches would you like converted to US Gallons: ");
    scanf("%f", &cuingl);
    printf("Converting %f Cubic Inches to US Gallons equals: \n", cuingl);
    totalcuingl = cuingl * 0.00432900433;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Inches = %f US Gallons\n", cuingl, totalcuingl);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Inches to US Imperial Gallons
void CubicInchesImpGallons()
{
    float cuinimgl;
    double totalcuinimgl;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Inches would you like converted to US Gallons: ");
    scanf("%f", &cuinimgl);
    printf("Converting %f Cubic Inches to US Gallons equals: \n", cuinimgl);
    totalcuinimgl = cuinimgl * 0.00360464866;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Inches = %f US Gallons\n", cuinimgl, totalcuinimgl);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Inches to Milliliters
void CubicInchesMilliters()
{
    float cuinml;
    double totalcuinml;
    
    printf("\n");
    printf("-----------------------------------------------------------------");
    printf("\nHow many Cubic Inches would you like converted to Milliliters: ");
    scanf("%f", &cuinml);
    printf("Converting %f Cubic Inches to Milliliters equals: \n", cuinml);
    totalcuinml = cuinml * 16.387064;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Inches = %f Milliliters\n", cuinml, totalcuinml);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Inches to Liters
void CubicInchesLiters()
{
    float cuinlt;
    double totalcuinlt;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many Cubic Inches would you like converted to Liters: ");
    scanf("%f", &cuinlt);
    printf("Converting %f Cubic Inches to Liters equals: \n", cuinlt);
    totalcuinlt = cuinlt * 0.016387064;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Inches = %f Liters\n", cuinlt, totalcuinlt);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Inches to Kiloliters
void CubicInchesKiloliters()
{
    float cuinkl;
    float totalcuinkl;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Inches would you like converted to Kiloliters: ");
    scanf("%f", &cuinkl);
    printf("Converting %f Cubic Inches to Kiloliters equals: \n", cuinkl);
    totalcuinkl = cuinkl * 1.6387064 * pow(10,-5);
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Inches = %f Kiloliters\n", cuinkl, totalcuinkl);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Foot to Centimeters
void CubicFootCentimeters()
{
    float cuftcm;
    float totalcuftcm;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Foot would you like converted to Centimeters: ");
    scanf("%f", &cuftcm);
    printf("Converting %f Cubic Feet to Centimeters equals: \n", cuftcm);
    totalcuftcm = cuftcm * 28316.8466;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f Centimeters\n", cuftcm, totalcuftcm);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Foot to Inches
void CubicFootInches()
{
    float cuftin;
    float totalcuftin;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Foot would you like converted to Inches: ");
    scanf("%f", &cuftin);
    printf("Converting %f Cubic Feet to Inches equals: \n", cuftin);
    totalcuftin = cuftin * 1728;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f Inches\n", cuftin, totalcuftin);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Foot to Cubic Meters
void CubicFootMeters()
{
    float cuftmt;
    float totalcuftmt;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Foot would you like converted to Cubic Meters: ");
    scanf("%f", &cuftmt);
    printf("Converting %f Cubic Feet to Cubic Meters equals: \n", cuftmt);
    totalcuftmt = cuftmt * 0.0283168466;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f Cubic Meters\n", cuftmt, totalcuftmt);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Foot to US Teaspoons
void CubicFootTeaspoons()
{
    float cufttps;
    float totalcufttps;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Foot would you like converted to US Teaspoons: ");
    scanf("%f", &cufttps);
    printf("Converting %f Cubic Feet to US Teaspoons equals: \n", cufttps);
    totalcufttps = cufttps * 5745.03896;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f US Teaspoons\n", cufttps, totalcufttps);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Foot to US Tablespoons
void CubicFootTablespoons()
{
    float cufttbl;
    float totalcufttbl;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Foot would you like converted to US Tablespoons: ");
    scanf("%f", &cufttbl);
    printf("Converting %f Cubic Feet to US Tablespoons equals: \n", cufttbl);
    totalcufttbl = cufttbl * 1915.01299;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f US Tablespoons\n", cufttbl, totalcufttbl);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Foot to US Fluid Ounces
void CubicFootFloz()
{
    float cuftFloz;
    float totalcuftFloz;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Foot would you like converted to US Fluid Ounces: ");
    scanf("%f", &cuftFloz);
    printf("Converting %f Cubic Feet to US Fluid Ounces equals: \n", cuftFloz);
    totalcuftFloz = cuftFloz * 957.506494;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f US Fluid Ounces\n", cuftFloz, totalcuftFloz);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Foot to US Cups
void CubicFootCups()
{
    float cuftcp;
    float totalcuftcp;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Foot would you like converted to US Cups: ");
    scanf("%f", &cuftcp);
    printf("Converting %f Cubic Feet to US Cups equals: \n", cuftcp);
    totalcuftcp = cuftcp * 119.688312;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f US Cups\n", cuftcp, totalcuftcp);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Foot to US Pints
void CubicFootPints()
{
    float cuftpt;
    float totalcuftpt;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Foot would you like converted to US Pints: ");
    scanf("%f", &cuftpt);
    printf("Converting %f Cubic Feet to US Pints equals: \n", cuftpt);
    totalcuftpt = cuftpt * 59.8441558;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f US Pints\n", cuftpt, totalcuftpt);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Foot to US Quarts
void CubicFootQuarts()
{
    float cuftqt;
    float totalcuftqt;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Foot would you like converted to US Pints: ");
    scanf("%f", &cuftqt);
    printf("Converting %f Cubic Feet to US Pints equals: \n", cuftqt);
    totalcuftqt = cuftqt * 29.9220779;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f US Pints\n", cuftqt, totalcuftqt);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Foot to US Gallons
void CubicFootGallons()
{
    float cuftgl;
    float totalcuftgl;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Foot would you like converted to US Gallons: ");
    scanf("%f", &cuftgl);
    printf("Converting %f Cubic Feet to US Gallons equals: \n", cuftgl);
    totalcuftgl = cuftgl * 7.48051948;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f US Gallons\n", cuftgl, totalcuftgl);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Foot to US Imperial Gallons
void CubicFootImpGallons()
{
    float cuftimgl;
    float totalcuftimgl;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Foot would you like converted to US Imperial Gallons: ");
    scanf("%f", &cuftimgl);
    printf("Converting %f Cubic Feet to US Gallons equals: \n", cuftimgl);
    totalcuftimgl = cuftimgl * 6.22883288;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f US Gallons\n", cuftimgl, totalcuftimgl);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Foot to Milliliters
void CubicFootMilliters()
{
    float cuftml;
    float totalcuftml;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Foot would you like converted to Milliliters: ");
    scanf("%f", &cuftml);
    printf("Converting %f Cubic Feet to Milliliters equals: \n", cuftml);
    totalcuftml = cuftml * 28316.8466;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f Milliliters\n", cuftml, totalcuftml);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Foot to Liters
void CubicFootLiters()
{
    float cuftlt;
    float totalcuftlt;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Foot would you like converted to Liters: ");
    scanf("%f", &cuftlt);
    printf("Converting %f Cubic Feet to Liters equals: \n", cuftlt);
    totalcuftlt = cuftlt * 28.3168466;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f Liters\n", cuftlt, totalcuftlt);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Foot to Kiloliters
void CubicFootKiloliters()
{
    float cuftkl;
    float totalcuftkl;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Foot would you like converted to Kiloliters: ");
    scanf("%f", &cuftkl);
    printf("Converting %f Cubic Feet to Kiloliters equals: \n", cuftkl);
    totalcuftkl = cuftkl * 0.0283168466;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f Kiloliters\n", cuftkl, totalcuftkl);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Meters to Centimeters
void CubicMetersCenti()
{
    float cumtcm;
    float totalcumtcm;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Meters would you like converted to Centimeters: ");
    scanf("%f", &cumtcm);
    printf("Converting %f Cubic Meters to Centimeters equals: \n", cumtcm);
    totalcumtcm = cumtcm * 1000000;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f Centimeters\n", cumtcm, totalcumtcm);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Meters to Inches
void CubicMetersInches()
{
    float cumtin;
    float totalcumtin;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Meters would you like converted to Inches: ");
    scanf("%f", &cumtin);
    printf("Converting %f Cubic Meters to Inches equals: \n", cumtin);
    totalcumtin = cumtin * 61023.7441;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f Inches\n", cumtin, totalcumtin);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Meters to Feet
void CubicMetersFeet()
{
    float cumtft;
    float totalcumtft;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Meters would you like converted to Feet: ");
    scanf("%f", &cumtft);
    printf("Converting %f Cubic Meters to Feet equals: \n", cumtft);
    totalcumtft = cumtft * 35.3146667;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f Feet\n", cumtft, totalcumtft);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Meters to US Teaspoons
void CubicMetersTeaspoons()
{
    float cumttps;
    float totalcumttps;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Meters would you like converted to US Teaspoons: ");
    scanf("%f", &cumttps);
    printf("Converting %f Cubic Meters to US Teaspoons equals: \n", cumttps);
    totalcumttps = cumttps * 202884.136;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f US Teaspoons\n", cumttps, totalcumttps);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Meters to US Tablespoons
void CubicMetersTablespoons()
{
    float cumttbl;
    float totalcumttbl;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Meters would you like converted to US Tablespoons: ");
    scanf("%f", &cumttbl);
    printf("Converting %f Cubic Meters to US Tablespoons equals: \n", cumttbl);
    totalcumttbl = cumttbl * 67628.0454;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f US Tablespoons\n", cumttbl, totalcumttbl);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Meters to US Fluid Ounces
void CubicMetersFLOZ()
{
    float cumtfloz;
    float totalcumtfloz;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Meters would you like converted to Fluid Ounces: ");
    scanf("%f", &cumtfloz);
    printf("Converting %f Cubic Meters to Fluid Ounces equals: \n", cumtfloz);
    totalcumtfloz = cumtfloz * 33814.0227;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f Fluid Ounces\n", cumtfloz, totalcumtfloz);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Meters to US Cups
void CubicMetersCups()
{
    float cumtcps;
    float totalcumtcps;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Meters would you like converted to US Cups: ");
    scanf("%f", &cumtcps);
    printf("Converting %f Cubic Meters to US Cups equals: \n", cumtcps);
    totalcumtcps = cumtcps * 4226.75284;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f US Cups\n", cumtcps, totalcumtcps);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Meters to US Pints
void CubicMetersPints()
{
    float cumtpt;
    float totalcumtpt;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Meters would you like converted to US Pints: ");
    scanf("%f", &cumtpt);
    printf("Converting %f Cubic Meters to US Pints equals: \n", cumtpt);
    totalcumtpt = cumtpt * 2113.37642;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f US Pints\n", cumtpt, totalcumtpt);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Meters to US Quarts
void CubicMetersQuarts()
{
    float cumtqt;
    float totalcumtqt;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Meters would you like converted to US Quarts: ");
    scanf("%f", &cumtqt);
    printf("Converting %f Cubic Meters to US Quarts equals: \n", cumtqt);
    totalcumtqt = cumtqt * 1056.68821;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f US Quarts\n", cumtqt, totalcumtqt);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Meters to US Gallons
void CubicMetersGallons()
{
    float cumtgl;
    float totalcumtgl;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Meters would you like converted to US Gallons: ");
    scanf("%f", &cumtgl);
    printf("Converting %f Cubic Meters to US Gallons equals: \n", cumtgl);
    totalcumtgl = cumtgl * 264.172052;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f US Gallons\n", cumtgl, totalcumtgl);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Meters to US Imperial Gallons
void CubicMetersImpGallons()
{
    float cumtimgl;
    float totalcumtimgl;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Meters would you like converted to US Imperial Gallons: ");
    scanf("%f", &cumtimgl);
    printf("Converting %f Cubic Meters to US Imperial Gallons equals: \n", cumtimgl);
    totalcumtimgl = cumtimgl * 219.969157;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f US Imperial Gallons\n", cumtimgl, totalcumtimgl);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Meters to Milliliters
void CubicMetersMilLiters()
{
    float cumtml;
    float totalcumtml;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Meters would you like converted to Milliliters: ");
    scanf("%f", &cumtml);
    printf("Converting %f Cubic Meters to Milliliters equals: \n", cumtml);
    totalcumtml = cumtml * 1000000;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f Milliliters\n", cumtml, totalcumtml);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Meters to Liters
void CubicMetersLiters()
{
    float cumtlt;
    float totalcumtlt;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Meters would you like converted to Liters: ");
    scanf("%f", &cumtlt);
    printf("Converting %f Cubic Meters to Liters equals: \n", cumtlt);
    totalcumtlt = cumtlt * 1000;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f Liters\n", cumtlt, totalcumtlt);
    printf("----------------------------------------------------------------\n");
}
// Convert Cubic Meters to Kiloliters
void CubicMetersKiloliters()
{
    float cumtkt;
    float totalcumtkt;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Cubic Meters would you like converted to KiloLiters: ");
    scanf("%f", &cumtkt);
    printf("Converting %f Cubic Meters to KiloLiters equals: \n", cumtkt);
    totalcumtkt = cumtkt * 1;
    printf("----------------------------------------------------------------\n");
    printf("%f Cubic Feet = %f KiloLiters\n", cumtkt, totalcumtkt);
    printf("----------------------------------------------------------------");
    printf("\n");
}
// Convert Teaspoons to Cubic Centimeters 
void TeaspoonsCuCentimeters()
{
    float tpscm;
    float totaltpscm;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Teaspoons would you like converted to Cubic Centimeters: ");
    scanf("%f", &tpscm);
    printf("Converting %f US Teaspoons to Cubic Centimeters equals: \n", tpscm);
    totaltpscm = tpscm * 4.92892159;
    printf("----------------------------------------------------------------\n");
    printf("%f US Teaspoons = %f Cubic Centimeters\n", tpscm, totaltpscm);
    printf("----------------------------------------------------------------\n");
}
// Convert Teaspoons to Cubic Inches 
void TeaspoonsInches()
{
    float tpsin;
    float totaltpsin;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Teaspoons would you like converted to Cubic Inches: ");
    scanf("%f", &tpsin);
    printf("Converting %f US Teaspoons to Cubic Inches equals: \n", tpsin);
    totaltpsin = tpsin * 0.30078125;
    printf("----------------------------------------------------------------\n");
    printf("%f US Teaspoons = %f Cubic Inches\n", tpsin, totaltpsin);
    printf("----------------------------------------------------------------\n");
}
// Convert Teaspoons to Cubic Feet
void TeaspoonsFeet()
{
    float tpsft;
    float totaltpsft;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Teaspoons would you like converted to Cubic Feet: ");
    scanf("%f", &tpsft);
    printf("Converting %f US Teaspoons to Cubic Feet equals: \n", tpsft);
    totaltpsft = tpsft * 0.000174063223;
    printf("----------------------------------------------------------------\n");
    printf("%f US Teaspoons = %f Cubic Feet\n", tpsft, totaltpsft);
    printf("----------------------------------------------------------------\n");
}
// Convert Teaspoons to Cubic Meters
void TeaspoonsMeters()
{
    float tpsmt;
    float totaltpsmt;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many Teaspoons would you like converted to Cubic Meters: ");
    scanf("%f", &tpsmt);
    printf("Converting %f Teaspoons to Cubic Meters equals: \n", tpsmt);
    totaltpsmt = tpsmt * 4.92892159 * pow(10,-6);
    printf("----------------------------------------------------------------\n");
    printf("%f US Teaspoons = %f Cubic Meters\n", tpsmt, totaltpsmt);
    printf("----------------------------------------------------------------\n");
}
// Convert Teaspoons to US Tablespoons
void TeaspoonsTablespoons()
{
    float tpstbl;
    float totaltpstbl;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Teaspoons would you like converted to US Tablespoons: ");
    scanf("%f", &tpstbl);
    printf("Converting %f US Teaspoons to US Tablespoons equals: \n", tpstbl);
    totaltpstbl = tpstbl * 0.333333333;
    printf("----------------------------------------------------------------\n");
    printf("%f US Teaspoons = %f US Tablespoons\n", tpstbl, totaltpstbl);
    printf("----------------------------------------------------------------\n");
}
// Convert Teaspoons to US Fluid Ounces
void TeaspoonsFLOZ()
{
    float tpsfloz;
    float totaltpsfloz;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Teaspoons would you like converted to US Fluid Ounces: ");
    scanf("%f", &tpsfloz);
    printf("Converting %f US Teaspoons to US Fluid Ounces equals: \n", tpsfloz);
    totaltpsfloz = tpsfloz * 0.166666667;
    printf("----------------------------------------------------------------\n");
    printf("%f US Teaspoons = %f US Fluid Ounces\n", tpsfloz, totaltpsfloz);
    printf("----------------------------------------------------------------\n");
}
// Convert Teaspoons to US Cups
void TeaspoonsCups()
{
    float tpscps;
    float totaltpscps;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Teaspoons would you like converted to US Cups: ");
    scanf("%f", &tpscps);
    printf("Converting %f US Teaspoons to US Cups equals: \n", tpscps);
    totaltpscps = tpscps * 0.0208333333;
    printf("----------------------------------------------------------------\n");
    printf("%f US Teaspoons = %f US Cups\n", tpscps, totaltpscps);
    printf("----------------------------------------------------------------\n");
}
// Convert Teaspoons to US Pints
void TeaspoonsPints()
{
    float tpspts;
    float totaltpspts;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Teaspoons would you like converted to US Pints: ");
    scanf("%f", &tpspts);
    printf("Converting %f US Teaspoons to US Pints equals: \n", tpspts);
    totaltpspts = tpspts * 0.0104166667;
    printf("----------------------------------------------------------------\n");
    printf("%f US Teaspoons = %f US Pints\n", tpspts, totaltpspts);
    printf("----------------------------------------------------------------\n");
}
// Convert Teaspoons to US Quarts
void TeaspoonsQuarts()
{
    float tpsqt;
    float totaltpsqt;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Teaspoons would you like converted to US Quarts: ");
    scanf("%f", &tpsqt);
    printf("Converting %f US Teaspoons to US Quarts equals: \n", tpsqt);
    totaltpsqt = tpsqt * 0.00520833333;
    printf("----------------------------------------------------------------\n");
    printf("%f US Teaspoons = %f US Quarts\n", tpsqt, totaltpsqt);
    printf("----------------------------------------------------------------\n");
}
// Convert Teaspoons to US Gallons
void TeaspoonsGallons()
{
    float tpsgl;
    float totaltpsgl;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Teaspoons would you like converted to US Gallons: ");
    scanf("%f", &tpsgl);
    printf("Converting %f US Teaspoons to US Gallons equals: \n", tpsgl);
    totaltpsgl = tpsgl * 0.00130208333;
    printf("----------------------------------------------------------------\n");
    printf("%f US Teaspoons = %f US Gallons\n", tpsgl, totaltpsgl);
    printf("----------------------------------------------------------------\n");
}
// Convert Teaspoons to Imperial Gallons
void TeaspoonsImpGallons()
{
    float tpsimgl;
    float totaltpsimgl;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Teaspoons would you like converted to US Gallons: ");
    scanf("%f", &tpsimgl);
    printf("Converting %f US Teaspoons to US Gallons equals: \n", tpsimgl);
    totaltpsimgl = tpsimgl * 0.00108421073;
    printf("----------------------------------------------------------------\n");
    printf("%f US Teaspoons = %f US Gallons\n", tpsimgl, totaltpsimgl);
    printf("----------------------------------------------------------------\n");
}
// Convert Teaspoons to Milliliters
void TeaspoonsMilliters()
{
    float tpsml;
    float totaltpsml;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Teaspoons would you like converted to US Gallons: ");
    scanf("%f", &tpsml);
    printf("Converting %f US Teaspoons to US Gallons equals: \n", tpsml);
    totaltpsml = tpsml * 4.92892159;
    printf("----------------------------------------------------------------\n");
    printf("%f US Teaspoons = %f US Gallons\n", tpsml, totaltpsml);
    printf("----------------------------------------------------------------\n");
}
// Convert Teaspoons to Liters
void TeaspoonsLiters()
{
    float tpslt;
    float totaltpslt;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Teaspoons would you like converted to US Gallons: ");
    scanf("%f", &tpslt);
    printf("Converting %f US Teaspoons to US Gallons equals: \n", tpslt);
    totaltpslt = tpslt * 0.00492892159;
    printf("----------------------------------------------------------------\n");
    printf("%f US Teaspoons = %f US Gallons\n", tpslt, totaltpslt);
    printf("----------------------------------------------------------------\n");
}
// Convert Teaspoons to Kiloliters
void TeaspoonsKiloliters()
{
    float tpskl;
    float totaltpskl;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Teaspoons would you like converted to US Gallons: ");
    scanf("%f", &tpskl);
    printf("Converting %f US Teaspoons to US Gallons equals: \n", tpskl);
    totaltpskl = tpskl * 4.92892159 * pow(10,-6);
    printf("----------------------------------------------------------------\n");
    printf("%f US Teaspoons = %f US Gallons\n", tpskl, totaltpskl);
    printf("----------------------------------------------------------------\n");
}
// Convert Tablespoons to Cubic Centimeters
void TablespoonsCuCentimeters()
{
    float tblcm;
    float totaltblcm;
    
    printf("\n");
    printf("----------------------------------------------------------------------");
    printf("\nHow many US Tablespoons would you like converted to Cubic Centimeters: ");
    scanf("%f", &tblcm);
    printf("Converting %f US Tablespoons to Cubic Centimeters equals: \n", tblcm);
    totaltblcm = tblcm * 14.7867648;
    printf("----------------------------------------------------------------------\n");
    printf("%f US Tablespoons = %f Cubic Centimeters\n", tblcm, totaltblcm);
    printf("----------------------------------------------------------------------\n");
}
// Convert Tablespoons to Cubic Inches
void TablespoonsInches()
{
    float tblin;
    float totaltblin;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Tablespoons would you like converted to Cubic Inches: ");
    scanf("%f", &tblin);
    printf("Converting %f US Tablespoons to Cubic Inches equals: \n", tblin);
    totaltblin = tblin * 0.90234375;
    printf("----------------------------------------------------------------\n");
    printf("%f US Tablespoons = %f Cubic Inches\n", tblin, totaltblin);
    printf("----------------------------------------------------------------\n");
}
// Convert Tablespoons to Cubic Feet
void TablespoonsFeet()
{
    float tblft;
    float totaltblft;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Tablespoons would you like converted to Cubic Feet: ");
    scanf("%f", &tblft);
    printf("Converting %f US Tablespoons to Cubic Feet equals: \n", tblft);
    totaltblft = tblft * 0.00052218967;
    printf("----------------------------------------------------------------\n");
    printf("%f US Tablespoons = %f Cubic Feet\n", tblft, totaltblft);
    printf("----------------------------------------------------------------\n");
}
// Convert Tablespoons to Cubic Meters
void TablespoonsMeters()
{
    float tblmt;
    float totaltblmt;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Tablespoons would you like converted to Cubic Meters: ");
    scanf("%f", &tblmt);
    printf("Converting %f US Tablespoons to Cubic Meters equals: \n", tblmt);
    totaltblmt = tblmt * 1.47867648 * pow(10,-5);
    printf("----------------------------------------------------------------\n");
    printf("%f US Tablespoons = %f Cubic Meters\n", tblmt, totaltblmt);
    printf("----------------------------------------------------------------\n");
}
// Convert Tablespoons to US Teaspoons
void TablespoonsTeaspoons()
{
    float tbltps;
    float totaltbltps;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Tablespoons would you like converted to US Teaspoons: ");
    scanf("%f", &tbltps);
    printf("Converting %f US Tablespoons to US Teaspoons equals: \n", tbltps);
    totaltbltps = tbltps * 3;
    printf("----------------------------------------------------------------\n");
    printf("%f US Tablespoons = %f US Teaspoons\n", tbltps, totaltbltps);
    printf("----------------------------------------------------------------\n");
}
// Convert Tablespoons to US Fluid Ounces
void TablespoonsFLOZ()
{
    float tblfloz;
    float totaltblfloz;
    
    printf("\n");
    printf("---------------------------------------------------------------------");
    printf("\nHow many US Tablespoons would you like converted to US Fluid Ounces: ");
    scanf("%f", &tblfloz);
    printf("Converting %f US Tablespoons to US Fluid Ounces equals: \n", tblfloz);
    totaltblfloz = tblfloz * 0.5;
    printf("---------------------------------------------------------------------\n");
    printf("%f US Tablespoons = %f US Fluid Ounces\n", tblfloz, totaltblfloz);
    printf("---------------------------------------------------------------------\n");
}
// Convert Tablespoons to US Cups
void TablespoonsCups()
{
    float tblcps;
    float totaltblcps;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Tablespoons would you like converted to US Cups: ");
    scanf("%f", &tblcps);
    printf("Converting %f US Tablespoons to US Cups equals: \n", tblcps);
    totaltblcps = tblcps * 0.0625;
    printf("----------------------------------------------------------------\n");
    printf("%f US Tablespoons = %f US Cups\n", tblcps, totaltblcps);
    printf("----------------------------------------------------------------\n");
}
// Convert Tablespoons to US Pints
void TablespoonsPints()
{
    float tblpts;
    float totaltblpts;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Tablespoons would you like converted to US Pints: ");
    scanf("%f", &tblpts);
    printf("Converting %f US Tablespoons to US Pints equals: \n", tblpts);
    totaltblpts = tblpts * 0.03125;
    printf("----------------------------------------------------------------\n");
    printf("%f US Tablespoons = %f US Pints\n", tblpts, totaltblpts);
    printf("----------------------------------------------------------------\n");
}
// Convert Tablespoons to US Quarts
void TablespoonsQuarts()
{
    float tblqt;
    float totaltblqt;
    
    printf("\n");
    printf("----------------------------------------------------------------");
    printf("\nHow many US Tablespoons would you like converted to US Quarts: ");
    scanf("%f", &tblqt);
    printf("Converting %f US Tablespoons to US Quarts equals: \n", tblqt);
    totaltblqt = tblqt * 0.015625;
    printf("----------------------------------------------------------------\n");
    printf("%f US Tablespoons = %f US Quarts\n", tblqt, totaltblqt);
    printf("----------------------------------------------------------------\n");
}
// Convert Tablespoons to US Gallons
void TablespoonsGallons()
{
    float tblgal;
    float totaltblgal;
    
    printf("\n");
    printf("------------------------------------------------------------------");
    printf("\nHow many US Tablespoons would you like converted to US Gallons: ");
    scanf("%f", &tblgal);
    printf("Converting %f US Tablespoons to US Gallons equals: \n", tblgal);
    totaltblgal = tblgal * 0.00390625;
    printf("------------------------------------------------------------------\n");
    printf("%f US Tablespoons = %f US Gallons\n", tblgal, totaltblgal);
    printf("------------------------------------------------------------------\n");
}
// Convert Tablespoons to Imperial Gallons
void TablespoonsImpGallons()
{
    float tblimpgal;
    float totaltblimpgal;
    
    printf("\n");
    printf("------------------------------------------------------------------------");
    printf("\nHow many US Tablespoons would you like converted to Imperial Gallons: ");
    scanf("%f", &tblimpgal);
    printf("Converting %f US Tablespoons to Imperial Gallons equals: \n", tblimpgal);
    totaltblimpgal = tblimpgal * 0.00325263219;
    printf("-----------------------------------------------------------------------\n");
    printf("%f US Tablespoons = %f Imperial Gallons\n", tblimpgal, totaltblimpgal);
    printf("-----------------------------------------------------------------------\n");
}
// Convert Tablespoons to Milliliters
void TablespoonsMilliters()
{
    float tblml;
    float totaltblml;
    
    printf("\n");
    printf("------------------------------------------------------------------------");
    printf("\nHow many US Tablespoons would you like converted to Milliliters: ");
    scanf("%f", &tblml);
    printf("Converting %f US Tablespoons to Milliliters equals: \n", tblml);
    totaltblml = tblml * 14.7867648;
    printf("-----------------------------------------------------------------------\n");
    printf("%f US Tablespoons = %f Milliliters\n", tblml, totaltblml);
    printf("-----------------------------------------------------------------------\n");
}
// Convert Tablespoons to Liters
void TablespoonsLiters()
{
    float tbllt;
    float totaltbllt;
    
    printf("\n");
    printf("------------------------------------------------------------------------");
    printf("\nHow many US Tablespoons would you like converted to Milliliters: ");
    scanf("%f", &tbllt);
    printf("Converting %f US Tablespoons to Milliliters equals: \n", tbllt);
    totaltbllt = tbllt * 0.0147867648;
    printf("-----------------------------------------------------------------------\n");
    printf("%f US Tablespoons = %f Milliliters\n", tbllt, totaltbllt);
    printf("-----------------------------------------------------------------------\n");
}
// Convert Tablespoons to Kiloliters
void TablespoonsKiloliters()
{
    float tblkl;
    float totaltblkl;
    
    printf("\n");
    printf("------------------------------------------------------------------------");
    printf("\nHow many US Tablespoons would you like converted to Milliliters: ");
    scanf("%f", &tblkl);
    printf("Converting %f US Tablespoons to Milliliters equals: \n", tblkl);
    totaltblkl = tblkl * 1.47867648 * pow(10,-5);
    printf("-----------------------------------------------------------------------\n");
    printf("%f US Tablespoons = %f Milliliters\n", tblkl, totaltblkl);
    printf("-----------------------------------------------------------------------\n");
}
// Convert US Fluid Ounces to Cubic Centimeters
void FlozCuCenti()
{
    float flozcm;
    float totalflozcm;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Fluid Ounces would you like converted to Cubic Centimeters: ");
    scanf("%f", &flozcm);
    printf("Converting %f US Fluid Ounces to Cubic Centimeters equals: \n", flozcm);
    totalflozcm = flozcm * 29.5735296;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Fluid Ounces = %f Cubic Centimeters\n", flozcm, totalflozcm);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Fluid Ounces to Cubic Inches
void FlozInches()
{
    float flozin;
    float totalflozin;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Fluid Ounces would you like converted to Cubic Inches: ");
    scanf("%f", &flozin);
    printf("Converting %f US Fluid Ounces to Cubic Inches equals: \n", flozin);
    totalflozin = flozin * 1.8046875;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Fluid Ounces = %f Cubic Inches\n", flozin, totalflozin);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Fluid Ounces to Cubic Feet
void FlozFeet()
{
    float flozft;
    float totalflozft;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Fluid Ounces would you like converted to Cubic Inches: ");
    scanf("%f", &flozft);
    printf("Converting %f US Fluid Ounces to Cubic Inches equals: \n", flozft);
    totalflozft = flozft * 0.00104437934;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Fluid Ounces = %f Cubic Inches\n", flozft, totalflozft);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Fluid Ounces to Cubic Meters
void FlozMeters()
{
    float flozmt;
    float totalflozmt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Fluid Ounces would you like converted to Cubic Meters: ");
    scanf("%f", &flozmt);
    printf("Converting %f US Fluid Ounces to Cubic Meters equals: \n", flozmt);
    totalflozmt = flozmt * 2.95735296 * pow(10,-5);
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Fluid Ounces = %f Cubic Meters\n", flozmt, totalflozmt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Fluid Ounces to US Teaspoons
void FlozTeaspoons()
{
    float floztps;
    float totalfloztps;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Fluid Ounces would you like converted to US Teaspoons: ");
    scanf("%f", &floztps);
    printf("Converting %f US Fluid Ounces to US Teaspoons equals: \n", floztps);
    totalfloztps = floztps * 6;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Fluid Ounces = %f US Teaspoons\n", floztps, totalfloztps);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Fluid Ounces to US Tablespoons
void FlozTablespoons()
{
    float floztbl;
    float totalfloztbl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Fluid Ounces would you like converted to US Tablespoons: ");
    scanf("%f", &floztbl);
    printf("Converting %f US Fluid Ounces to US Tablespoons equals: \n", floztbl);
    totalfloztbl = floztbl * 2;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Fluid Ounces = %f US Tablespoons\n", floztbl, totalfloztbl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Fluid Ounces to US Cups
void FlozCups()
{
    float flozcps;
    float totalflozcps;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Fluid Ounces would you like converted to US Cups: ");
    scanf("%f", &flozcps);
    printf("Converting %f US Fluid Ounces to US Cups equals: \n", flozcps);
    totalflozcps = flozcps * 0.125;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Fluid Ounces = %f US Cups\n", flozcps, totalflozcps);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Fluid Ounces to US Pints
void FlozPints()
{
    float flozpts;
    float totalflozpts;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Fluid Ounces would you like converted to US Pints: ");
    scanf("%f", &flozpts);
    printf("Converting %f US Fluid Ounces to US Pints equals: \n", flozpts);
    totalflozpts = flozpts * 0.0625;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Fluid Ounces = %f US Pints\n", flozpts, totalflozpts);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Fluid Ounces to US Quarts
void FlozQuarts()
{
    float flozqt;
    float totalflozqt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Fluid Ounces would you like converted to US Quarts: ");
    scanf("%f", &flozqt);
    printf("Converting %f US Fluid Ounces to US Quarts equals: \n", flozqt);
    totalflozqt = flozqt * 0.03125;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Fluid Ounces = %f US Quarts\n", flozqt, totalflozqt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Fluid Ounces to US Gallons
void FlozGallons()
{
    float flozgl;
    float totalflozgl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Fluid Ounces would you like converted to US Gallons: ");
    scanf("%f", &flozgl);
    printf("Converting %f US Fluid Ounces to US Gallons equals: \n", flozgl);
    totalflozgl = flozgl * 0.0078125;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Fluid Ounces = %f US Gallons\n", flozgl, totalflozgl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Fluid Ounces to Imperial Gallons
void FlozImpGallons()
{
    float flozimgl;
    float totalflozimgl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Fluid Ounces would you like converted to US Gallons: ");
    scanf("%f", &flozimgl);
    printf("Converting %f US Fluid Ounces to US Gallons equals: \n", flozimgl);
    totalflozimgl = flozimgl * 0.00650526438;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Fluid Ounces = %f US Gallons\n", flozimgl, totalflozimgl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Fluid Ounces to Milliliters
void FlozMilliters()
{
    float flozml;
    float totalflozml;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Fluid Ounces would you like converted to US Gallons: ");
    scanf("%f", &flozml);
    printf("Converting %f US Fluid Ounces to US Gallons equals: \n", flozml);
    totalflozml = flozml * 29.5735296;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Fluid Ounces = %f US Gallons\n", flozml, totalflozml);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Fluid Ounces to Liters
void FlozLiters()
{
    float flozlt;
    float totalflozlt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Fluid Ounces would you like converted to Liters: ");
    scanf("%f", &flozlt);
    printf("Converting %f US Fluid Ounces to Liters equals: \n", flozlt);
    totalflozlt = flozlt * 0.0295735296;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Fluid Ounces = %f Liters\n", flozlt, totalflozlt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Fluid Ounces to KiloLiters
void FlozKiloliters()
{
    float flozkl;
    float totalflozkl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Fluid Ounces would you like converted to KiloLiters: ");
    scanf("%f", &flozkl);
    printf("Converting %f US Fluid Ounces to KiloLiters equals: \n", flozkl);
    totalflozkl = flozkl * 2.95735296 * pow(10,-5);
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Fluid Ounces = %f KiloLiters\n", flozkl, totalflozkl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Cups to Cubic Centimeters
void CupsCuCenti()
{
    float cpscenti;
    float totalcpscenti;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Cups would you like converted to Cubic Centimeters: ");
    scanf("%f", &cpscenti);
    printf("Converting %f US Cups to Cubic Centimeters equals: \n", cpscenti);
    totalcpscenti = cpscenti * 236.588236;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Cups = %f Cubic Centimeters\n", cpscenti, totalcpscenti);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Cups to Cubic Inches
void CupsInches()
{
    float cpsin;
    float totalcpsin;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Cups would you like converted to Cubic Inches: ");
    scanf("%f", &cpsin);
    printf("Converting %f US Cups to Cubic Inches equals: \n", cpsin);
    totalcpsin = cpsin * 14.4375;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Cups = %f Cubic Inches\n", cpsin, totalcpsin);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Cups to Cubic Feet
void CupsFeet()
{
    float cpsft;
    float totalcpsft;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Cups would you like converted to Cubic Feet: ");
    scanf("%f", &cpsft);
    printf("Converting %f US Cups to Cubic Feet equals: \n", cpsft);
    totalcpsft = cpsft * 0.00835503472;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Cups = %f Cubic Feet\n", cpsft, totalcpsft);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Cups to Cubic Meters
void CupsMeters()
{
    float cpsmt;
    float totalcpsmt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Cups would you like converted to Cubic Meters: ");
    scanf("%f", &cpsmt);
    printf("Converting %f US Cups to Cubic Meters equals: \n", cpsmt);
    totalcpsmt = cpsmt * 0.000236588237;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Cups = %f Cubic Meters\n", cpsmt, totalcpsmt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Cups to US Teaspoons
void CupsTeaspoons()
{
    float cpstps;
    float totalcpstps;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Cups would you like converted to US Teaspoons: ");
    scanf("%f", &cpstps);
    printf("Converting %f US Cups to US Teaspoons equals: \n", cpstps);
    totalcpstps = cpstps * 48;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Cups = %f US Teaspoons\n", cpstps, totalcpstps);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Cups to US Tablespoons
void CupsTablespoons()
{
    float cpstbl;
    float totalcpstbl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Cups would you like converted to US Tablespoons: ");
    scanf("%f", &cpstbl);
    printf("Converting %f US Cups to US Tablespoons equals: \n", cpstbl);
    totalcpstbl = cpstbl * 16;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Cups = %f US Tablespoons\n", cpstbl, totalcpstbl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Cups to US Fluid Ounces
void CupsFLOZ()
{
    float cpsfloz;
    float totalcpsfloz;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Cups would you like converted to US Fluid Ounces: ");
    scanf("%f", &cpsfloz);
    printf("Converting %f US Cups to US Fluid Ounces equals: \n", cpsfloz);
    totalcpsfloz = cpsfloz * 8;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Cups = %f US Fluid Ounces\n", cpsfloz, totalcpsfloz);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Cups to US Pints
void CupsPints()
{
    float cpspts;
    float totalcpspts;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Cups would you like converted to US Pints: ");
    scanf("%f", &cpspts);
    printf("Converting %f US Cups to US Pints equals: \n", cpspts);
    totalcpspts = cpspts * 0.5;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Cups = %f US Pints\n", cpspts, totalcpspts);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Cups to US Quarts
void CupsQuarts()
{
    float cpsqts;
    float totalcpsqts;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Cups would you like converted to US Quarts: ");
    scanf("%f", &cpsqts);
    printf("Converting %f US Cups to US Quarts equals: \n", cpsqts);
    totalcpsqts = cpsqts * 0.25;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Cups = %f US Quarts\n", cpsqts, totalcpsqts);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Cups to US Gallons
void CupsGallons()
{
    float cpsgal;
    float totalcpsgal;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Cups would you like converted to US Gallons: ");
    scanf("%f", &cpsgal);
    printf("Converting %f US Cups to US Gallons equals: \n", cpsgal);
    totalcpsgal = cpsgal * 0.0625;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Cups = %f US Gallons\n", cpsgal, totalcpsgal);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Cups to Imperial Gallons
void CupsImpGallons()
{
    float cpsimpgal;
    float totalcpsimpgal;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Cups would you like converted to Imperial Gallons: ");
    scanf("%f", &cpsimpgal);
    printf("Converting %f US Cups to Imperial Gallons equals: \n", cpsimpgal);
    totalcpsimpgal = cpsimpgal * 0.052042115;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Cups = %f Imperial Gallons\n", cpsimpgal, totalcpsimpgal);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Cups to Milliliters
void CupsMilliters()
{
    float cpsml;
    float totalcpsml;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Cups would you like converted to Imperial Gallons: ");
    scanf("%f", &cpsml);
    printf("Converting %f US Cups to Imperial Gallons equals: \n", cpsml);
    totalcpsml = cpsml * 236.588237;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Cups = %f Imperial Gallons\n", cpsml, totalcpsml);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Cups to Liters
void CupsLiters()
{
    float cpslt;
    float totalcpslt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Cups would you like converted to Liters: ");
    scanf("%f", &cpslt);
    printf("Converting %f US Cups to Liters equals: \n", cpslt);
    totalcpslt = cpslt * 0.236588236;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Cups = %f Liters\n", cpslt, totalcpslt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Cups to Kiloliters
void CupsKiloliters()
{
    float cpskl;
    float totalcpskl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Cups would you like converted to Kiloliters: ");
    scanf("%f", &cpskl);
    printf("Converting %f US Cups to Kiloliters equals: \n", cpskl);
    totalcpskl = cpskl * 0.000236588237;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Cups = %f Kiloliters\n", cpskl, totalcpskl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Pints to Cubic Centimeter
void PintCenti()
{
    float ptct;
    float totalptct;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Pints would you like converted to Cubic Centimeter: ");
    scanf("%f", &ptct);
    printf("Converting %f US Pints to Cubic Centimeter equals: \n", ptct);
    totalptct = ptct * 473.176473;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Pints = %f Cubic Centimeter\n", ptct, totalptct);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Pints to Cubic Inches
void PintInches()
{
    float ptin;
    float totalptin;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Pints would you like converted to Cubic Inches: ");
    scanf("%f", &ptin);
    printf("Converting %f US Pints to Cubic Inches equals: \n", ptin);
    totalptin = ptin * 28.87500;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Pints = %f Cubic Inches\n", ptin, totalptin);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Pints to Cubic Feet
void PintFeet()
{
    float ptft;
    float totalptft;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Pints would you like converted to Cubic Feet: ");
    scanf("%f", &ptft);
    printf("Converting %f US Pints to Cubic Feet equals: \n", ptft);
    totalptft = ptft * 0.0167100694;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Pints = %f Cubic Feet\n", ptft, totalptft);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Pints to Cubic Meters
void PintMeters()
{
    float ptmt;
    float totalptmt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Pints would you like converted to Cubic Meters: ");
    scanf("%f", &ptmt);
    printf("Converting %f US Pints to Cubic Meters equals: \n", ptmt);
    totalptmt = ptmt * 0.000473176473;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Pints = %f Cubic Meters\n", ptmt, totalptmt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Pints to US Teaspoons
void PintTeaspoons()
{
    float pttps;
    float totalpttps;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Pints would you like converted to US Teaspoons: ");
    scanf("%f", &pttps);
    printf("Converting %f US Pints to US Teaspoons equals: \n", pttps);
    totalpttps = pttps * 96;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Pints = %f US Teaspoons\n", pttps, totalpttps);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Pints to US Tablespoons
void PintTablespoons()
{
    float pttbl;
    float totalpttbl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Pints would you like converted to US Tablespoons: ");
    scanf("%f", &pttbl);
    printf("Converting %f US Pints to US Tablespoons equals: \n", pttbl);
    totalpttbl = pttbl * 32;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Pints = %f US Tablespoons\n", pttbl, totalpttbl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Pints to US Fluids Ounces
void PintFLOZ()
{
    float ptfloz;
    float totalptfloz;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Pints would you like converted to US Fluids Ounces: ");
    scanf("%f", &ptfloz);
    printf("Converting %f US Pints to US Fluids Ounces equals: \n", ptfloz);
    totalptfloz = ptfloz * 16;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Pints = %f US Fluids Ounces\n", ptfloz, totalptfloz);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Pints to US Cups
void PintCups()
{
    float ptcps;
    float totalptcps;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Pints would you like converted to US Cups: ");
    scanf("%f", &ptcps);
    printf("Converting %f US Pints to US Cups equals: \n", ptcps);
    totalptcps = ptcps * 2;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Pints = %f US Cups\n", ptcps, totalptcps);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Pints to US Quarts
void PintQuarts()
{
    float ptqts;
    float totalptqts;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Pints would you like converted to US Quarts: ");
    scanf("%f", &ptqts);
    printf("Converting %f US Pints to US Quarts equals: \n", ptqts);
    totalptqts = ptqts * 0.5;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Pints = %f US Quarts\n", ptqts, totalptqts);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Pints to US Gallons
void PintGallons()
{
    float ptgl;
    float totalptgl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Pints would you like converted to US Gallons: ");
    scanf("%f", &ptgl);
    printf("Converting %f US Pints to US Gallons equals: \n", ptgl);
    totalptgl = ptgl * 0.125;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Pints = %f US Gallons\n", ptgl, totalptgl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Pints to Imperial Gallons
void PintImpGallons()
{
    float ptimpgal;
    float totalptimpgal;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Pints would you like converted to Imperial Gallons: ");
    scanf("%f", &ptimpgal);
    printf("Converting %f US Pints to Imperial Gallons equals: \n", ptimpgal);
    totalptimpgal = ptimpgal * 0.10408423;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Pints = %f Imperial Gallons\n", ptimpgal, totalptimpgal);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Pints to Milliliters
void PintMilliters()
{
    float ptml;
    float totalptml;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Pints would you like converted to Imperial Gallons: ");
    scanf("%f", &ptml);
    printf("Converting %f US Pints to Imperial Gallons equals: \n", ptml);
    totalptml = ptml * 473.176473;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Pints = %f Imperial Gallons\n", ptml, totalptml);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Pints to Liters
void PintLiters()
{
    float ptlt;
    float totalptlt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Pints would you like converted to Liters: ");
    scanf("%f", &ptlt);
    printf("Converting %f US Pints to Liters equals: \n", ptlt);
    totalptlt = ptlt * 0.473176473;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Pints = %f Liters\n", ptlt, totalptlt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Pints to Kiloliters
void PintKilo()
{
    float ptlt;
    float totalptlt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Pints would you like converted to Kiloliters: ");
    scanf("%f", &ptlt);
    printf("Converting %f US Pints to Kiloliters equals: \n", ptlt);
    totalptlt = ptlt * 0.000473176473;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Pints = %f Kiloliters\n", ptlt, totalptlt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Quarts to Cubic Centimeters
void QuartCenti()
{
    float qtsct;
    float totalqtsct;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Quarts would you like converted to Cubic Centimeters: ");
    scanf("%f", &qtsct);
    printf("Converting %f US Quarts to Cubic Centimeters equals: \n", qtsct);
    totalqtsct = qtsct * 946.352946;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Quarts = %f Cubic Centimeters\n", qtsct, totalqtsct);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Quarts to Cubic Inches
void QuartInches()
{
    float qtsin;
    float totalqtsin;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Quarts would you like converted to Cubic Inches: ");
    scanf("%f", &qtsin);
    printf("Converting %f US Quarts to Cubic Inches equals: \n", qtsin);
    totalqtsin = qtsin * 57.75;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Quarts = %f Cubic Inches\n", qtsin, totalqtsin);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Quarts to Cubic Feet
void QuartFeet()
{
    float qtsft;
    float totalqtsft;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Quarts would you like converted to Cubic Feet: ");
    scanf("%f", &qtsft);
    printf("Converting %f US Quarts to Cubic Feet equals: \n", qtsft);
    totalqtsft = qtsft * 0.0334201389;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Quarts = %f Cubic Feet\n", qtsft, totalqtsft);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Quarts to Cubic Meters
void QuartMeters()
{
    float qtsmt;
    float totalqtsmt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Quarts would you like converted to Cubic Meters: ");
    scanf("%f", &qtsmt);
    printf("Converting %f US Quarts to Cubic Meters equals: \n", qtsmt);
    totalqtsmt = qtsmt * 0.000946352946;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Quarts = %f Cubic Meters\n", qtsmt, totalqtsmt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Quarts to US Teaspoons
void QuartTeaspoons()
{
    float qtstps;
    float totalqtstps;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Quarts would you like converted to US Teaspoons: ");
    scanf("%f", &qtstps);
    printf("Converting %f US Quarts to US Teaspoons equals: \n", qtstps);
    totalqtstps = qtstps * 192;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Quarts = %f US Teaspoons\n", qtstps, totalqtstps);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Quarts to US Tablespoons
void QuartTablespoons()
{
    float qtstbl;
    float totalqtstbl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Quarts would you like converted to US Tablespoons: ");
    scanf("%f", &qtstbl);
    printf("Converting %f US Quarts to US Tablespoons equals: \n", qtstbl);
    totalqtstbl = qtstbl * 64;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Quarts = %f US Tablespoons\n", qtstbl, totalqtstbl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Quarts to US Fluid Ounces
void QuartFLOZ()
{
    float qtsfloz;
    float totalqtsfloz;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Quarts would you like converted to US Fluid Ounces: ");
    scanf("%f", &qtsfloz);
    printf("Converting %f US Quarts to US Fluid Ounces equals: \n", qtsfloz);
    totalqtsfloz = qtsfloz * 32;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Quarts = %f US Fluid Ounces\n", qtsfloz, totalqtsfloz);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Quarts to Cups
void QuartCups()
{
    float qtscps;
    float totalqtscps;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Quarts would you like converted to US Cups: ");
    scanf("%f", &qtscps);
    printf("Converting %f US Quarts to US Cups equals: \n", qtscps);
    totalqtscps = qtscps * 4;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Quarts = %f US Cups\n", qtscps, totalqtscps);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Quarts to Pints
void QuartPints()
{
    float qtspts;
    float totalqtspts;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Quarts would you like converted to US Pints: ");
    scanf("%f", &qtspts);
    printf("Converting %f US Quarts to US Pints equals: \n", qtspts);
    totalqtspts = qtspts * 4;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Quarts = %f US Pints\n", qtspts, totalqtspts);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Quarts to US Gallons
void QuartGallons()
{
    float qtsgl;
    float totalqtsgl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Quarts would you like converted to US Gallons: ");
    scanf("%f", &qtsgl);
    printf("Converting %f US Quarts to US Gallons equals: \n", qtsgl);
    totalqtsgl = qtsgl * 0.25;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Quarts = %f US Gallons\n", qtsgl, totalqtsgl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Quarts to Imperial Gallons
void QuartImpGallons()
{
    float qtsimgl;
    float totalqtsimgl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Quarts would you like converted to Imperial Gallons: ");
    scanf("%f", &qtsimgl);
    printf("Converting %f US Quarts to Imperial Gallons equals: \n", qtsimgl);
    totalqtsimgl = qtsimgl * 0.20816846;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Quarts = %f Imperial Gallons\n", qtsimgl, totalqtsimgl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Quarts to Milliliters
void QuartMilliters()
{
    float qtsml;
    float totalqtsml;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Quarts would you like converted to Milliliters: ");
    scanf("%f", &qtsml);
    printf("Converting %f US Quarts to Milliliters equals: \n", qtsml);
    totalqtsml = qtsml * 946.352946;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Quarts = %f Milliliters\n", qtsml, totalqtsml);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Quarts to Liters
void QuartLiters()
{
    float qtslt;
    float totalqtslt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Quarts would you like converted to Liters: ");
    scanf("%f", &qtslt);
    printf("Converting %f US Quarts to Liters equals: \n", qtslt);
    totalqtslt = qtslt * 946.352946;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Quarts = %f Liters\n", qtslt, totalqtslt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Quarts to KiloLiters
void QuartKiloliters()
{
    float qtskl;
    float totalqtskl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Quarts would you like converted to KiloLiters: ");
    scanf("%f", &qtskl);
    printf("Converting %f US Quarts to KiloLiters equals: \n", qtskl);
    totalqtskl = qtskl * 0.000946352946;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Quarts = %f KiloLiters\n", qtskl, totalqtskl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Gallons to Cubic Centimeters
void GallonCenti()
{
    float glcm;
    float totalglcm;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Gallons would you like converted to Cubic Centimeters: ");
    scanf("%f", &glcm);
    printf("Converting %f US Gallons to Cubic Centimeters equals: \n", glcm);
    totalglcm = glcm * 3785.41178;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Gallons = %f Cubic Centimeters\n", glcm, totalglcm);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Gallons to Cubic Inches
void GallonInches()
{
    float glin;
    float totalglin;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Gallons would you like converted to Cubic Inches: ");
    scanf("%f", &glin);
    printf("Converting %f US Gallons to Cubic Inches equals: \n", glin);
    totalglin = glin * 231;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Gallons = %f Cubic Inches\n", glin, totalglin);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Gallons to Cubic Feet
void GallonFeet()
{
    float glft;
    float totalglft;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Gallons would you like converted to Cubic Feet: ");
    scanf("%f", &glft);
    printf("Converting %f US Gallons to Cubic Feet equals: \n", glft);
    totalglft = glft * 0.133680556;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Gallons = %f Cubic Feet\n", glft, totalglft);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Gallons to Cubic Meters
void GallonMeters()
{
    float glmt;
    float totalglmt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Gallons would you like converted to Cubic Meters: ");
    scanf("%f", &glmt);
    printf("Converting %f US Gallons to Cubic Meters equals: \n", glmt);
    totalglmt = glmt * 0.00378541178;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Gallons = %f Cubic Meters\n", glmt, totalglmt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Gallons to US Teaspoons
void GallonTeaspoons()
{
    float gltps;
    float totalgltps;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Gallons would you like converted to US Teaspoons: ");
    scanf("%f", &gltps);
    printf("Converting %f US Gallons to US Teaspoons equals: \n", gltps);
    totalgltps = gltps * 768;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Gallons = %f US Teaspoons\n", gltps, totalgltps);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Gallons to US Tablespoons
void GallonTablespoons()
{
    float gltbl;
    float totalgltbl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Gallons would you like converted to US Tablespoons: ");
    scanf("%f", &gltbl);
    printf("Converting %f US Gallons to US Tablespoons equals: \n", gltbl);
    totalgltbl = gltbl * 256;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Gallons = %f US Tablespoons\n", gltbl, totalgltbl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Gallons to US Fluid Ounces
void GallonFLOZ()
{
    float glfloz;
    float totalglfloz;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Gallons would you like converted to US Fluid Ounces: ");
    scanf("%f", &glfloz);
    printf("Converting %f US Gallons to US Fluid Ounces equals: \n", glfloz);
    totalglfloz = glfloz * 128;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Gallons = %f US Fluid Ounces\n", glfloz, totalglfloz);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Gallons to US Cups
void GallonCups()
{
    float glcps;
    float totalglcps;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Gallons would you like converted to US Cups: ");
    scanf("%f", &glcps);
    printf("Converting %f US Gallons to US Cups equals: \n", glcps);
    totalglcps = glcps * 16;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Gallons = %f US Cups\n", glcps, totalglcps);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Gallons to US Quarts
void GallonQuarts()
{
    float glqts;
    float totalglqts;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Gallons would you like converted to US Quarts: ");
    scanf("%f", &glqts);
    printf("Converting %f US Gallons to US Quarts equals: \n", glqts);
    totalglqts = glqts * 4;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Gallons = %f US Quarts\n", glqts, totalglqts);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Gallons to US Pints
void GallonPints()
{
    float glpts;
    float totalglpts;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Gallons would you like converted to US Pints: ");
    scanf("%f", &glpts);
    printf("Converting %f US Gallons to US Pints equals: \n", glpts);
    totalglpts = glpts * 8;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Gallons = %f US Pints\n", glpts, totalglpts);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Gallons to Imperial Gallons
void GallonImpGallons()
{
    float glimpgl;
    float totalglimpgl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Gallons would you like converted to Imperial Gallons: ");
    scanf("%f", &glimpgl);
    printf("Converting %f US Gallons to Imperial Gallons equals: \n", glimpgl);
    totalglimpgl = glimpgl * 0.83267384;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Gallons = %f Imperial Gallons\n", glimpgl, totalglimpgl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Gallons to Milliliters
void GallonMilliters()
{
    float glml;
    float totalglml;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Gallons would you like converted to Milliliters: ");
    scanf("%f", &glml);
    printf("Converting %f US Gallons to Milliliters equals: \n", glml);
    totalglml = glml * 3785.41178;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Gallons = %f Milliliters\n", glml, totalglml);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Gallons to Liters
void GallonLiters()
{
    float gllt;
    float totalgllt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Gallons would you like converted to Milliliters: ");
    scanf("%f", &gllt);
    printf("Converting %f US Gallons to Milliliters equals: \n", gllt);
    totalgllt = gllt * 3.78541178;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Gallons = %f Milliliters\n", gllt, totalgllt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert US Gallons to Kiloliters
void GallonKiloliters()
{
    float glkl;
    float totalglkl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many US Gallons would you like converted to Milliliters: ");
    scanf("%f", &glkl);
    printf("Converting %f US Gallons to Milliliters equals: \n", glkl);
    totalglkl = glkl * 0.00378541178;
    printf("-------------------------------------------------------------------------\n");
    printf("%f US Gallons = %f Milliliters\n", glkl, totalglkl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Imperial Gallons to Cubic Centimeters
void ImpGallonCenti()
{
    float impgalcm;
    float totalimpgalcm;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Imperial Gallons would you like converted to Cubic Centimeters: ");
    scanf("%f", &impgalcm);
    printf("Converting %f Imperial Gallons to Cubic Centimeters equals: \n", impgalcm);
    totalimpgalcm = impgalcm * 4546.09188;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Imperial Gallons = %f Cubic Centimeters\n", impgalcm, totalimpgalcm);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Imperial Gallons to Cubic Inches
void ImpGallonInches()
{
    float impglin;
    float totalimpglin;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Imperial Gallons would you like converted to Cubic Inches: ");
    scanf("%f", &impglin);
    printf("Converting %f Imperial Gallons to Cubic Inches equals: \n", impglin);
    totalimpglin = impglin * 277.419547;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Imperial Gallons = %f Cubic Inches\n", impglin, totalimpglin);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Imperial Gallons to Cubic Feet
void ImpGallonFeet()
{
    float impglft;
    float totalimpglft;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Imperial Gallons would you like converted to Cubic Feet: ");
    scanf("%f", &impglft);
    printf("Converting %f Imperial Gallons to Cubic Feet equals: \n", impglft);
    totalimpglft = impglft * 0.16054372;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Imperial Gallons = %f Cubic Feet\n", impglft, totalimpglft);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Imperial Gallons to Cubic Meters
void ImpGallonMeters()
{
    float impglmt;
    float totalimpglmt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Imperial Gallons would you like converted to Cubic Meters: ");
    scanf("%f", &impglmt);
    printf("Converting %f Imperial Gallons to Cubic Meters equals: \n", impglmt);
    totalimpglmt = impglmt * 0.00454609188;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Imperial Gallons = %f Cubic Meters\n", impglmt, totalimpglmt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Imperial Gallons to US Teaspoons
void ImpGallonTeaspoons()
{
    float impglft;
    float totalimpglft;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Imperial Gallons would you like converted to US Teaspoons: ");
    scanf("%f", &impglft);
    printf("Converting %f Imperial Gallons to US Teaspoons equals: \n", impglft);
    totalimpglft = impglft * 922.329924;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Imperial Gallons = %f US Teaspoons\n", impglft, totalimpglft);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Imperial Gallons to US Tablespoons
void ImpGallonTablespoons()
{
    float impglft;
    float totalimpglft;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Imperial Gallons would you like converted to US Tablespoons: ");
    scanf("%f", &impglft);
    printf("Converting %f Imperial Gallons to US Tablespoons equals: \n", impglft);
    totalimpglft = impglft * 307.443308;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Imperial Gallons = %f US Tablespoons\n", impglft, totalimpglft);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Imperial Gallons to US Fluid Ounces
void ImpGallonFLOZ()
{
    float impglfloz;
    float totalimpglfloz;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Imperial Gallons would you like converted to US Fluid Ounces: ");
    scanf("%f", &impglfloz);
    printf("Converting %f Imperial Gallons to US Fluid Ounces equals: \n", impglfloz);
    totalimpglfloz = impglfloz * 153.721654;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Imperial Gallons = %f US Fluid Ounces\n", impglfloz, totalimpglfloz);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Imperial Gallons to US Cups 
void ImpGallonCups()
{
    float impglcps;
    float totalimpglcps;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Imperial Gallons would you like converted to US Cups: ");
    scanf("%f", &impglcps);
    printf("Converting %f Imperial Gallons to US Cups equals: \n", impglcps);
    totalimpglcps = impglcps * 19.2152068;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Imperial Gallons = %f US Cups\n", impglcps, totalimpglcps);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Imperial Gallons to US Quarts 
void ImpGallonQuarts()
{
    float impglqts;
    float totalimpglqts;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Imperial Gallons would you like converted to US Quarts: ");
    scanf("%f", &impglqts);
    printf("Converting %f Imperial Gallons to US Quarts equals: \n", impglqts);
    totalimpglqts = impglqts * 4.80380169;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Imperial Gallons = %f US Quarts\n", impglqts, totalimpglqts);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Imperial Gallons to US Pints 
void ImpGallonPints()
{
    float impglpts;
    float totalimpglpts;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Imperial Gallons would you like converted to US Pints: ");
    scanf("%f", &impglpts);
    printf("Converting %f Imperial Gallons to US Pints equals: \n", impglpts);
    totalimpglpts = impglpts * 9.60760338;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Imperial Gallons = %f US Pints\n", impglpts, totalimpglpts);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Imperial Gallons to US Gallons 
void ImpGallonGallons()
{
    float impglgl;
    float totalimpglgl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Imperial Gallons would you like converted to US Gallons: ");
    scanf("%f", &impglgl);
    printf("Converting %f Imperial Gallons to US Gallons equals: \n", impglgl);
    totalimpglgl = impglgl * 1.20095042;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Imperial Gallons = %f US Gallons\n", impglgl, totalimpglgl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Imperial Gallons to Milliliters 
void ImpGallonMilliters()
{
    float impglml;
    float totalimpglml;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Imperial Gallons would you like converted to Milliliters: ");
    scanf("%f", &impglml);
    printf("Converting %f Imperial Gallons to Milliliters equals: \n", impglml);
    totalimpglml = impglml * 4546.09188;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Imperial Gallons = %f Milliliters\n", impglml, totalimpglml);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Imperial Gallons to Liters 
void ImpGallonLiters()
{
    float impgllt;
    float totalimpgllt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Imperial Gallons would you like converted to Liters: ");
    scanf("%f", &impgllt);
    printf("Converting %f Imperial Gallons to Liters equals: \n", impgllt);
    totalimpgllt = impgllt * 4.54609188;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Imperial Gallons = %f Liters\n", impgllt, totalimpgllt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Imperial Gallons to Kiloliters 
void ImpGallonKiloliters()
{
    float impglkt;
    float totalimpglkt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Imperial Gallons would you like converted to Liters: ");
    scanf("%f", &impglkt);
    printf("Converting %f Imperial Gallons to Liters equals: \n", impglkt);
    totalimpglkt = impglkt * 0.00454609188;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Imperial Gallons = %f Liters\n", impglkt, totalimpglkt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Milliliter to Cubic Centimeters 
void MilliterCenti()
{
    float mlcm;
    float totalmlcm;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Milliliter would you like converted to Cubic Centimeters: ");
    scanf("%f", &mlcm);
    printf("Converting %f Milliliter to Cubic Centimeters equals: \n", mlcm);
    totalmlcm = mlcm * 1;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Milliliter = %f Cubic Centimeters\n", mlcm, totalmlcm);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Milliliter to Cubic Inches 
void MilliterInches()
{
    float mlin;
    float totalmlin;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Milliliter would you like converted to Cubic Inches: ");
    scanf("%f", &mlin);
    printf("Converting %f Milliliter to Cubic Inches equals: \n", mlin);
    totalmlin = mlin * 0.0610237441;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Milliliter = %f Cubic Inches\n", mlin, totalmlin);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Milliliter to Cubic Feet 
void MilliterFeet()
{
    float mlft;
    float totalmlft;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Milliliter would you like converted to Cubic Feet: ");
    scanf("%f", &mlft);
    printf("Converting %f Milliliter to Cubic Feet equals: \n", mlft);
    totalmlft = mlft * 3.53146667 * pow(10,-5);
    printf("-------------------------------------------------------------------------\n");
    printf("%f Milliliter = %f Cubic Feet\n", mlft, totalmlft);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Milliliter to Cubic Meters 
void MilliterMeters()
{
    float mlmt;
    float totalmlmt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Milliliter would you like converted to Cubic Meters: ");
    scanf("%f", &mlmt);
    printf("Converting %f Milliliter to Cubic Meters equals: \n", mlmt);
    totalmlmt = mlmt * 1.0 * pow(10,-6);
    printf("-------------------------------------------------------------------------\n");
    printf("%f Milliliter = %f Cubic Meters\n", mlmt, totalmlmt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Milliliter to US Teaspoons 
void MilliterTeaspoons()
{
    float mltps;
    float totalmltps;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Milliliter would you like converted to US Teaspoons: ");
    scanf("%f", &mltps);
    printf("Converting %f Milliliter to US Teaspoons equals: \n", mltps);
    totalmltps = mltps * 0.202884136;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Milliliter = %f US Teaspoons\n", mltps, totalmltps);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Milliliter to US Tablespoons 
void MilliterTablespoons()
{
    float mltbl;
    float totalmltbl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Milliliter would you like converted to US Tablespoons: ");
    scanf("%f", &mltbl);
    printf("Converting %f Milliliter to US Tablespoons equals: \n", mltbl);
    totalmltbl = mltbl * 0.202884136;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Milliliter = %f US Tablespoons\n", mltbl, totalmltbl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Milliliter to US Fluid Ounces 
void MilliterFLOZ()
{
    float mlfloz;
    float totalmlfloz;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Milliliter would you like converted to US Fluid Ounces: ");
    scanf("%f", &mlfloz);
    printf("Converting %f Milliliter to US Fluid Ounces equals: \n", mlfloz);
    totalmlfloz = mlfloz * 0.0338140227;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Milliliter = %f US Fluid Ounces\n", mlfloz, totalmlfloz);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Milliliter to US Cups 
void MilliterCups()
{
    float mlcps;
    float totalmlcps;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Milliliter would you like converted to US Cups: ");
    scanf("%f", &mlcps);
    printf("Converting %f Milliliter to US Cups equals: \n", mlcps);
    totalmlcps = mlcps * 0.00422675284;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Milliliter = %f US Cups\n", mlcps, totalmlcps);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Milliliter to US Pints 
void MilliterPints()
{
    float mlpts;
    float totalmlpts;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Milliliter would you like converted to US Pints: ");
    scanf("%f", &mlpts);
    printf("Converting %f Milliliter to US Pints equals: \n", mlpts);
    totalmlpts = mlpts * 0.00211337642;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Milliliter = %f US Pints\n", mlpts, totalmlpts);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Milliliter to US Quarts 
void MilliterQuarts()
{
    float mlqt;
    float totalmlqt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Milliliter would you like converted to US Quarts: ");
    scanf("%f", &mlqt);
    printf("Converting %f Milliliter to US Quarts equals: \n", mlqt);
    totalmlqt = mlqt * 0.00105668821;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Milliliter = %f US Quarts\n", mlqt, totalmlqt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Milliliter to US Gallons 
void MilliterGallons()
{
    float mlgl;
    float totalmlgl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Milliliter would you like converted to US Gallons: ");
    scanf("%f", &mlgl);
    printf("Converting %f Milliliter to US Gallons equals: \n", mlgl);
    totalmlgl = mlgl * 0.000264172052;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Milliliter = %f US Gallons\n", mlgl, totalmlgl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Milliliter to Imperial Gallons 
void MilliterImpGallons()
{
    float mlimpgl;
    float totalmlimpgl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Milliliter would you like converted to Imperial Gallons: ");
    scanf("%f", &mlimpgl);
    printf("Converting %f Milliliter to Imperial Gallons equals: \n", mlimpgl);
    totalmlimpgl = mlimpgl * 0.000219969157;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Milliliter = %f Imperial Gallons\n", mlimpgl, totalmlimpgl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Milliliter to Liters 
void MilliterLiters()
{
    float mllt;
    float totalmllt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Milliliter would you like converted to Liters: ");
    scanf("%f", &mllt);
    printf("Converting %f Milliliter to Liters equals: \n", mllt);
    totalmllt = mllt * 0.001;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Milliliter = %f Liters\n", mllt, totalmllt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Milliliter to Kiloliters 
void MilliterKilo()
{
    float mlkl;
    float totalmlkl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Milliliter would you like converted to Kiloliters: ");
    scanf("%f", &mlkl);
    printf("Converting %f Milliliter to Kiloliters equals: \n", mlkl);
    totalmlkl = mlkl * 1.0 * pow(10,-6);
    printf("-------------------------------------------------------------------------\n");
    printf("%f Milliliter = %f Kiloliters\n", mlkl, totalmlkl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Liter to Cubic Centimeters 
void LiterCenti()
{
    float ltcm;
    float totalltcm;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Liter would you like converted to Cubic Centimeters: ");
    scanf("%f", &ltcm);
    printf("Converting %f Liter to Cubic Centimeters equals: \n", ltcm);
    totalltcm = ltcm * 1000;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Liter = %f Cubic Centimeters\n", ltcm, totalltcm);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Liter to Cubic Inches 
void LiterInches()
{
    float ltin;
    float totalltin;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Liter would you like converted to Cubic Inches: ");
    scanf("%f", &ltin);
    printf("Converting %f Liter to Cubic Inches equals: \n", ltin);
    totalltin = ltin * 61.0237441;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Liter = %f Cubic Inches\n", ltin, totalltin);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Liter to Cubic Feet 
void LiterFeet()
{
    float ltft;
    float totalltft;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Liter would you like converted to Cubic Feet: ");
    scanf("%f", &ltft);
    printf("Converting %f Liter to Cubic Feet equals: \n", ltft);
    totalltft = ltft * 0.0353146667;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Liter = %f Cubic Feet\n", ltft, totalltft);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Liter to Cubic Meters 
void LiterMeters()
{
    float ltmt;
    float totalltmt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Liter would you like converted to Cubic Meters: ");
    scanf("%f", &ltmt);
    printf("Converting %f Liter to Cubic Meters equals: \n", ltmt);
    totalltmt = ltmt * 0.001;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Liter = %f Cubic Meters\n", ltmt, totalltmt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Liter to US Teaspoons 
void LiterTeaspoons()
{
    float lttps;
    float totallttps;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Liter would you like converted to US Teaspoons: ");
    scanf("%f", &lttps);
    printf("Converting %f Liter to US Teaspoons equals: \n", lttps);
    totallttps = lttps * 202.884136;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Liter = %f US Teaspoons\n", lttps, totallttps);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Liter to US Tablespoons 
void LiterTablespoons()
{
    float lttbl;
    float totallttbl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Liter would you like converted to US Teaspoons: ");
    scanf("%f", &lttbl);
    printf("Converting %f Liter to US Teaspoons equals: \n", lttbl);
    totallttbl = lttbl * 67.6280454;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Liter = %f US Teaspoons\n", lttbl, totallttbl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Liter to US Fluid Ounces 
void LiterFLOZ()
{
    float ltfloz;
    float totalltfloz;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Liter would you like converted to US Teaspoons: ");
    scanf("%f", &ltfloz);
    printf("Converting %f Liter to US Teaspoons equals: \n", ltfloz);
    totalltfloz = ltfloz * 33.8140227;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Liter = %f US Teaspoons\n", ltfloz, totalltfloz);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Liter to US Cups 
void LiterCups()
{
    float ltcps;
    float totalltcps;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Liter would you like converted to US Cups: ");
    scanf("%f", &ltcps);
    printf("Converting %f Liter to US Cups equals: \n", ltcps);
    totalltcps = ltcps * 4.22675284;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Liter = %f US Cups\n", ltcps, totalltcps);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Liter to US Pints 
void LiterPints()
{
    float ltpts;
    float totalltpts;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Liter would you like converted to US Pints: ");
    scanf("%f", &ltpts);
    printf("Converting %f Liter to US Pints equals: \n", ltpts);
    totalltpts = ltpts * 2.11337642;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Liter = %f US Pints\n", ltpts, totalltpts);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Liter to US Quarts 
void LiterQuarts()
{
    float ltqt;
    float totalltqt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Liter would you like converted to US Quarts: ");
    scanf("%f", &ltqt);
    printf("Converting %f Liter to US Quarts equals: \n", ltqt);
    totalltqt = ltqt * 1.05668821;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Liter = %f US Quarts\n", ltqt, totalltqt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Liter to US Gallons 
void LiterGallons()
{
    float ltgl;
    float totalltgl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Liter would you like converted to US Gallons: ");
    scanf("%f", &ltgl);
    printf("Converting %f Liter to US Gallons equals: \n", ltgl);
    totalltgl = ltgl * 0.264172052;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Liter = %f US Gallons\n", ltgl, totalltgl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Liter to Imperial Gallons 
void LiterImpGallons()
{
    float ltimpgl;
    float totalltimpgl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Liter would you like converted to Imperial Gallons: ");
    scanf("%f", &ltimpgl);
    printf("Converting %f Liter to Imperial Gallons equals: \n", ltimpgl);
    totalltimpgl = ltimpgl * 0.219969157;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Liter = %f Imperial Gallons\n", ltimpgl, totalltimpgl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Liter to Milliliters 
void LiterMilliters()
{
    float ltml;
    float totalltml;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Liter would you like converted to Milliliters: ");
    scanf("%f", &ltml);
    printf("Converting %f Liter to Milliliters equals: \n", ltml);
    totalltml = ltml * 1000;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Liter = %f Milliliters\n", ltml, totalltml);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Liter to Kiloliters 
void LiterKilo()
{
    float ltkl;
    float totalltkl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Liter would you like converted to Kiloliters: ");
    scanf("%f", &ltkl);
    printf("Converting %f Liter to Kiloliters equals: \n", ltkl);
    totalltkl = ltkl * 0.001;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Liter = %f Kiloliters\n", ltkl, totalltkl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Kiloliters to Cubic Centimeters 
void KilosCenti()
{
    float klcm;
    float totalklcm;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Kiloliters would you like converted to Cubic Centimeters: ");
    scanf("%f", &klcm);
    printf("Converting %f Kiloliters to Cubic Centimeters equals: \n", klcm);
    totalklcm = klcm * 1000000;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Kiloliters = %f Cubic Centimeters\n", klcm, totalklcm);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Kiloliters to Cubic Inches 
void KilosInches()
{
    float klin;
    float totalklin;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Kiloliters would you like converted to Cubic Centimeters: ");
    scanf("%f", &klin);
    printf("Converting %f Kiloliters to Cubic Centimeters equals: \n", klin);
    totalklin = klin * 61023.7441;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Kiloliters = %f Cubic Centimeters\n", klin, totalklin);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Kiloliters to Cubic Feet 
void KilosFeet()
{
    float klft;
    float totalklft;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Kiloliters would you like converted to Cubic Feet: ");
    scanf("%f", &klft);
    printf("Converting %f Kiloliters to Cubic Feet equals: \n", klft);
    totalklft = klft * 35.3146667;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Kiloliters = %f Cubic Feet\n", klft, totalklft);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Kiloliters to Cubic Meters 
void KilosMeters()
{
    float klmt;
    float totalklmt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Kiloliters would you like converted to Cubic Meters: ");
    scanf("%f", &klmt);
    printf("Converting %f Kiloliters to Cubic Meters equals: \n", klmt);
    totalklmt = klmt * 1;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Kiloliters = %f Cubic Meters\n", klmt, totalklmt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Kiloliters to US Teaspoons 
void KilosTeaspoons()
{
    float kltps;
    float totalkltps;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Kiloliters would you like converted to US Teaspoons: ");
    scanf("%f", &kltps);
    printf("Converting %f Kiloliters to US Teaspoons equals: \n", kltps);
    totalkltps = kltps * 202884.136;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Kiloliters = %f US Teaspoons\n", kltps, totalkltps);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Kiloliters to US Tablespoons 
void KilosTablespoons()
{
    float kltbl;
    float totalkltbl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Kiloliters would you like converted to US Tablespoons: ");
    scanf("%f", &kltbl);
    printf("Converting %f Kiloliters to US Tablespoons equals: \n", kltbl);
    totalkltbl = kltbl * 67628.0454;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Kiloliters = %f US Tablespoons\n", kltbl, totalkltbl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Kiloliters to US Fluid Ounces 
void KilosFLOZ()
{
    float klfloz;
    float totalklfloz;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Kiloliters would you like converted to US Fluid Ounces: ");
    scanf("%f", &klfloz);
    printf("Converting %f Kiloliters to US Fluid Ounces equals: \n", klfloz);
    totalklfloz = klfloz * 33814.0227;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Kiloliters = %f US Fluid Ounces\n", klfloz, totalklfloz);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Kiloliters to US Cups 
void KilosCups()
{
    float klcps;
    float totalklcps;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Kiloliters would you like converted to US Cups: ");
    scanf("%f", &klcps);
    printf("Converting %f Kiloliters to US Cups equals: \n", klcps);
    totalklcps = klcps * 4226.75284;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Kiloliters = %f US Cups\n", klcps, totalklcps);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Kiloliters to US Pints 
void KilosPints()
{
    float klpt;
    float totalklpt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Kiloliters would you like converted to US Pints: ");
    scanf("%f", &klpt);
    printf("Converting %f Kiloliters to US Pints equals: \n", klpt);
    totalklpt = klpt * 2113.37642;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Kiloliters = %f US Pints\n", klpt, totalklpt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Kiloliters to US Quarts 
void KilosQuarts()
{
    float klqt;
    float totalklqt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Kiloliters would you like converted to US Quarts: ");
    scanf("%f", &klqt);
    printf("Converting %f Kiloliters to US Quarts equals: \n", klqt);
    totalklqt = klqt * 1056.68821;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Kiloliters = %f US Quarts\n", klqt, totalklqt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Kiloliters to US Gallons 
void KilosGallons()
{
    float klgl;
    float totalklgl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Kiloliters would you like converted to US Gallons: ");
    scanf("%f", &klgl);
    printf("Converting %f Kiloliters to US Gallons equals: \n", klgl);
    totalklgl = klgl * 264.172052;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Kiloliters = %f US Gallons\n", klgl, totalklgl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Kiloliters to Imperial Gallons 
void KilosImpGallons()
{
    float klimpgl;
    float totalklimpgl;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Kiloliters would you like converted to Imperial Gallons: ");
    scanf("%f", &klimpgl);
    printf("Converting %f Kiloliters to Imperial Gallons equals: \n", klimpgl);
    totalklimpgl = klimpgl * 219.969157;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Kiloliters = %f Imperial Gallons\n", klimpgl, totalklimpgl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Kiloliters to Milliliters 
void KilosMilliters()
{
    float klml;
    float totalklml;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Kiloliters would you like converted to Milliliters: ");
    scanf("%f", &klml);
    printf("Converting %f Kiloliters to Milliliters equals: \n", klml);
    totalklml = klml * 1000000;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Kiloliters = %f Milliliters\n", klml, totalklml);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Kiloliters to Liters 
void KilosLiters()
{
    float kllt;
    float totalkllt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Kiloliters would you like converted to Liters: ");
    scanf("%f", &kllt);
    printf("Converting %f Kiloliters to Liters equals: \n", kllt);
    totalkllt = kllt * 1000;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Kiloliters = %f Liters\n", kllt, totalkllt);
    printf("-------------------------------------------------------------------------\n");
}





void Area()
{
        int subfirstarea, subsecondarea;
        int sqfoot = 1;
        int sqinch = 2;
        int sqmeter = 3;
        int sqyard = 4;
        int sqmile = 5;
        int sqacre = 6;
        
	printf("\n");
	printf("Your selection is Wieght.\n");
	printf("[1]  Square Foot\n");
	printf("[2]  Square Inch\n");
	printf("[3]  Square Meter\n");
	printf("[4]  Square Yard\n");
   printf("[5]  Square Mile\n");
   printf("[6]  Acre\n");
	printf("Which would you like to covert: ");
	scanf("%d", &subfirstarea);
        printf("Convert to: ");
        scanf("%d", &subsecondarea);
        
        if (subfirstarea != sqfoot && subfirstarea != sqinch && subfirstarea != sqmeter && subfirstarea != sqyard &&
            subfirstarea != sqmile && subfirstarea != sqacre)
        {
            printf("\nERROR: INCORRECT VALUE.\n");
        }
        if (subsecondarea != sqfoot && subsecondarea != sqinch && subsecondarea != sqmeter && subsecondarea != sqyard &&
            subsecondarea != sqmile && subsecondarea != sqacre)
        {
            printf("\nERROR: INCORRECT VALUE.\n");
        }
        if (subfirstarea == sqfoot && subsecondarea == sqinch)
        {
            SqFootInches();
        }
        if (subfirstarea == sqfoot && subsecondarea == sqmeter)
        {
            SqFootMeters();
        }
        if (subfirstarea == sqfoot && subsecondarea == sqyard)
        {
            SqFootYards();
        }
        if (subfirstarea == sqfoot && subsecondarea == sqyard)
        {
            SqFootYards();
        }
        if (subfirstarea == sqfoot && subsecondarea == sqmile)
        {
            SqFootMiles();
        }
        if (subfirstarea == sqinch && subsecondarea == sqfoot)
        {
            SqInchFoot();
        }
        if (subfirstarea == sqinch && subsecondarea == sqmeter)
        {
            SqInchMeters();
        }
        if (subfirstarea == sqinch && subsecondarea == sqyard)
        {
            SqInchYards();
        }
        if (subfirstarea == sqinch && subsecondarea == sqmile)
        {
            SqInchMiles();
        }
        if (subfirstarea == sqmeter && subsecondarea == sqfoot)
        {
            SqMeterFoot();
        }
        if (subfirstarea == sqmeter && subsecondarea == sqinch)
        {
            SqMeterInches();
        }
        if (subfirstarea == sqmeter && subsecondarea == sqyard)
        {
            SqMeterYards();
        }
        if (subfirstarea == sqmeter && subsecondarea == sqmile)
        {
            SqMeterMiles();
        }
        if (subfirstarea == sqyard && subsecondarea == sqfoot)
        {
            SqYardFoot();
        }
        if (subfirstarea == sqyard && subsecondarea == sqinch)
        {
            SqYardInches();
        }
         if (subfirstarea == sqyard && subsecondarea == sqmeter)
        {
            SqYardMeters();
        }
        if (subfirstarea == sqyard && subsecondarea == sqmile)
        {
            SqYardMiles();
        }
        if (subfirstarea == sqmeter && subsecondarea == sqfoot)
        {
            SqMeterFoot();
        }
        if (subfirstarea == sqmeter && subsecondarea == sqinch)
        {
            SqMeterInches();
        }
        if (subfirstarea == sqmeter && subsecondarea == sqyard)
        {
            SqMeterYards();
        }
        if (subfirstarea == sqmeter && subsecondarea == sqmile)
        {
            SqMeterMiles();
        }
        if (subfirstarea == sqmile && subsecondarea == sqfoot)
        {
            SqMileFoot();
        }
        if (subfirstarea == sqmile && subsecondarea == sqinch)
        {
            SqMileInches();
        }
        if (subfirstarea == sqmile && subsecondarea == sqyard)
        {
            SqMileYards();
        }
        if (subfirstarea == sqmile && subsecondarea == sqmeter)
        {
            SqMileMeters();
        }
}
// Convert Sq Foot to Sq Inches
void SqFootInches()
{
    float sqftin;
    float totalsqftin;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Foot would you like converted to Sq. Inches: ");
    scanf("%f", &sqftin);
    printf("Converting %f Sq. Foot to Sq. Inches equals: \n", sqftin);
    totalsqftin = sqftin * 144;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Foot = %f Sq. Inches\n", sqftin, totalsqftin);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Sq Foot to Sq Meters
void SqFootMeters()
{
    float sqftmt;
    float totalsqftmt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Foot would you like converted to Sq. Meters: ");
    scanf("%f", &sqftmt);
    printf("Converting %f Sq. Foot to Sq. Meters equals: \n", sqftmt);
    totalsqftmt = sqftmt * 0.09290304;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Foot = %f Sq. Meters\n", sqftmt, totalsqftmt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Sq Foot to Sq Yards
void SqFootYards()
{
    float sqftyd;
    float totalsqftyd;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Foot would you like converted to Sq. Yards: ");
    scanf("%f", &sqftyd);
    printf("Converting %f Sq. Foot to Sq. Yards equals: \n", sqftyd);
    totalsqftyd = sqftyd * 0.111111111;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Foot = %f Sq. Yards\n", sqftyd, totalsqftyd);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Sq Foot to Sq Miles
void SqFootMiles()
{
    float sqftml;
    float totalsqftml;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Foot would you like converted to Sq. Miles: ");
    scanf("%f", &sqftml);
    printf("Converting %f Sq. Foot to Sq. Miles equals: \n", sqftml);
    totalsqftml = sqftml * 3.58700643 * pow(10,-8);
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Foot = %f Sq. Miles\n", sqftml, totalsqftml);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Sq Inch to Sq Foot
void SqInchFoot()
{
    float sqinft;
    float totalsqinft;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Inch would you like converted to Sq. Feet: ");
    scanf("%f", &sqinft);
    printf("Converting %f Sq. Inch to Sq. Feet equals: \n", sqinft);
    totalsqinft = sqinft * 0.00694444444;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Inch = %f Sq. Feet\n", sqinft, totalsqinft);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Sq Inch to Sq Meters
void SqInchMeters()
{
    float sqinmt;
    float totalsqinmt;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Inch would you like converted to Sq. Meters: ");
    scanf("%f", &sqinmt);
    printf("Converting %f Sq. Inch to Sq. Meters equals: \n", sqinmt);
    totalsqinmt = sqinmt * 0.00064516;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Inch = %f Sq. Meters\n", sqinmt, totalsqinmt);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Sq Inch to Sq Yards
void SqInchYards()
{
    float sqinyd;
    float totalsqinyd;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Inch would you like converted to Sq. Yards: ");
    scanf("%f", &sqinyd);
    printf("Converting %f Sq. Inch to Sq. Yards equals: \n", sqinyd);
    totalsqinyd = sqinyd * 0.000771604938;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Inch = %f Sq. Yards\n", sqinyd, totalsqinyd);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Sq Inch to Sq Miles
void SqInchMiles()
{
    float sqinml;
    float totalsqinml;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Inch would you like converted to Sq. Miles: ");
    scanf("%f", &sqinml);
    printf("Converting %f Sq. Inch to Sq. Miles equals: \n", sqinml);
    totalsqinml = sqinml * 2.49097669 * pow(10,-10);
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Inch = %f Sq. Miles\n", sqinml, totalsqinml);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Sq Meter to Sq Foot
void SqMeterFoot()
{
    float sqmtft;
    float totalsqmtft;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Meter would you like converted to Sq. Foot: ");
    scanf("%f", &sqmtft);
    printf("Converting %f Sq. Meter to Sq. Foot equals: \n", sqmtft);
    totalsqmtft = sqmtft * 10.7639104;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Meter = %f Sq. Foot\n", sqmtft, totalsqmtft);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Sq Meter to Sq Inches
void SqMeterInches()
{
    float sqmtin;
    float totalsqmtin;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Meter would you like converted to Sq. Inches: ");
    scanf("%f", &sqmtin);
    printf("Converting %f Sq. Meter to Sq. Inches equals: \n", sqmtin);
    totalsqmtin = sqmtin * 1550.0031;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Meter = %f Sq. Inches\n", sqmtin, totalsqmtin);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Sq Meter to Sq Yards
void SqMeterYards()
{
    float sqmtyds;
    float totalsqmtyds;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Meter would you like converted to Sq. Yards: ");
    scanf("%f", &sqmtyds);
    printf("Converting %f Sq. Meter to Sq. Yards equals: \n", sqmtyds);
    totalsqmtyds = sqmtyds * 1.19599005;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Meter = %f Sq. Yards\n", sqmtyds, totalsqmtyds);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Sq Meter to Sq Miles
void SqMeterMiles()
{
    float sqmtml;
    float totalsqmtml;
    
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Meter would you like converted to Sq. Miles: ");
    scanf("%f", &sqmtml);
    printf("Converting %f Sq. Meter to Sq. Miles equals: \n", sqmtml);
    totalsqmtml = sqmtml * 3.86102159 * pow(10,-7);
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Meter = %f Sq. Miles\n", sqmtml, totalsqmtml);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Sq Yard to Sq Foot
void SqYardFoot()
{

	float sqydft;
	float totalsqydft;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Yard would you like converted to Sq. Miles: ");
    scanf("%f", &sqydft);
    printf("Converting %f Sq. Yard to Sq. Miles equals: \n", sqydft);
    totalsqydft = sqydft * 9;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Yard = %f Sq. Miles\n", sqydft, totalsqydft);
    printf("-------------------------------------------------------------------------\n");
}	
// Convert Sq Yard to Sq Inches
void SqYardInches()
{

	float sqydin;
	float totalsqydin;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Yard would you like converted to Sq. Inches: ");
    scanf("%f", &sqydin);
    printf("Converting %f Sq. Yard to Sq. Inches equals: \n", sqydin);
    totalsqydin = sqydin * 1296;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Yard = %f Sq. Inches\n", sqydin, totalsqydin);
    printf("-------------------------------------------------------------------------\n");
}	
// Convert Sq Yard to Sq Meters
void SqYardMeters()
{

	float sqydmt;
	float totalsqydmt;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Yard would you like converted to Sq. Meters: ");
    scanf("%f", &sqydmt);
    printf("Converting %f Sq. Yard to Sq. Meters equals: \n", sqydmt);
    totalsqydmt = sqydmt * 0.83612736;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Yard = %f Sq. Meters\n", sqydmt, totalsqydmt);
    printf("-------------------------------------------------------------------------\n");
}	
// Convert Sq Yard to Sq Miles
void SqYardMiles()
{

	float sqydml;
	float totalsqydml;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Meter would you like converted to Sq. Miles: ");
    scanf("%f", &sqydml);
    printf("Converting %f Sq. Meter to Sq. Miles equals: \n", sqydml);
    totalsqydml = sqydml * 3.22830579 * pow(10,-7);
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Meter = %f Sq. Miles\n", sqydml, totalsqydml);
    printf("-------------------------------------------------------------------------\n");
}		
// Convert Sq Miles to Sq Foot
void SqMileFoot()
{

	float sqmlft;
	float totalsqmlft;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Miles would you like converted to Sq. Foot: ");
    scanf("%f", &sqmlft);
    printf("Converting %f Sq. Miles to Sq. Foot equals: \n", sqmlft);
    totalsqmlft = sqmlft * 27878400;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Miles = %f Sq. Foot\n", sqmlft, totalsqmlft);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Sq Miles to Sq Inches
void SqMileInches()
{

	float sqmlin;
	float totalsqmlin;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Meter would you like converted to Sq. Inches: ");
    scanf("%f", &sqmlin);
    printf("Converting %f Sq. Meter to Sq. Inches equals: \n", sqmlin);
    totalsqmlin = sqmlin * 4014489600;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Meter = %f Sq. Inches\n", sqmlin, totalsqmlin);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Sq Miles to Sq Yards
void SqMileYards()
{

	float sqmlyds;
	float totalsqmlyds;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Meter would you like converted to Sq. Miles: ");
    scanf("%f", &sqmlyds);
    printf("Converting %f Sq. Meter to Sq. Miles equals: \n", sqmlyds);
    totalsqmlyds = sqmlyds * 3097600;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Meter = %f Sq. Miles\n", sqmlyds, totalsqmlyds);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Sq Miles to Sq Meters
void SqMileMeters()
{

	float sqmlmt;
	float totalsqmlmt;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Sq. Meter would you like converted to Sq. Miles: ");
    scanf("%f", &sqmlmt);
    printf("Converting %f Sq. Meter to Sq. Miles equals: \n", sqmlmt);
    totalsqmlmt = sqmlmt * 2589988.11;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Sq. Meter = %f Sq. Miles\n", sqmlmt, totalsqmlmt);
    printf("-------------------------------------------------------------------------\n");
}

void Temperture()
{
        int subfirsttemp, subsecondtemp;
        int tcelsius = 1;
        int tfahr = 2;
        int tkelvin = 3;
        int trankine = 4;
        
	printf("\n");
	printf("Your selection is Temperature.\n");
	printf("[1] Celsius\n");
	printf("[2] Fahrenheit\n");
	printf("[3] Kelvin\n");
	printf("[4] Rankine\n");
	printf("Which would you like to covert: ");
	scanf("%d", &subfirsttemp);
        printf("Convert to: ");
        scanf("%d", &subsecondtemp);
        
        if (subfirsttemp != tcelsius && subfirsttemp != tfahr && subfirsttemp != tkelvin && subfirsttemp != trankine)
        {
            printf("\nERROR: You have picked an INCORRECT VALUE.\n");
        }
        if (subsecondtemp != tcelsius && subsecondtemp != tfahr && subsecondtemp != tkelvin && subsecondtemp != trankine)
        {
            printf("\nERROR: YOU HAVE PICKED AN INCORRECT VALUE.\n");
        }
        if (subfirsttemp == tcelsius && subsecondtemp == tfahr)
        {
        		CelFahr();
        }
        if (subfirsttemp == tcelsius && subsecondtemp == tkelvin)
        {
        		CelKel();
        }
        if (subfirsttemp == tcelsius && subsecondtemp == trankine)
        {
        		CelRank();
        }
        if (subfirsttemp == tfahr && subsecondtemp == tcelsius)
        {
        		FahrCel();
        }
        if (subfirsttemp == tfahr && subsecondtemp == tkelvin)
        {
        		FahrKel();
        }
        if (subfirsttemp == tfahr && subsecondtemp == trankine)
        {
        		FahrRank();
        }
        if (subfirsttemp == tfahr && subsecondtemp == trankine)
        {
        		FahrRank();
        }
        if (subfirsttemp == tkelvin && subsecondtemp == tcelsius)
        {
        		KelCel();
        }
        if (subfirsttemp == tkelvin && subsecondtemp == tfahr)
        {
        		KelFahr();
        }
        if (subfirsttemp == tkelvin && subsecondtemp == trankine)
        {
        		KelRank();
        }
        if (subfirsttemp == trankine && subsecondtemp == tcelsius)
        {
        		RankCel();
        }
        if (subfirsttemp == trankine && subsecondtemp == tfahr)
        {
        		RankFahr();
        }
        if (subfirsttemp == trankine && subsecondtemp == tkelvin)
        {
        		RankKel();
        }                                
			

}
// Convert Celsius to Fahrenheit
void CelFahr()
{

	float clfr;
	float totalclfr;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Celsius degrees would you like converted to Fahrenheit: ");
    scanf("%f", &clfr);
    printf("Converting %f Celsius degrees to Fahrenheit degrees: \n", clfr);
    totalclfr = clfr * 33.8;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Celsius = %f Fahrenheit\n", clfr, totalclfr);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Celsius to Kelvin
void CelKel()
{

	float clkl;
	float totalclkl;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Celsius degrees would you like converted to Kelvin: ");
    scanf("%f", &clkl);
    printf("Converting %f Celsius degrees to Kelvin: \n", clkl);
    totalclkl = clkl * 274.15;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Celsius = %f Kelvin\n", clkl, totalclkl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Celsius to Rankine
void CelRank()
{

	float clrk;
	float totalclrk;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Celsius degrees would you like converted to Rankine: ");
    scanf("%f", &clrk);
    printf("Converting %f Celsius degrees to Rankine: \n", clrk);
    totalclrk = clrk * 493.47;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Celsius = %f Rankine\n", clrk, totalclrk);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Fahrenheit to Celsius
void FahrCel()
{

	float frcl;
	float totalfrcl;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Fahrenheit degrees would you like converted to Celsius: ");
    scanf("%f", &frcl);
    printf("Converting %f Fahrenheit degrees to Kelvin: \n", frcl);
    totalfrcl = frcl * -17.2222222;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Fahrenheit = %f Kelvin\n", frcl, totalfrcl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Fahrenheit to Kelvin
void FahrKel()
{

	float frkl;
	float totalfrkl;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Fahrenheit degrees would you like converted to Kelvin: ");
    scanf("%f", &frkl);
    printf("Converting %f Fahrenheit degrees to Kelvin: \n", frkl);
    totalfrkl = frkl * 255.927778;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Fahrenheit = %f Kelvin\n", frkl, totalfrkl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Fahrenheit to Rankine
void FahrRank()
{

	float frrk;
	float totalfrrk;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Fahrenheit degrees would you like converted to Rankine: ");
    scanf("%f", &frrk);
    printf("Converting %f Fahrenheit degrees to Rankine: \n", frrk);
    totalfrrk = frrk * 460.67;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Fahrenheit = %f Rankine\n", frrk, totalfrrk);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Kelvin to Celsius
void KelCel()
{

	float klcl;
	float totalklcl;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Fahrenheit degrees would you like converted to Celsius: ");
    scanf("%f", &klcl);
    printf("Converting %f Fahrenheit degrees to Celsius: \n", klcl);
    totalklcl = klcl * -272.15;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Fahrenheit = %f Celsius\n", klcl, totalklcl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Kelvin to Fahrenheit
void KelFahr()
{

	float klfr;
	float totalklfr;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Kelvin degrees would you like converted to Fahrenheit: ");
    scanf("%f", &klfr);
    printf("Converting %f Kelvin degrees to Fahrenheit: \n", klfr);
    totalklfr = klfr * -457.87;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Kelvin = %f Fahrenheit\n", klfr, totalklfr);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Kelvin to Rankine
void KelRank()
{

	float klrk;
	float totalklrk;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Kelvin degrees would you like converted to Rankine: ");
    scanf("%f", &klrk);
    printf("Converting %f Kelvin degrees to Rankine: \n", klrk);
    totalklrk = klrk * 1.8;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Kelvin = %f Rankine\n", klrk, totalklrk);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Rankine to Celsius
void RankCel()
{

	float rkcl;
	float totalrkcl;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Rankine degrees would you like converted to Celsius: ");
    scanf("%f", &rkcl);
    printf("Converting %f Rankine degrees to Celsius: \n", rkcl);
    totalrkcl = rkcl * -272.594444;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Rankine = %f Celsius\n", rkcl, totalrkcl);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Rankine to Fahrenheit
void RankFahr()
{

	float rkfr;
	float totalrkfr;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Rankine degrees would you like converted to Fahrenheit: ");
    scanf("%f", &rkfr);
    printf("Converting %f Rankine degrees to Fahrenheit: \n", rkfr);
    totalrkfr = rkfr * -458.67;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Rankine = %f Fahrenheit\n", rkfr, totalrkfr);
    printf("-------------------------------------------------------------------------\n");
}
// Convert Rankine to Kelvin
void RankKel()
{

	float rkkl;
	float totalrkkl;
	
    printf("\n");
    printf("--------------------------------------------------------------------------");
    printf("\nHow many Rankine degrees would you like converted to Kelvin: ");
    scanf("%f", &rkkl);
    printf("Converting %f Rankine degrees to Kelvin: \n", rkkl);
    totalrkkl = rkkl * 0.555555556;
    printf("-------------------------------------------------------------------------\n");
    printf("%f Rankine = %f Kelvin\n", rkkl, totalrkkl);
    printf("-------------------------------------------------------------------------\n");
}


