#ifndef PLEX_FAKESTRINGS_H
#define PLEX_FAKESTRINGS_H

#include "meta/cinclude.h"

#define PLEX_fts(string) (const char*)&string

typedef struct
{
	uint8_t s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, nt;
	size_t len;
} PLEX_FAKESTRING_10;

typedef struct
{
	uint8_t s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18, s19, s20, s21, s22, s23, s24, nt;
	size_t len;
} PLEX_FAKESTRING_25;

typedef struct
{
	uint8_t s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18, s19, s20, s21, s22, s23, s24, s25, s26, s27, s28, s29, s30, s31, s32, s33, s34, s35, s36, s37, s38, s39, s40, s41, s42, s43, s44, s45, s46, s47, s48, s49, nt;
	size_t len;
} PLEX_FAKESTRING_50;

typedef struct
{
	uint8_t s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18, s19, s20, s21, s22, s23, s24, s25, s26, s27, s28, s29, s30, s31, s32, s33, s34, s35, s36, s37, s38, s39, s40, s41, s42, s43, s44, s45, s46, s47, s48, s49, s50, s51, s52, s53, s54, s55, s56, s57, s58, s59, s60, s61, s62, s63, s64, s65, s66, s67, s68, s69, s70, s71, s72, s73, s74, s75, s76, s77, s78, s79, s80, s81, s82, s83, s84, s85, s86, s87, s88, s89, s90, s91, s92, s93, s94, s95, s96, s97, s98, s99, nt;
	size_t len;
} PLEX_FAKESTRING_100;

typedef struct
{
	uint8_t s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18, s19, s20, s21, s22, s23, s24, s25, s26, s27, s28, s29, s30, s31, s32, s33, s34, s35, s36, s37, s38, s39, s40, s41, s42, s43, s44, s45, s46, s47, s48, s49, s50, s51, s52, s53, s54, s55, s56, s57, s58, s59, s60, s61, s62, s63, s64, s65, s66, s67, s68, s69, s70, s71, s72, s73, s74, s75, s76, s77, s78, s79, s80, s81, s82, s83, s84, s85, s86, s87, s88, s89, s90, s91, s92, s93, s94, s95, s96, s97, s98, s99, s100, s101, s102, s103, s104, s105, s106, s107, s108, s109, s110, s111, s112, s113, s114, s115, s116, s117, s118, s119, s120, s121, s122, s123, s124, s125, s126, s127, s128, s129, s130, s131, s132, s133, s134, s135, s136, s137, s138, s139, s140, s141, s142, s143, s144, s145, s146, s147, s148, s149, s150, s151, s152, s153, s154, s155, s156, s157, s158, s159, s160, s161, s162, s163, s164, s165, s166, s167, s168, s169, s170, s171, s172, s173, s174, s175, s176, s177, s178, s179, s180, s181, s182, s183, s184, s185, s186, s187, s188, s189, s190, s191, s192, s193, s194, s195, s196, s197, s198, s199, s200, s201, s202, s203, s204, s205, s206, s207, s208, s209, s210, s211, s212, s213, s214, s215, s216, s217, s218, s219, s220, s221, s222, s223, s224, s225, s226, s227, s228, s229, s230, s231, s232, s233, s234, s235, s236, s237, s238, s239, s240, s241, s242, s243, s244, s245, s246, s247, s248, s249, s250, s251, s252, s253, s254, s255, s256, s257, s258, s259, s260, s261, s262, s263, s264, s265, s266, s267, s268, s269, s270, s271, s272, s273, s274, s275, s276, s277, s278, s279, s280, s281, s282, s283, s284, s285, s286, s287, s288, s289, s290, s291, s292, s293, s294, s295, s296, s297, s298, s299, s300, s301, s302, s303, s304, s305, s306, s307, s308, s309, s310, s311, s312, s313, s314, s315, s316, s317, s318, s319, s320, s321, s322, s323, s324, s325, s326, s327, s328, s329, s330, s331, s332, s333, s334, s335, s336, s337, s338, s339, s340, s341, s342, s343, s344, s345, s346, s347, s348, s349, s350, s351, s352, s353, s354, s355, s356, s357, s358, s359, s360, s361, s362, s363, s364, s365, s366, s367, s368, s369, s370, s371, s372, s373, s374, s375, s376, s377, s378, s379, s380, s381, s382, s383, s384, s385, s386, s387, s388, s389, s390, s391, s392, s393, s394, s395, s396, s397, s398, s399, s400, s401, s402, s403, s404, s405, s406, s407, s408, s409, s410, s411, s412, s413, s414, s415, s416, s417, s418, s419, s420, s421, s422, s423, s424, s425, s426, s427, s428, s429, s430, s431, s432, s433, s434, s435, s436, s437, s438, s439, s440, s441, s442, s443, s444, s445, s446, s447, s448, s449, s450, s451, s452, s453, s454, s455, s456, s457, s458, s459, s460, s461, s462, s463, s464, s465, s466, s467, s468, s469, s470, s471, s472, s473, s474, s475, s476, s477, s478, s479, s480, s481, s482, s483, s484, s485, s486, s487, s488, s489, s490, s491, s492, s493, s494, s495, s496, s497, s498, s499, nt;
	size_t len;
} PLEX_FAKESTRING_500;

#ifdef __cplusplus
extern"C"
{
#endif
	extern PLEX_FAKESTRING_10 PLEX_createString10(const char* const from);
	extern PLEX_FAKESTRING_25 PLEX_createString25(const char* const from);
	extern PLEX_FAKESTRING_50 PLEX_createString50(const char* const from);
	extern PLEX_FAKESTRING_100 PLEX_createString100(const char* const from);
	extern PLEX_FAKESTRING_500 PLEX_createString500(const char* const from);

	extern size_t PLEX_strLen10(const PLEX_FAKESTRING_10 string);
	extern size_t PLEX_strLen25(const PLEX_FAKESTRING_25 string);
	extern size_t PLEX_strLen50(const PLEX_FAKESTRING_50 string);
	extern size_t PLEX_strLen100(const PLEX_FAKESTRING_100 string);
	extern size_t PLEX_strLen500(const PLEX_FAKESTRING_500 string);

	extern PLEX_FAKESTRING_10 PLEX_createStringFromNumber10(const double number);
	extern PLEX_FAKESTRING_25 PLEX_createStringFromNumber25(const double number);
	extern PLEX_FAKESTRING_50 PLEX_createStringFromNumber50(const double number);
	extern PLEX_FAKESTRING_100 PLEX_createStringFromNumber100(const double number);
	extern PLEX_FAKESTRING_500 PLEX_createStringFromNumber500(const double number);

	extern PLEX_FAKESTRING_10 PLEX_blankString10();
	extern PLEX_FAKESTRING_25 PLEX_blankString25();
	extern PLEX_FAKESTRING_50 PLEX_blankString50();
	extern PLEX_FAKESTRING_100 PLEX_blankString100();
	extern PLEX_FAKESTRING_500 PLEX_blankString500();

	extern PLEX_FAKESTRING_10 PLEX_concatString10(const PLEX_FAKESTRING_10 string, const uint64_t character, const size_t clen);
	extern PLEX_FAKESTRING_25 PLEX_concatString25(const PLEX_FAKESTRING_25 string, const uint64_t character, const size_t clen);
	extern PLEX_FAKESTRING_50 PLEX_concatString50(const PLEX_FAKESTRING_50 string, const uint64_t character, const size_t clen);
	extern PLEX_FAKESTRING_100 PLEX_concatString100(const PLEX_FAKESTRING_100 string, const uint64_t character, const size_t clen);
	extern PLEX_FAKESTRING_500 PLEX_concatString500(const PLEX_FAKESTRING_500 string, const uint64_t character, const size_t clen);

	extern PLEX_FAKESTRING_10 PLEX_mergeString10(const PLEX_FAKESTRING_10 string, const PLEX_FAKESTRING_10 string2);
	extern PLEX_FAKESTRING_25 PLEX_mergeString25(const PLEX_FAKESTRING_25 string, const PLEX_FAKESTRING_25 string2);
	extern PLEX_FAKESTRING_50 PLEX_mergeString50(const PLEX_FAKESTRING_50 string, const PLEX_FAKESTRING_50 string2);
	extern PLEX_FAKESTRING_100 PLEX_mergeString100(const PLEX_FAKESTRING_100 string, const PLEX_FAKESTRING_100 string2);
	extern PLEX_FAKESTRING_500 PLEX_mergeString500(const PLEX_FAKESTRING_500 string, const PLEX_FAKESTRING_500 string2);
#ifdef __cplusplus
}
#endif

#endif
