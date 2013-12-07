#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#include <R.h>
#include <Rdefines.h>
#include <Rinternals.h>

#define R_USE_PROTOTYPES 1
#include <R_ext/GraphicsEngine.h>
#include <R_ext/GraphicsDevice.h>

#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_OUTLINE_H


size_t utf8toucs(wchar_t *wc, const char *s);
int utf8towcs(wchar_t *wc, const char *s, int n);

SEXP GetPkgEnv();
pDevDesc GetDevDesc();
pGEDevDesc GetGEDevDesc();
FT_Face GetFTFace(const pGEcontext gc);
FT_Outline_Funcs* GetFTOutlineFuncs();
int GetNseg();

#endif /* UTIL_H_INCLUDED */
