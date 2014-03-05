#include "basicDefines.hpp"
class CfgPatches {
	class CAWeapons_E_AK {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CAWeapons_AK"};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons {
	class GrenadeLauncher;
	class Rifle;
	class AK_BASE: Rifle{};
	class AKS_BASE: AK_BASE {
		class Single;
		class Burst;
		class FullAuto;
	};

	class AK_47_M: AK_BASE {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;

		scope = 2;
		model="\ca\weapons_e\AK\akm";

		picture="\ca\weapons\AK\Data\Equip\W_akm_CA.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {30Rnd_762x39_AK47, 30Rnd_762x39_SA58};
		displayname = $STR_DN_AK47M;
		dexterity = 1.57; // 4.3kg
		handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex = 2;
		class Single:Mode_SemiAuto {
			begin1[]={"ca\sounds\weapons\rifles\ak_single1", db5, 1,1000};
			soundBegin[]={begin1,1};
			reloadTime=0.1;
			recoil =          "recoil_single_primary_5outof10";
			recoilProne =     "recoil_single_primary_prone_5outof10";
			dispersion = 0.0018;
			minRange=2;minRangeProbab=0.30;
			midRange=200;midRangeProbab=0.7;
			maxRange=400;maxRangeProbab=0.05;
		};
		class Burst:Mode_Burst {
			begin1[]={"ca\sounds\weapons\rifles\ak_single1", db5, 1,1000};
			soundBegin[]={begin1,1};
			soundBurst = false;
			reloadTime=0.1;
			ffCount=3;
			recoil =          "recoil_auto_primary_4outof10";
			recoilProne =     "recoil_auto_primary_prone_4outof10";
			dispersion = 0.0018;
			minRange=1;minRangeProbab=0.30;
			midRange=100;midRangeProbab=0.7;
			maxRange=200;maxRangeProbab=0.05;
			showToPlayer = false;
		};
		class FullAuto:Mode_FullAuto {
			begin1[]={"ca\sounds\weapons\rifles\ak_single1", db5, 1,1000};
			soundBegin[]={begin1,1};
			reloadTime=0.1;
			ffCount=30;
			recoil =          "recoil_auto_primary_5outof10";
			recoilProne =     "recoil_auto_primary_prone_5outof10";
			dispersion = 0.0018;
			minRange=0;minRangeProbab=0.10;
			midRange=100;midRangeProbab=0.7;
			maxRange=200;maxRangeProbab=0.05;
		};
		class Library {libTextDesc = $STR_LIB_AK47M;};
		descriptionShort = $STR_DSS_AK47M;
	};

	class AK_47_S: AK_47_M {
		scope = 2;
		model="\ca\weapons_e\AK\ak47s";
		displayName = $STR_DN_AK47S;
		handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};
		picture="\ca\weapons\AK\Data\Equip\W_AK47s_CA.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {libTextDesc = $STR_LIB_AK47S;};
		descriptionShort = $STR_DSS_AK47S;
	};


	/*	class AKS_GOLD: AK_47_S {
		model="\ca\weapons_e\AK\ak47s_gold";
		picture="\ca\weapons\AK\Data\Equip\W_AK47s_gold_CA.paa";
	};    */


	class AK_74: AK_BASE {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;

		scope = 2;
		model="\ca\weapons_e\AK\AK_74";
		displayName = $STR_DN_AK74;
		handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};
		picture="\ca\weapons\AK\Data\Equip\w_ak74_ca.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {libTextDesc = $STR_LIB_AK74;};
		descriptionShort = $STR_DSS_AK74;
	};
	class AK_74_GL: AK_BASE {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;

		scope = 2;
		model="\ca\weapons_e\AK\AK_74_GL";
		displayName= $STR_EP1_DN_cfgWeapons_AK_74_GL;
		picture="\ca\weapons\AK\Data\Equip\W_AK74gl_CA.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";

		handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};

		muzzles[] = {this, GP25Muzzle};
		dexterity = 1.5; // 4.8kg
		class Library {libTextDesc = $STR_LIB_AK74_GL;};
		descriptionShort = $STR_DSS_AK74_GL;
	};

	class AK_74_GL_kobra: AK_74_GL {
		scope = 2;
		model="\ca\weapons_e\AK\ak74_vog_kobra";
		displayName = $STR_EP1_DN_cfgWeapons_AK_74_GL_kobra;
		picture="\ca\weapons_E\AK\data\Equip\w_AK74GL_kobra_Ca.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {libTextDesc = $STR_EP1_LIB_AK_74_GL_kobra_Library;}; //TODO
		descriptionShort = $STR_EP1_DSS_AK_74_GL_kobra; //TODO
	};

	/*
	class AK_74_kobra: AK_BASE {
		scope = 2;
		model="\ca\weapons_e\AK\ak_74_kobra";
		displayName = $STR_DN_AK_74_KOBRA;
		picture="\ca\weapons\AK\Data\Equip\w_AK74_kobra_CA.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {libTextDesc = $STR_EP1_LIB_AK_74_kobra}; //TODO
		descriptionShort = $STR_EP1_DSS_AK_74_kobra; //TODO
	};   */
/*	class AK_107_kobra: AK_107_BASE {
		scope = 2;
		model="\ca\weapons_e\AK\AK107_kobra";
		displayName = $STR_DN_AK_107_KOBRA;
		handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};
		picture="\ca\weapons\AK\Data\Equip\w_AK107_kobra_CA.paa"; // TODO add picture
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {libTextDesc = $STR_LIB_AK107_kobra;};
		descriptionShort = $STR_DSS_AK107_kobra;

	};
	class AK_107_GL_kobra: AK_107_BASE {
		scope = 2;
		model="\ca\weapons_e\AK\AK107_GL_kobra";
		displayName = $STR_DN_AK_107_GL_KOBRA;
		picture="\ca\weapons\AK\Data\Equip\w_AK107_GL_kobra_CA.paa"; // TODO proper picture
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		dexterity = 1.5; // 4.8kg

		handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};
		muzzles[] = {this, GP25Muzzle}; // "this" is replacement for self "AK_107_GL_kobra"
		class Library {libTextDesc = $STR_LIB_AK107_GL_kobra;};
		descriptionShort = $STR_DSS_AK107_GL_kobra;
	};
	class AK_107_GL_pso: AK_107_GL_kobra {
		scope = 2;
		model="\ca\weapons_e\AK\AK107_GL_pso";
		displayName = $STR_DN_AK_107_GL_PSO;
		picture="\ca\weapons\AK\Data\Equip\w_AK107_GL_pso_CA.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";

		handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};

		modelOptics = "\ca\weapons\AK\pso_optics";
		opticsPPEffects[]={"OpticsCHAbera2","OpticsBlur3"};
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		opticsZoomInit=0.0623;
		opticsZoomMin=0.0623;
		opticsZoomMax=0.0623;
		distanceZoomMin=200;
		distanceZoomMax=200;
		class Library {libTextDesc = $STR_LIB_AK107_GL_pso;};
		descriptionShort = $STR_DSS_AK107_GL_pso;
	};
	class AK_107_pso: AK_107_BASE {
		scope = 2;
		model="\ca\weapons_e\AK\AK107_pso";
		displayName = $STR_DN_AK_107_PSO;
		handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};
		picture="\ca\weapons\AK\Data\Equip\w_AK107_pso_CA.paa"; // TODO add proper picture
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "\ca\weapons\AK\pso_optics";
		opticsPPEffects[]={"OpticsCHAbera2","OpticsBlur3"};
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		opticsZoomInit=0.0623;
		opticsZoomMin=0.0623;
		opticsZoomMax=0.0623;
		distanceZoomMin=200;
		distanceZoomMax=200;
		class Library {libTextDesc = $STR_LIB_AK107_pso;};
		descriptionShort = $STR_DSS_AK107_pso;
	};    */
	class AK_107_BASE: AK_BASE {
		class Single;
		class Burst;
		class FullAuto;
	};
	class AK_107_pso:AK_107_BASE {
		class Single : Single {
			minRange=2;minRangeProbab=0.30;
			midRange=300;midRangeProbab=0.7;
			maxRange=600;maxRangeProbab=0.04;
		};
		class Burst : Burst {
			minRange=1;minRangeProbab=0.30;
			midRange=150;midRangeProbab=0.7;
			maxRange=300;maxRangeProbab=0.05;
		};
		class FullAuto : FullAuto {
			minRange=0;minRangeProbab=0.10;
			midRange=25;midRangeProbab=0.7;
			maxRange=70;maxRangeProbab=0.05;
		};
	};

	class AKS_74: AKS_BASE {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;

		scope = 2;
		model="\ca\weapons_e\AK\aks74";
		displayName = $STR_DN_AKS_74;
		picture="\ca\weapons_E\AK\Data\Equip\w_AKS74_CA.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {libTextDesc = $STR_EP1_LIB_AKS_74;};
		descriptionShort = $STR_EP1_DSS_AKS_74;
	};

	class AKS_74_kobra: AKS_BASE {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;

		scope = 2;
		model="\ca\weapons_e\AK\aks74_kobra";
		displayName = $STR_DN_AKS_74_KOBRA;
		handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};
		picture="\ca\weapons\AK\Data\Equip\w_AKS74_kobra_CA.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {libTextDesc = $STR_EP1_LIB_AKS74_kobra;};
		descriptionShort = $STR_EP1_DSS_AKS74_kobra;
	};
	class AKS_74_pso: AKS_BASE {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;

		scope = 2;
		model="\ca\weapons_e\AK\aks74pso";
		picture="\ca\weapons\AK\Data\Equip\W_aks74pso_CA.paa";
		UiPicture="\CA\weapons\data\Ico\i_sniper_CA.paa";
		dexterity = 1.6;
		modelOptics = "\ca\weapons\AK\pso_optics";
		opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
		opticsFlare = true;
		opticsDisablePeripherialVision = true;
		opticsZoomMin=0.0623;
		opticsZoomMax=0.0623;
		distanceZoomMin=200;
		distanceZoomMax=200;
		class OpticsModes {
			class Scope {
				opticsID = 1;
				useModelOptics = true;
				opticsZoomMin=0.0623;
				opticsZoomMax=0.0623;
				opticsZoomInit=0.0623;
				opticsPPEffects[]={};
				opticsDisablePeripherialVision = true;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				distanceZoomMin=200;
				distanceZoomMax=200;
				cameraDir = "";
			};
			/*
			class Ironsights:Scope {
				opticsID = 2;
				useModelOptics = false;
				opticsFlare = false;
				opticsDisablePeripherialVision = false;
				opticsZoomMin=0.25;
				opticsZoomMax=1.1;
				opticsZoomInit=0.5;
				memoryPointCamera = "eye";
				visionMode[] = {};
			};
			*/
		};
		displayname = $STR_DN_aks74pso;
		class Library {libTextDesc = $STR_LIB_AKS74_pso;};
		descriptionShort = $STR_DSS_AKS74_pso;
		handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};

		class Single : Single {
			minRange=2;minRangeProbab=0.30;
			midRange=300;midRangeProbab=0.7;
			maxRange=600;maxRangeProbab=0.04;
		};
		class Burst : Burst {
			minRange=1;minRangeProbab=0.30;
			midRange=150;midRangeProbab=0.7;
			maxRange=300;maxRangeProbab=0.05;
		};
		class FullAuto : FullAuto {
			minRange=0;minRangeProbab=0.10;
			midRange=25;midRangeProbab=0.7;
			maxRange=70;maxRangeProbab=0.05;
		};
	};
	class AKS_74_U: AKS_BASE {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;

		scope = 2;
		model="\ca\weapons_e\AK\aks74u";
		picture="\ca\weapons\AK\Data\Equip\w_aks74u_ca.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName=$STR_DN_AKS74_U;
		class Library {libTextDesc = $STR_LIB_AKS74_U;};
		descriptionShort = $STR_DSS_AKS74_U;
		handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};
	};
	/*
	class AKS_74_UN: AKS_BASE {
		scope = 2;
		model="\ca\weapons_e\AK\aks74un";

		fireLightDuration = 0.000;
		fireLightIntensity = 0.000;

		// tweek aiming in patch 1.02
		distanceZoomMin=100;
		distanceZoomMax=100;

		dexterity = 1.8;

		picture="\ca\weapons\AK\Data\Equip\w_aks74un_ca.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";

		class Single : Single {
			sound[]={\ca\Weapons\Data\Sound\AKSD_1,db-10,1};
			dispersion=0.00175; // 0.0035
			minRange=2;minRangeProbab=0.10;
			midRange=40;midRangeProbab=0.7;
			maxRange=150;maxRangeProbab=0.05;
		};
		class Burst : Burst {
			sound[]={\ca\Weapons\Data\Sound\AKSD_1,db-10,1};
			dispersion=0.00175;
			minRange=1;minRangeProbab=0.10;
			midRange=30;midRangeProbab=0.7;
			maxRange=60;maxRangeProbab=0.05;
		};
		class FullAuto : FullAuto {
			sound[]={\ca\Weapons\Data\Sound\AKSD_1,db-10,1};
			dispersion=0.00175;
			minRange=0;minRangeProbab=0.10;
			midRange=20;midRangeProbab=0.7;
			maxRange=40;maxRangeProbab=0.05;
		};

		displayName=$STR_DN_AKS74_UN;
		drySound[]={\ca\Weapons\Data\Sound\AK47_dry_v1,db-80,1};	// empty magazine
		reloadMagazineSound[]={\ca\Weapons\Data\Sound\AK47_fill_v3,db-65,1};

		class Library {libTextDesc = $STR_LIB_AKS74_UN;};
		descriptionShort = $STR_EP1_DSS_AKS_74_UN;//TODO
	};
	*/
/*	class AKS_74_UN_kobra: AKS_BASE {
		scope = 2;
		model="\ca\weapons_e\AK\aks74un_kobra";
		displayName = $STR_DN_AKS_74_UN_KOBRA;
		picture="\ca\weapons\AK\Data\Equip\w_aks74un_kobra_CA.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};
		magazines[] = {30Rnd_545x39_AKSD};
		distanceZoomMin=100;
		distanceZoomMax=100;

		class Single : Single {
			begin1[]={"ca\sounds\weapons\rifles\rifle-silence-single1", db5, 1,50};
			soundBegin[]={begin1,1};
		};
		class FullAuto : FullAuto {
			begin1[]={"ca\sounds\weapons\rifles\rifle-silence-single1", db5, 1,50};
			soundBegin[]={begin1,1};
		};
		class Library {libTextDesc = $STR_LIB_AKS74_UN_kobra;};
		descriptionShort = $STR_DSS_AKS74_UN_kobra;
	};  */
	class RPK_74: AK_74 {
		scope = 2;
		model = "\ca\weapons_E\AK\RPK_74";
		picture="\CA\weapons\AK\data\Equip\w_RPK_74_CA.paa"; // TODO image
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa"; // TODO proper image
		magazines[] = {75Rnd_545x39_RPK,30Rnd_545x39_AK,30Rnd_545x39_AKSD};
		displayname = $STR_DN_RPK_74;

		aiDispersionCoefY=14.0; // 7
		aiDispersionCoefX=14.0;

		dexterity = 1.21;

		handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};

		modes[] = { manual, close, short, medium, far,Single};
		class FullAuto : Mode_FullAuto {
			begin1[]={"ca\sounds\weapons\rifles\AK74_single1", db5, 1,1000};
			soundBegin[]={begin1,1};
			reloadTime=0.1;
			ffCount=30;
			recoil =          "recoil_auto_primary_4outof10";
			recoilProne =     "recoil_auto_primary_prone_4outof10";
			dispersion=0.00125;
			minRange=0;minRangeProbab=0.10;
			midRange=150;midRangeProbab=0.7;
			maxRange=300;maxRangeProbab=0.05;
		};

		class manual: Mode_FullAuto {
			reloadTime = 0.1;
			recoil =          "recoil_auto_primary_4outof10";
			recoilProne =     "recoil_auto_machinegun_prone_3outof10";
			dispersion=0.0012;
			begin1[]={"ca\sounds\weapons\rifles\AK74_single1", db5, 1,1000};
			soundBegin[]={begin1,1};
			soundContinuous = 0;
			soundBurst = false;
			minRange=0;minRangeProbab=0.30;
			midRange=5;midRangeProbab=0.58;
			maxRange=10;maxRangeProbab=0.04;
			showToPlayer = true;
			displayName = "";
		}
		class close: manual {
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange=10;minRangeProbab=0.05;
			midRange=20;midRangeProbab=0.58;
			maxRange=50;maxRangeProbab=0.04;
			showToPlayer = false;
		};
		class short: close {
			burst = 8;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 300;
			minRange=50;minRangeProbab=0.05;
			midRange=200;midRangeProbab=0.58;
			maxRange=400;maxRangeProbab=0.04;

		};
		class medium: close {
			burst = 12;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 600;
			minRange=200;minRangeProbab=0.05;
			midRange=400;midRangeProbab=0.58;
			maxRange=600;maxRangeProbab=0.04;

		};
		class far: close {
			burst = 16;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 1000;
			minRange=400;minRangeProbab=0.05;
			midRange=600;midRangeProbab=0.4;
			maxRange=800;maxRangeProbab=0.01;

		};
		class Single : Mode_SemiAuto {
			begin1[]={"ca\sounds\weapons\rifles\AK74_single1", db5, 1,1000};
			soundBegin[]={begin1,1};
			reloadTime=0.1;
			recoil =          "recoil_single_primary_4outof10";
			recoilProne =     "recoil_single_primary_prone_4outof10";
			dispersion=0.00125; // 0.0025
			aiRateOfFireDistance = 650;
			minRange=400;minRangeProbab=0.0;  // only player
			midRange=600;midRangeProbab=0.0;
			maxRange=800;maxRangeProbab=0.0;
		};
		class Library {libTextDesc = $STR_LIB_RPK_74;};
		descriptionShort = $STR_DSS_RPK_74;
	};
	class AKS_74_NSPU: AKS_BASE {
		scope = 2;
		model="ca\weapons_e\AK\aks74_nspu";
		picture="\ca\weapons_E\data\icons\w_AKS74_nspu_CA.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";   // todo
		modelOptics = "\Ca\weapons_E\NV_nspu_optic.p3d";
		displayName=$STR_EP1_DN_cfgWeapons_AKS_74_NSPU;
		class Library {libTextDesc = $STR_EP1_LIB_AKS_74_NSPU;};
		descriptionShort = $STR_EP1_DSS_AKS_74_NSPU;
		handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};
		class OpticsModes {
			class NSPU {
				opticsID = 1;
				useModelOptics = true;
				opticsZoomMin=0.07082152974;// 3.5 zoom
				opticsZoomMax=0.07082152974;
				opticsZoomInit=0.070821529;
				opticsPPEffects[]={};
				opticsDisablePeripherialVision = true;
				memoryPointCamera = "opticView";
				visionMode[] = {"NVG"};
				opticsFlare = true;
				distanceZoomMin=300;
				distanceZoomMax=300;
				cameraDir = "";
			};
			class Ironsights:NSPU {
				opticsID = 2;
				useModelOptics = false;
				opticsFlare = false;
				opticsDisablePeripherialVision = false;
				opticsZoomMin=0.25;
				opticsZoomMax=1.1;
				opticsZoomInit=0.5;
				memoryPointCamera = "eye";
				visionMode[] = {};
			};
		};

	};
	class AKS_74_GOSHAWK: AKS_BASE {
		scope = 2;
		model="ca\weapons_e\AK\aks74_goshawk";
		picture="\ca\weapons_E\data\icons\w_AKS74_goshawk_CA.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";   // todo
		modelOptics = "\Ca\weapons_E\TI_goshawk_optic.p3d";
		displayName=$STR_EP1_DN_cfgWeapons_AKS_74_GOSHAWK;
		class Library {libTextDesc = $STR_EP1_LIB_AKS_74_GOSHAWK;};
		descriptionShort = $STR_EP1_DSS_AKS_74_GOSHAWK;
		handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};
		opticsZoomMin=0.06944444;// 3.6 zoom
		opticsZoomMax=0.06944444;
		opticsZoomInit=0.06944444;
		distanceZoomMin=300;
		distanceZoomMax=300;
		opticsPPEffects[]={};
		visionMode[] = {"Ti"};
		thermalMode[] = {0};
		opticsDisablePeripherialVision = true;
	};
};