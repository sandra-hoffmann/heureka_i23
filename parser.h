#include "AAF.h"

/**
 * Parse an AAF from a tgf file
 * @param aaf  the AAF
 * @param file the source file
 */
void parseTGF(AAF&aaf, std::istream &file) ;

/**
 * Parse an AAF from an apx file
 * @param aaf  the AAF
 * @param file the source file
 */
void parseAPX(AAF&aaf, std::istream &file) ;

/**
 * Parse an AAF from an i23 (ICCMA 2023) file
 * @param aaf  the AAF
 * @param file the source file
 */
void parseI23(AAF&aaf, std::istream &file);