 // Downloaded mods:
 // E:\Steam\steamapps\common\Arma 3\!Workshop

// Example weapon cfg:
// https://community.bistudio.com/wiki/Arma_3:_Sound:_ExampleWeaponConfig
 
 // New sound config as of V1.24:
 // https://community.bistudio.com/wiki/Arma_3:_Weapon_Config_Guidelines#Muzzle_accessories
// Not applicable???
 
 class CfgPatches
 {
 	class GoatLauncher	// Launches goats
 	{
 		units[] = {};
 		weapons[] = { "goatLauncher_Weapon" };
 		requiredVersion = 0.1;
 		requiredAddons[] = {};
		magazines[] = {"goatLauncher_140Rnd_PaintBall_blau", "goatLauncher_reg_140Rnd_PaintBall_blau"};
		//weapons[] = {"gun_goatLauncher_Weapon_angel_rasta_F"};
 	};
 };

 class cfgSoundShaders //detailed Infos on cfgSoundShaders can be found [[Arma_3_Sound:_cfgSoundShaders|on the relevant WIKI page]]
 {
	 //###################################### SHOTS ######################################
	 class RB_Goat_Launcher_Closure_SoundShader
	 {//you can use wav/wss/ogg, ogg will have a small delay before playback (not too good for weapons/explosions)
		 samples[] = {  
			 {"\@GoatLauncher\addons\GoatLauncher\sounds\pipedrum1.wav",1},
			 {"\@GoatLauncher\addons\GoatLauncher\sounds\pipedrum2.wav",1},
			 {"\@GoatLauncher\addons\GoatLauncher\sounds\pipedrum3.wav",1},
			 {"\@GoatLauncher\addons\GoatLauncher\sounds\pipedrum4.wav",1},
			 {"\@GoatLauncher\addons\GoatLauncher\sounds\pipedrum1.ogg",1}
		 };

		 volume = 1.0; //more info on this and other soundShader parameters are in the relevant wiki pages on soundShaders
		 range = 5;
		 rangeCurve = "closeShotCurve";
	 };
	 class RB_Goat_Launcher_closeShot_SoundShader
	 {
		 samples[] = {
			 {"\@GoatLauncher\addons\GoatLauncher\sounds\goat1.wav",1},
			 {"\@GoatLauncher\addons\GoatLauncher\sounds\goat2.wav",1},
			 {"\@GoatLauncher\addons\GoatLauncher\sounds\goat3.wav",1},
			 {"\@GoatLauncher\addons\GoatLauncher\sounds\goat_scream.wav",1}
		 };
		
		 volume = 1.0;
		 range = 50;
		 rangeCurve = "closeShotCurve";
	 };
	 class RB_Goat_Launcher_midShot_SoundShader
	 {
		 samples[] = {
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat1.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat2.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat3.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat_scream.wav",1}
		 };

		 volume = 0.7943282;
		 range = 1800;
		 rangeCurve[] = { {0,0.2},{50,1},{300,0},{1800,0} };
	 };
	 class RB_Goat_Launcher_distShot_SoundShader
	 {
		 samples[] = {
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat1.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat2.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat3.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat_scream.wav",1}
		 };

		 volume = 1.0;
		 range = 1800;
		 rangeCurve[] = { {0,0},{50,0},{300,1},{1800,1} };
	 };

	 //###################################### TAILS ######################################
	 class RB_Goat_Launcher_tailInterior_SoundShader
	 {
		 samples[] = {
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat1.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat2.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat3.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat_scream.wav",1}
		 };

		 volume = "interior";
		 range = 500;
		 limitation = 0;
	 };
	 class RB_Goat_Launcher_tailTrees_SoundShader
	 {
		 samples[] = {
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat1.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat2.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat3.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat_scream.wav",1}
		 };

		 volume = "(1-interior/1.4)*trees/3";
		 range = 1800;
		 limitation = 1;
	 };
	 class RB_Goat_Launcher_tailForest_SoundShader
	 {
		 samples[] = {
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat1.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat2.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat3.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat_scream.wav",1}
		 };

		 volume = "(1-interior/1.4)*forest/3";
		 range = 1800;
		 limitation = 1;
	 };
	 class RB_Goat_Launcher_tailMeadows_SoundShader
	 {
		 samples[] = {
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat1.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat2.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat3.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat_scream.wav",1}
		 };

		 volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		 range = 1800;
		 limitation = 1;
	 };
	 class RB_Goat_Launcher_tailHouses_SoundShader
	 {
		 samples[] = {
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat1.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat2.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat3.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat_scream.wav",1}
		 };

		 volume = "(1-interior/1.4)*houses/3";
		 range = 1200;
		 limitation = 1;
	 };
	 class RB_Goat_Launcher_silencerShot_SoundShader
	 {
		 samples[] = {
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat1.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat2.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat3.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat_scream.wav",1}
		 };

		 volume = 1.0;
		 range = 150;
		 rangeCurve = "closeShotCurve";
	 };
	 class RB_Goat_Launcher_silencerTailForest_SoundShader
	 {
		 samples[] = {
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat1.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat2.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat3.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat_scream.wav",1}
		 };

		 volume = "(1-interior/1.4)*forest/3";
		 range = 150;
		 rangeCurve[] = { {0,1},{150,0.3} };
		 limitation = 1;
	 };
	 class RB_Goat_Launcher_silencerTailHouses_SoundShader
	 {
		 samples[] = {
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat1.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat2.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat3.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat_scream.wav",1}
		 };

		 volume = "(1-interior/1.4)*houses/3";
		 range = 150;
		 rangeCurve[] = { {0,1},{150,0} };
		 limitation = 1;
	 };
	 class RB_Goat_Launcher_silencerTailInterior_SoundShader
	 {
		 samples[] = {
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat1.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat2.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat3.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat_scream.wav",1}
		 };

		 volume = "interior";
		 range = 150;
		 rangeCurve[] = { {0,1},{50,0.3},{150,0} };
		 limitation = 1;
	 };
	 class RB_Goat_Launcher_silencerTailMeadows_SoundShader
	 {
		 samples[] = {
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat1.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat2.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat3.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat_scream.wav",1}
		 };

		 volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		 range = 150;
		 rangeCurve[] = { {0,1},{150,0.3} };
		 limitation = 1;
	 };
	 class RB_Goat_Launcher_silencerTailTrees_SoundShader
	 {
		 samples[] = {
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat1.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat2.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat3.wav",1},
			 {"@GoatLauncher\addons\GoatLauncher\sounds\goat_scream.wav",1}
		 };

		 volume = "(1-interior/1.4)*trees/3";
		 range = 150;
		 rangeCurve[] = { {0,1},{150,0.3} };
		 limitation = 1;
	 };
 };


 class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
 {
	 class RB_Goat_Launcher_Shot_SoundSet
	 {
		 soundShaders[] = { "RB_Goat_Launcher_Closure_SoundShader","RB_Goat_Launcher_closeShot_SoundShader","RB_Goat_Launcher_midShot_SoundShader","RB_Goat_Launcher_distShot_SoundShader","RB_Goat_Launcher_tailInterior_SoundShader" };
		 volumeFactor = 1.6;
		 volumeCurve = "InverseSquare2Curve";
		 sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		 distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		 spatial = 1;
		 doppler = 0;
		 loop = 0;
	 };
	 class RB_Goat_Launcher_Tail_SoundSet
	 {
		 soundShaders[] = { "RB_Goat_Launcher_tailTrees_SoundShader","RB_Goat_Launcher_tailForest_SoundShader","RB_Goat_Launcher_tailMeadows_SoundShader","RB_Goat_Launcher_tailHouses_SoundShader" };
		 volumeFactor = 1;
		 volumeCurve = "InverseSquare2Curve";
		 frequencyRandomizer = 1;
		 sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		 distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		 spatial = 1;
		 doppler = 0;
		 loop = 0;
		 soundShadersLimit = 2;
	 };
 };


class Mode_SemiAuto;		
class Mode_FullAuto;
class BaseSoundModeType;

 class CfgWeapons // RB COMMENTED 16 APRIL 2022 debug attempt
 {
	/*external*/ class Weapon_tippmann_x7_F;
	class goatLauncher_Weapon : Weapon_tippmann_x7_F 
	{
		descriptionshort = "Launches Goats";
		displayname = "Goat Launcher";
		magazines[] = 
		{
			"goatLauncher_140Rnd_PaintBall_blau", 
			"goatLauncher_reg_140Rnd_PaintBall_blau"
		};
		
		modes[] = {Single, Auto};
		
		class Single: Mode_SemiAuto
		{
			soundContinuous = 0; // TODO: check if NA ???????
			
			sounds[] = 
			{ 
				"StandardSound",
				"SilencedSound"
			};
			
			/*
			class BaseSoundModeType // change to pb gun sound base?
			{

				weaponSoundEffect = "DefaultRifle";
				
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2", 1, 1, 10 };
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3", 1, 1, 10 };
				soundClosure[] = {closure1, 0.5, closure2,0.5};
			};
			*/
			
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB_Goat_Launcher_Shot_SoundSet","RB_Goat_Launcher_Tail_SoundSet" };

				/*
				begin1[] = {"GoatLauncherGoatLauncher\sounds\goat1", 1, 1, 500 };
				begin2[] = {"GoatLauncherGoatLauncher\sounds\goat2", 1, 1, 500 };
				begin3[] = {"GoatLauncherGoatLauncher\sounds\goat3", 1, 1, 500 };
				begin4[] = {"GoatLauncherGoatLauncher\sounds\goat_scream", 1, 1, 500 };
				soundBegin[] = {begin1, 0.325, begin2, 0.325, begin3, 0.325, begin4, 0.025};
				*/
			};
			
			class SilencedSound: BaseSoundModeType // Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = { "RB_Goat_Launcher_Shot_SoundSet","RB_Goat_Launcher_Tail_SoundSet" };

				/*
				begin1[] = {"GoatLauncherGoatLauncher\sounds\goat1", 1, 1, 500 };
				begin2[] = {"GoatLauncherGoatLauncher\sounds\goat2", 1, 1, 500 };
				begin4[] = {"GoatLauncherGoatLauncher\sounds\goat_scream", 1, 1, 500 };
				begin3[] = {"GoatLauncherGoatLauncher\sounds\goat3", 1, 1, 500 };
				soundBegin[] = {"begin1", 0.325, "begin2", 0.325, "begin3", 0.325, "begin4", 0.025};
				*/
			};
		};
		
		class Auto: Mode_FullAuto
		{
			soundContinuous = 0; // TODO: check if NA ???????

			sounds[] =
			{
				"StandardSound", 
				"SilencedSound"
			};
			
			/*
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",1,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",1,1,10};
				soundClosure[] = {closure1, 0.5, closure2, 0.5};
			};
			*/
			
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB_Goat_Launcher_Shot_SoundSet","RB_Goat_Launcher_Tail_SoundSet" };

				/*
				begin1[] = {"GoatLauncherGoatLauncher\sounds\goat1", 1, 1, 700};
				begin2[] = {"GoatLauncherGoatLauncher\sounds\goat2", 1, 1, 700};
				begin4[] = {"GoatLauncherGoatLauncher\sounds\goat_scream", 1, 1, 700};
				begin3[] = {"GoatLauncherGoatLauncher\sounds\goat3", 1, 1, 700};
				soundBegin[] = {begin1, 0.325, begin2, 0.325, begin3, 0.325, begin4, 0.025};
				*/
			};
			
			class SilencedSound: BaseSoundModeType // Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = { "RB_Goat_Launcher_Shot_SoundSet","RB_Goat_Launcher_Tail_SoundSet" };

				/*
				begin1[] = {"GoatLauncherGoatLauncher\sounds\goat1", 1, 1, 700};
				begin2[] = {"GoatLauncherGoatLauncher\sounds\goat2", 1, 1, 700};
				begin4[] = {"GoatLauncherGoatLauncher\sounds\goat_scream", 1, 1, 700};
				begin3[] = {"GoatLauncherGoatLauncher\sounds\goat3", 1, 1, 700};
				soundBegin[] = {begin1, 0.325, begin2, 0.325, begin3, 0.325, begin4, 0.025};
				*/
			};
		};
		
	};
};

class CfgMagazines {
	class 140Rnd_PaintBall_blau; // External
	
	class goatLauncher_reg_140Rnd_PaintBall_blau : 140Rnd_PaintBall_blau { 
			ammo = "goatLauncher_std_Caseless_blau";
	}; // normal blue pbs
	
	class goatLauncher_140Rnd_PaintBall_blau : 140Rnd_PaintBall_blau {
		ammo = "goatLauncher_Caseless_blau";
		descriptionshort = "A bottle of goats";
		displayName = "140Rnd Goats";
	}; // the real goats
};

class CfgAmmo {
	
	class Caseless_blau; // External
	class goatLauncher_std_Caseless_blau : Caseless_blau {}; // Standard round
	
	class goatLauncher_Caseless_blau : Caseless_blau { // Goat round
		model = "\A3\animals_f_beta\Goat\Goat_F.p3d";
		timeToLive = 20;
		soundFly[]={"@GoatLauncher\addons\GoatLauncher\sounds\goat3.wav",0,1.5};
		explosionEffects = "GrenadeExplosion";
		explosionType = "explosive";
		explosive = 1;
		explosionSoundEffect = "DefaultExplosion";
		explosionForceCoef = 1;
		explosionEffectsRadius = 3;
		CraterEffects = "GrenadeCrater";
		craterShape = "";
		hit = 2;//
		indirectHit = 2;
		indirectHitRange = 4;
		hitArmor[] = {"soundHit",1};
		hitBuilding[] = {"soundHit",1};
		hitConcrete[] = {"soundHit",1};
		hitDefault[] = {"soundHit",1};
		hitFoliage[] = {"soundHit",1};
		hitGlass[] = {"soundHit",1};
		hitGlassArmored[] = {"soundHit",1};
		hitGroundHard[] = {"soundHit",1};
		hitGroundSoft[] = {"soundHit",1};
		hitIron[] = {"soundHit",1};
		hitMan[] = {"soundHit",1};
		hitMetal[] = {"soundHit",1};
		hitMetalplate[] = {"soundHit",1};
		hitOnWater = 0;
		hitPlastic[] = {"soundHit",1};
		hitRubber[] = {"soundHit",1};
		hitTyre[] = {"soundHit",1};
		hitWater[] = {"soundHit",1};
		hitWood[] = {"soundHit",1};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundActivation[] = {};
		soundDeactivation[] = {};
		soundEngine[] = {"",1,1};
		soundHit[] = {"",1,1};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_01",2,1,1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_02",2,1,1500};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_03",2,1,1500};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_04",2,1,1500};
		SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet","GrenadeHe_Tail_SoundSet","Explosion_Debris_SoundSet"};
		soundTrigger[] = {};
		supersonicCrackFar[] = {"",1,1};
		supersonicCrackNear[] = {"",1,1};
	};
};