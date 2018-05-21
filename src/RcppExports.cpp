// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "opencv_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// cvmat_dead
bool cvmat_dead(XPtrMat image);
RcppExport SEXP _opencv_cvmat_dead(SEXP imageSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type image(imageSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_dead(image));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_size
int cvmat_size(XPtrMat image);
RcppExport SEXP _opencv_cvmat_size(SEXP imageSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type image(imageSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_size(image));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_new
XPtrMat cvmat_new();
RcppExport SEXP _opencv_cvmat_new() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cvmat_new());
    return rcpp_result_gen;
END_RCPP
}
// cvmat_dupe
XPtrMat cvmat_dupe(XPtrMat image);
RcppExport SEXP _opencv_cvmat_dupe(SEXP imageSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type image(imageSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_dupe(image));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_read
XPtrMat cvmat_read(Rcpp::String path);
RcppExport SEXP _opencv_cvmat_read(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_read(path));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_camera
XPtrMat cvmat_camera();
RcppExport SEXP _opencv_cvmat_camera() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cvmat_camera());
    return rcpp_result_gen;
END_RCPP
}
// cvmat_write
std::string cvmat_write(XPtrMat image, std::string path);
RcppExport SEXP _opencv_cvmat_write(SEXP imageSEXP, SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type image(imageSEXP);
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_write(image, path));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_resize
XPtrMat cvmat_resize(XPtrMat ptr, int width, int height);
RcppExport SEXP _opencv_cvmat_resize(SEXP ptrSEXP, SEXP widthSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_resize(ptr, width, height));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_bitmap
Rcpp::RawVector cvmat_bitmap(XPtrMat ptr);
RcppExport SEXP _opencv_cvmat_bitmap(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_bitmap(ptr));
    return rcpp_result_gen;
END_RCPP
}
// cvmat_face
XPtrMat cvmat_face(XPtrMat ptr);
RcppExport SEXP _opencv_cvmat_face(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrMat >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(cvmat_face(ptr));
    return rcpp_result_gen;
END_RCPP
}
// livestream
void livestream(Rcpp::Function filter);
RcppExport SEXP _opencv_livestream(SEXP filterSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Function >::type filter(filterSEXP);
    livestream(filter);
    return R_NilValue;
END_RCPP
}
// take_picture
Rcpp::RawVector take_picture(int width, int height);
RcppExport SEXP _opencv_take_picture(SEXP widthSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    rcpp_result_gen = Rcpp::wrap(take_picture(width, height));
    return rcpp_result_gen;
END_RCPP
}
// test
int test();
RcppExport SEXP _opencv_test() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(test());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_opencv_cvmat_dead", (DL_FUNC) &_opencv_cvmat_dead, 1},
    {"_opencv_cvmat_size", (DL_FUNC) &_opencv_cvmat_size, 1},
    {"_opencv_cvmat_new", (DL_FUNC) &_opencv_cvmat_new, 0},
    {"_opencv_cvmat_dupe", (DL_FUNC) &_opencv_cvmat_dupe, 1},
    {"_opencv_cvmat_read", (DL_FUNC) &_opencv_cvmat_read, 1},
    {"_opencv_cvmat_camera", (DL_FUNC) &_opencv_cvmat_camera, 0},
    {"_opencv_cvmat_write", (DL_FUNC) &_opencv_cvmat_write, 2},
    {"_opencv_cvmat_resize", (DL_FUNC) &_opencv_cvmat_resize, 3},
    {"_opencv_cvmat_bitmap", (DL_FUNC) &_opencv_cvmat_bitmap, 1},
    {"_opencv_cvmat_face", (DL_FUNC) &_opencv_cvmat_face, 1},
    {"_opencv_livestream", (DL_FUNC) &_opencv_livestream, 1},
    {"_opencv_take_picture", (DL_FUNC) &_opencv_take_picture, 2},
    {"_opencv_test", (DL_FUNC) &_opencv_test, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_opencv(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
