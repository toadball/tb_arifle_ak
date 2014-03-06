class CfgPatches {
 class tb_arifle_ak {
	requiredaddons[] = {"A3_Weapons_F"};
	requiredversion = 0.1;
	units[] = {};
	weapons[] = {"tb_arifle_ak74m","tb_arifle_ak74m_gp25"};
	magazines[] = {};
 };
};

class CfgWeapons {
	class Rifle_Base_F;
	class arifle_Katiba_Base_F: Rifle_Base_F {
		class Single;
		class FullAuto;
		class single_medium_optics1;
		class single_far_optics2; 
		class fullauto_medium;
		class EGLM;
		class WeaponSlotsInfo {
			class CowsSlot;
			class MuzzleSlot;
			class PointerSlot;
		}; 
	};
	
	class tb_arifle_ak_base : arifle_Katiba_Base_F {
		caseless[] = {};
		scope = 0;
		handanim[] = {"OFP2_ManSkeleton", "tb_arifle_ak\data\anim\AK74.rtm"};
		displayName = "AK";
		descriptionshort = "Assault rifle<br/>Caliber: 5.45x39mm";		
		model = "tb_arifle_ak\ak_74m";
		modes[] = {"FullAuto", "Single", "single_medium_optics1", "single_far_optics2", "fullauto_medium"};
		reloadaction = "GestureReloadEBR";
		picture = "\tb_arifle_ak\data\ui\w_ak74m";
		magazines[] = {"tb_30rnd_545x39","tb_30rnd_545x39_tracer"};
		
		
		class GP25: EGLM {
			displayname = "GP25";
			displaynameshort = "GP25";
			cameradir = "OP_look";
			discretedistance[] = {100, 200, 300, 400};
			discretedistancecamerapoint[] = {"OP_eye_1", "OP_eye_2", "OP_eye_3", "OP_eye_4"};
			discretedistanceinitindex = 1;
			useexternaloptic = 0;
			usemodeloptics = 0;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 33;
			class MuzzleSlot: MuzzleSlot {compatibleitems[] = {};};
			class CowsSlot: CowsSlot {compatibleitems[] = {};};
			class PointerSlot: PointerSlot {compatibleitems[] = {};};
		};
	};
	class tb_arifle_ak74m : tb_arifle_ak_base {
		scope = 2;
		displayName ="AK-74M";
		muzzles[] = {"this"};
	};
	class tb_arifle_ak74m_gp25 : tb_arifle_ak_base {
		scope = 2;
		displayName ="AK-74M GP25";
		handanim[] = {"OFP2_ManSkeleton", "tb_arifle_ak\data\anim\M16GL.rtm"};
		picture = "\tb_arifle_ak\data\ui\w_ak74mgp25";
		model = "tb_arifle_ak\ak_74m_GL";
		muzzles[] = {"this","GP25"};
	};	

	class tb_arifle_aks74m : tb_arifle_ak_base {
		scope = 2;
		displayName ="AKS-74M";
		muzzles[] = {"this"};
		model = "tb_arifle_ak\aks74m";	
		picture = "\tb_arifle_ak\data\ui\w_aks74m";
	};
	class tb_arifle_aks74m_gp25 : tb_arifle_ak_base {
		scope = 2;
		displayName ="AKS-74M GP25";
		handanim[] = {"OFP2_ManSkeleton", "tb_arifle_ak\data\anim\M16GL.rtm"};
		muzzles[] = {"this","GP25"};
		model = "tb_arifle_ak\aks74m_gl";	
		picture = "\tb_arifle_ak\data\ui\w_aks74mgl";
	};	
	
	
	};

class CfgMagazines {
	class 30Rnd_556x45_Stanag;
	class tb_30rnd_545x39 : 30Rnd_556x45_Stanag {
		ammo = "tb_545x39_ball";
		descriptionshort = "Caliber: 5.45x39mm Ball<br/>Rounds: 30 <br/>Used in: AK-74M and AKS-74M";
		initspeed = 900;
		displayname = "30Rnd. 5.45x39mm";
		picture = "\tb_arifle_ak\data\ui\m_ak74_ca";
		tracersevery = 0;
		lastroundstracer = 4;
	};
	class tb_30rnd_545x39_tracer : tb_30rnd_545x39 {
		ammo = "tb_545x39_tracer";
		descriptionshort = "Caliber: 5.45x39mm Tracer<br/>Rounds: 30<br/>Used in: AK-74M and AKS-74M";
		displayname = "30Rnd. 5.45x39mm Tracer";
		tracersevery = 2;
		lastroundstracer = 4;
		picture = "\tb_arifle_ak\data\ui\m_ak74_ca";		
	};
};

class CfgAmmo {
	class B_556x45_Ball;
	class B_556x45_Ball_Tracer_Green;
	class tb_545x39_ball : B_556x45_Ball {
		airfriction = -0.001412;
		caliber = 0.5;
		cost = 1;
		hit = 8;
		indirecthit = 0;
		indirecthitrange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		nvgonly = 1;
		tracerendtime = 1;
		tracerscale = 1;
		tracerstarttime = 0.05;	
	};
	class tb_545x39_tracer : tb_545x39_ball {
		airfriction = -0.001412;
		caliber = 0.5;
		cost = 1;
		hit = 8;
		indirecthit = 0;
		indirecthitrange = 0;
		nvgonly = 0;
		tracerendtime = 1;
		tracerscale = 1;
		tracerstarttime = 0.05;	
	};

};