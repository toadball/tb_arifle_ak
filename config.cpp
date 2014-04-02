class CfgPatches {
 class tb_arifle_ak {
	requiredaddons[] = {"A3_Weapons_F"};
	requiredversion = 0.1;
	units[] = {};
	weapons[] = {"tb_arifle_ak74m","tb_arifle_ak74m_gp25","tb_arifle_aks74m","tb_arifle_aks74m_gp25"};
	magazines[] = {};
 };
};

class CfgWeapons {
	class Rifle_Base_F;
	class arifle_Katiba_Base_F: Rifle_Base_F {
		class Single;
		class FullAuto;
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
		
		class Single: Single {
			begin1[] = {"A3\sounds_f\weapons\khaybar\khaybar_1", 1.25893, 1, 900};
			begin2[] = {"A3\sounds_f\weapons\khaybar\khaybar_2", 1.25893, 1, 900};
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2", 0.75, 1, 10};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3", 0.75, 1, 10};
		};
		class FullAuto : FullAuto {
			begin1[] = {"A3\sounds_f\weapons\khaybar\khaybar_1", 1.25893, 1, 900};
			begin2[] = {"A3\sounds_f\weapons\khaybar\khaybar_2", 1.25893, 1, 900};
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2", 0.75, 1, 10};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3", 0.75, 1, 10};
		};
		class fullauto_medium: FullAuto {
			airateoffire = 2;
			airateoffiredistance = 200;
			burst = 3;
			maxrange = 150;
			maxrangeprobab = 0.05;
			midrange = 75;
			midrangeprobab = 0.7;
			minrange = 2;
			minrangeprobab = 0.5;
			showtoplayer = 0;		
		};
		class single_medium_optics1: Single {
			airateoffire = 6;
			airateoffiredistance = 600;
			maxrange = 600;
			maxrangeprobab = 0.2;
			midrange = 450;
			midrangeprobab = 0.7;
			minrange = 2;
			minrangeprobab = 0.2;
			requiredoptictype = 1;
			showtoplayer = 0;
		};
		class single_far_optics2: single_medium_optics1 {
			airateoffire = 8;
			airateoffiredistance = 800;
			maxrange = 800;
			maxrangeprobab = 0.05;
			midrange = 450;
			midrangeprobab = 0.6;
			minrange = 100;
			minrangeprobab = 0.1;
			requiredoptictype = 2;
		};
		class GP25: EGLM {
			displayname = "GP25";
			displaynameshort = "GP25";
			cameradir = "op_look";
			discretedistance[] = {100, 200, 300, 400};
			discretedistancecamerapoint[] = {"op_eye","op_eye2","op_eye3","op_eye4"};
			discretedistanceinitindex = 0;
			useexternaloptic = 0;
			usemodeloptics = 0;
			magazines[] = {"tb_1Rnd_HE_GP25","tb_1Rnd_FlareWhite_GP25","tb_1Rnd_FlareRed_GP25","tb_1Rnd_FlareYellow_GP25","tb_1Rnd_FlareGreen_GP25","tb_1Rnd_Smoke_GP25","tb_1Rnd_SmokeRed_GP25","tb_1Rnd_SmokeGreen_GP25","tb_1Rnd_SmokeYellow_GP25","tb_1Rnd_SmokeBlue_GP25","tb_1Rnd_SmokePurple_GP25","tb_1Rnd_SmokeOrange_GP25"};
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
		displaynameshort = "5.45x39mm";
		picture = "\tb_arifle_ak\data\ui\m_ak74_ca";
		tracersevery = 0;
		lastroundstracer = 4;
	};
	class tb_30rnd_545x39_tracer : tb_30rnd_545x39 {
		ammo = "tb_545x39_tracer";
		descriptionshort = "Caliber: 5.45x39mm Tracer<br/>Rounds: 30<br/>Used in: AK-74M and AKS-74M";
		displayname = "30Rnd. 5.45x39mm Tracer";
		displaynameshort = "Tracer";
		tracersevery = 2;
		lastroundstracer = 4;
		picture = "\tb_arifle_ak\data\ui\m_ak74_ca";		
	};

	//VOG-25
	class 1Rnd_HE_Grenade_shell;
	class tb_1Rnd_HE_GP25 : 1Rnd_HE_Grenade_shell {
		displayName = "VOG-25";
		displayNameShort = "HE";
		descriptionshort = "Type: High Explosive Grenade<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: GP25";
		initspeed = 76;
	};
	//VG-40OP flare
	class UGL_FlareWhite_F;
	class tb_1Rnd_FlareWhite_GP25 : UGL_FlareWhite_F {
		displayname = "VG-40OP White"
		displaynameshort = "White Flare";
		descriptionshort = "Type: Flare Round (White)<br />Rounds: 1<br />Used in: GP25";
		initspeed = 80;
	};
	class UGL_FlareRed_F;
	class tb_1Rnd_FlareRed_GP25 : UGL_FlareRed_F {
		displayname = "VG-40OP Red"
		displaynameshort = "Red Flare";
		descriptionshort = "Type: Flare (Red)<br />Rounds: 1<br />Used in: GP25";
		initspeed = 80;
	};	
	class UGL_FlareYellow_F;
	class tb_1Rnd_FlareYellow_GP25 : UGL_FlareYellow_F {
		displayname = "VG-40OP Yellow"
		displaynameshort = "Yellow Flare";
		descriptionshort = "Type: Flare (Yellow)<br />Rounds: 1<br />Used in: GP25";
		initspeed = 80;
	};
	class UGL_FlareGreen_F;
	class tb_1Rnd_FlareGreen_GP25 : UGL_FlareGreen_F {
		displayname = "VG-40OP Green"
		displaynameshort = "Green Flare";
		descriptionshort = "Type: Flare (Green)<br />Rounds: 1<br />Used in: GP25";
		initspeed = 80;
	};			
	//VG-40MD smoke
	class 1Rnd_Smoke_Grenade_shell;
	class tb_1Rnd_Smoke_GP25 : 1Rnd_Smoke_Grenade_shell {
		displayname = "VG-40MD White"
		displaynameshort = "White Smoke";
		descriptionshort = "Type: Smoke (White)<br />Rounds: 1<br />Used in: GP25";
		initspeed = 76;		
	};
	class 1Rnd_SmokeRed_Grenade_shell;
	class tb_1Rnd_SmokeRed_GP25 : 1Rnd_SmokeRed_Grenade_shell {
		displayname = "VG-40MD Red"
		displaynameshort = "Red Smoke";
		descriptionshort = "Type: Smoke (Red)<br />Rounds: 1<br />Used in: GP25";
		initspeed = 76;		
	};	
	class 1Rnd_SmokeGreen_Grenade_shell;
	class tb_1Rnd_SmokeGreen_GP25 : 1Rnd_SmokeGreen_Grenade_shell {
		displayname = "VG-40MD Green"
		displaynameshort = "Gren Smoke";
		descriptionshort = "Type: Smoke (Green)<br />Rounds: 1<br />Used in: GP25";
		initspeed = 76;		
	};	
	class 1Rnd_SmokeYellow_Grenade_shell;
	class tb_1Rnd_SmokeYellow_GP25 : 1Rnd_SmokeYellow_Grenade_shell {
		displayname = "VG-40MD Yellow"
		displaynameshort = "Yellow Smoke";
		descriptionshort = "Type: Smoke (Yellow)<br />Rounds: 1<br />Used in: GP25";
		initspeed = 76;		
	};		
	class 1Rnd_SmokeBlue_Grenade_shell;
	class tb_1Rnd_SmokeBlue_GP25 : 1Rnd_SmokeBlue_Grenade_shell {
		displayname = "VG-40MD Blue"
		displaynameshort = "Blue Smoke";
		descriptionshort = "Type: Smoke (Blue)<br />Rounds: 1<br />Used in: GP25";
		initspeed = 76;		
	};		
	class 1Rnd_SmokePurple_Grenade_shell;
	class tb_1Rnd_SmokePurple_GP25 : 1Rnd_SmokePurple_Grenade_shell {
		displayname = "VG-40MD Purple"
		displaynameshort = "Purple Smoke";
		descriptionshort = "Type: Smoke (Purple)<br />Rounds: 1<br />Used in: GP25";
		initspeed = 76;		
	};			
	class 1Rnd_SmokeOrange_Grenade_shell;
	class tb_1Rnd_SmokeOrange_GP25 : 1Rnd_SmokeOrange_Grenade_shell {
		displayname = "VG-40MD Orange"
		displaynameshort = "Orange Smoke";
		descriptionshort = "Type: Smoke (Orange)<br />Rounds: 1<br />Used in: GP25";
		initspeed = 76;		
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