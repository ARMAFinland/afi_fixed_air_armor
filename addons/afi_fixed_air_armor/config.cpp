class CfgPatches {
	class afi_fixed_air_armor {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F_Beta_Heli_Transport_01","RHS_US_A2_AirImport","rhs_c_a2port_air","MELB"};
	};
};

class CfgVehicles {
	class Plane_CAS_01_base_F;
	class RHS_A10: Plane_CAS_01_base_F {
		armor = 25;
		crewCrashProtection = 0.01;
		class HitPoints {
			class HitHull {
				armor = 50;
				explosionShielding = 5;
				name = "hull_hit";
				passThrough = 0.5;
				visual = "zbytek";
				radius = 0.01;
				minimalHit = 0.02;
				depends = "Total";
				material = -1;
			};
		};
	};
	class O_Plane_CAS_02_F;
	class RHS_su25_base: O_Plane_CAS_02_F {
		armor = 25;
		crewCrashProtection = 0.01;
		class HitPoints {
			class HitHull {
				armor = 50;
				explosionShielding = 5;
				name = "hull_hit";
				passThrough = 0.5;
				visual = "zbytek";
				radius = 0.01;
				minimalHit = 0.02;
				depends = "Total";
				material = -1;
			};
		};
	};
	class Helicopter;
	class Helicopter_Base_F: Helicopter {
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F {
		class HitPoints: HitPoints {
			class HitHull;
			class HitEngine2;
		};
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H {
		class HitPoints: HitPoints {
			class HitEngine: HitEngine2 {
				armor = 2;
				name = "engine_hit";
				convexComponent = "engine_hit";
				depends = "0.5 * (HitEngine1 + HitEngine2)";
			};
		};
	};
	class RHS_UH60_Base: Heli_Transport_01_base_F {
		armor = 25;
		armorStructural = 3;
		epeImpulseDamageCoef = 20;
		crewCrashProtection = 0.1;
		class HitPoints: HitPoints {
			class HitHull: HitHull {
				armor = 999;
				explosionShielding = 0.1;
				minimalHit = 100;
				depends = "";
				radius = 0.01;
			};
		};
	};
	class MELB_base: Helicopter_Base_H {
		armor = 15;
		armorStructural = 3;
		class HitPoints: HitPoints {
			class HitHull: HitHull {
			armor = 999;
			};
		};
	};
};

class CfgMods {
	author = "Johnson";
	authorUrl = "www.armafinland.fi";
};