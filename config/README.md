This work includes code from the GENIE Neutrino Monte Carlo Generator, used under GPL-3.0. Modifications were made by Lev Umrikhin and Anastasiia Dimitrichenko.
This configuration directory is intended for a GENIE build compiled with PYTHIA8 only (i.e., without PYTHIA6 support).
A new tune, P25_02a, for QCDCR-based forward physics is added by Subin. The command file for this tune follows the structure of existing GENIE tunes (e.g., G18_02a).

New Files: config/pythia8/new_tune_command files, config/P25_02a/new_tunes
Modified Files: config/CommonParam.xml, config/Pythia8Hadro2019.xml 
Modified Files are made for P25_02a_00_001 which is QCDCR based forward physics tune. if you want to use other tunes (P25_02a_00_002 is for Monash 2013 tune, P25_02a_00_003 is for Monash 2013 based forward physics tune), you have to change codes related to cmnd from QCDCR_FP_Tune.cmnd -> Monash_Tune.cmnd.
