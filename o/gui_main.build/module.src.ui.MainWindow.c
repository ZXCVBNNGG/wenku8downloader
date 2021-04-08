/* Generated code for Python module 'src.ui.MainWindow'
 * created by Nuitka version 0.6.14rc3
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_src$ui$MainWindow" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_src$ui$MainWindow;
PyDictObject *moduledict_src$ui$MainWindow;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[163];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "src.ui.MainWindow");

    constants_created = true;
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_src$ui$MainWindow(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "src.ui.MainWindow");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1b5d64867d57fddadbcb8fa2c97308ca;
static PyCodeObject *codeobj_10c3a5949e5861e804d798f68bfdaa7e;
static PyCodeObject *codeobj_c21b04c45173f1f9f5a8580baaecf796;
static PyCodeObject *codeobj_3e61ae88b46eadb8c1e8ced31a534b35;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[158]); CHECK_OBJECT(module_filename_obj);
    codeobj_1b5d64867d57fddadbcb8fa2c97308ca = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[159], NULL, NULL, 0, 0, 0);
    codeobj_10c3a5949e5861e804d798f68bfdaa7e = MAKE_CODEOBJECT(module_filename_obj, 14, CO_NOFREE, mod_consts[146], mod_consts[160], NULL, 0, 0, 0);
    codeobj_c21b04c45173f1f9f5a8580baaecf796 = MAKE_CODEOBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[103], mod_consts[161], NULL, 2, 0, 0);
    codeobj_3e61ae88b46eadb8c1e8ced31a534b35 = MAKE_CODEOBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[154], mod_consts[162], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_src$ui$MainWindow$$$function__1_setupUi();


static PyObject *MAKE_FUNCTION_src$ui$MainWindow$$$function__2_retranslateUi();


// The module function definitions.
static PyObject *impl_src$ui$MainWindow$$$function__1_setupUi(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_mainWindow = python_pars[1];
    struct Nuitka_FrameObject *frame_3e61ae88b46eadb8c1e8ced31a534b35;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_3e61ae88b46eadb8c1e8ced31a534b35 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3e61ae88b46eadb8c1e8ced31a534b35)) {
        Py_XDECREF(cache_frame_3e61ae88b46eadb8c1e8ced31a534b35);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e61ae88b46eadb8c1e8ced31a534b35 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e61ae88b46eadb8c1e8ced31a534b35 = MAKE_FUNCTION_FRAME(codeobj_3e61ae88b46eadb8c1e8ced31a534b35, module_src$ui$MainWindow, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3e61ae88b46eadb8c1e8ced31a534b35->m_type_description == NULL);
    frame_3e61ae88b46eadb8c1e8ced31a534b35 = cache_frame_3e61ae88b46eadb8c1e8ced31a534b35;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3e61ae88b46eadb8c1e8ced31a534b35);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3e61ae88b46eadb8c1e8ced31a534b35) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_mainWindow);
        tmp_called_instance_1 = par_mainWindow;
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 16;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[1], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        if (par_mainWindow == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 17;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_mainWindow;
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 17;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[3],
            &PyTuple_GET_ITEM(mod_consts[4], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[6]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_mainWindow == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = par_mainWindow;
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 18;
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[7], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[7]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 19;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[8], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_assattr_target_2;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[9]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 20;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[7]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 20;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 20;
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 20;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[11], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[11]);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[12]);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 21;
        tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_4,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[15], 0)
        );

        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 21;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_expression_name_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 22;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        tmp_expression_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[11]);
        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[16]);
        Py_DECREF(tmp_expression_name_7);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 22;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[9]);
        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 22;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[17]);
        Py_DECREF(tmp_expression_name_9);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 22;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 22;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_expression_name_14;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_12 = par_self;
        tmp_expression_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[11]);
        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[18]);
        Py_DECREF(tmp_expression_name_11);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[9]);
        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[19]);
        Py_DECREF(tmp_expression_name_13);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 23;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_call_result_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_15 = par_self;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[11]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 24;
        tmp_call_result_7 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_5,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[20], 0)
        );

        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_assattr_target_3;
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[21]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_17 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[11]);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 25;
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[22], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_instance_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_19 = par_self;
        tmp_expression_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[22]);
        if (tmp_expression_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[12]);
        Py_DECREF(tmp_expression_name_18);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 26;
        tmp_args_element_name_7 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_6,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[23], 0)
        );

        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 26;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_call_result_9;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_20 = par_self;
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[22]);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 27;
        tmp_call_result_9 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_7,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        Py_DECREF(tmp_called_instance_7);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_assattr_target_4;
        tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_21 == NULL)) {
            tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[25]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_22 = par_self;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[11]);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 28;
        tmp_assattr_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_8);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[26], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_called_instance_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_24 = par_self;
        tmp_expression_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[26]);
        if (tmp_expression_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[12]);
        Py_DECREF(tmp_expression_name_23);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 29;
        tmp_args_element_name_9 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_8,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[27], 0)
        );

        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 29;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_9);
        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_call_result_11;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_25 = par_self;
        tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[26]);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 30;
        tmp_call_result_11 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_9,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        Py_DECREF(tmp_called_instance_9);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_called_name_10;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_assattr_target_5;
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[29]);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_27 = par_self;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[11]);
        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 31;
        tmp_assattr_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_10);
        Py_DECREF(tmp_called_name_10);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[30], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_called_instance_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_29 = par_self;
        tmp_expression_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[30]);
        if (tmp_expression_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[12]);
        Py_DECREF(tmp_expression_name_28);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 32;
        tmp_args_element_name_11 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_10,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[31], 0)
        );

        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 32;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_11);
        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_args_element_name_11);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_expression_name_30;
        PyObject *tmp_call_result_13;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 33;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_30 = par_self;
        tmp_called_instance_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[30]);
        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 33;
        tmp_call_result_13 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_11,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[32], 0)
        );

        Py_DECREF(tmp_called_instance_11);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_call_result_14;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_31 = par_self;
        tmp_called_instance_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[30]);
        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 34;
        tmp_call_result_14 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_12,
            mod_consts[33],
            &PyTuple_GET_ITEM(mod_consts[34], 0)
        );

        Py_DECREF(tmp_called_instance_12);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_call_result_15;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_32 = par_self;
        tmp_called_instance_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[30]);
        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 35;
        tmp_call_result_15 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_13,
            mod_consts[33],
            &PyTuple_GET_ITEM(mod_consts[34], 0)
        );

        Py_DECREF(tmp_called_instance_13);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_instance_14;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_call_result_16;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_33 = par_self;
        tmp_called_instance_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[30]);
        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 36;
        tmp_call_result_16 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_14,
            mod_consts[33],
            &PyTuple_GET_ITEM(mod_consts[34], 0)
        );

        Py_DECREF(tmp_called_instance_14);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_call_result_17;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_34 = par_self;
        tmp_called_instance_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[30]);
        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 37;
        tmp_call_result_17 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_15,
            mod_consts[33],
            &PyTuple_GET_ITEM(mod_consts[34], 0)
        );

        Py_DECREF(tmp_called_instance_15);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_instance_16;
        PyObject *tmp_expression_name_35;
        PyObject *tmp_call_result_18;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_35 = par_self;
        tmp_called_instance_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[30]);
        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 38;
        tmp_call_result_18 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_16,
            mod_consts[33],
            &PyTuple_GET_ITEM(mod_consts[34], 0)
        );

        Py_DECREF(tmp_called_instance_16);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_expression_name_36;
        PyObject *tmp_call_result_19;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_36 = par_self;
        tmp_called_instance_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[30]);
        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 39;
        tmp_call_result_19 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_17,
            mod_consts[33],
            &PyTuple_GET_ITEM(mod_consts[34], 0)
        );

        Py_DECREF(tmp_called_instance_17);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_called_name_12;
        PyObject *tmp_expression_name_37;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_expression_name_38;
        PyObject *tmp_assattr_target_6;
        tmp_expression_name_37 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_37 == NULL)) {
            tmp_expression_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_37, mod_consts[25]);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_38 = par_self;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, mod_consts[11]);
        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 40;
        tmp_assattr_name_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_12);
        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_assattr_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[35], tmp_assattr_name_6);
        Py_DECREF(tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_expression_name_40;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_called_instance_18;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_40 = par_self;
        tmp_expression_name_39 = LOOKUP_ATTRIBUTE(tmp_expression_name_40, mod_consts[35]);
        if (tmp_expression_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, mod_consts[12]);
        Py_DECREF(tmp_expression_name_39);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_18 == NULL)) {
            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_13);

            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 41;
        tmp_args_element_name_13 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_18,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[36], 0)
        );

        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_13);

            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 41;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_13);
        Py_DECREF(tmp_called_name_13);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_instance_19;
        PyObject *tmp_expression_name_41;
        PyObject *tmp_call_result_21;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_41 = par_self;
        tmp_called_instance_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, mod_consts[35]);
        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 42;
        tmp_call_result_21 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_19,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[37], 0)
        );

        Py_DECREF(tmp_called_instance_19);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_called_name_14;
        PyObject *tmp_expression_name_42;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_expression_name_43;
        PyObject *tmp_assattr_target_7;
        tmp_expression_name_42 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_42 == NULL)) {
            tmp_expression_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_42, mod_consts[25]);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_43 = par_self;
        tmp_args_element_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_43, mod_consts[11]);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 43;
        tmp_assattr_name_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_14);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_assattr_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[38], tmp_assattr_name_7);
        Py_DECREF(tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_44;
        PyObject *tmp_expression_name_45;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_called_instance_20;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_45 = par_self;
        tmp_expression_name_44 = LOOKUP_ATTRIBUTE(tmp_expression_name_45, mod_consts[38]);
        if (tmp_expression_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_44, mod_consts[12]);
        Py_DECREF(tmp_expression_name_44);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 44;
        tmp_args_element_name_15 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_20,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[39], 0)
        );

        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 44;
        tmp_call_result_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_15);
        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_instance_21;
        PyObject *tmp_expression_name_46;
        PyObject *tmp_call_result_23;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_46 = par_self;
        tmp_called_instance_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_46, mod_consts[38]);
        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 45;
        tmp_call_result_23 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_21,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        Py_DECREF(tmp_called_instance_21);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_called_name_16;
        PyObject *tmp_expression_name_47;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_expression_name_48;
        PyObject *tmp_assattr_target_8;
        tmp_expression_name_47 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_47 == NULL)) {
            tmp_expression_name_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_47, mod_consts[41]);
        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_48 = par_self;
        tmp_args_element_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_48, mod_consts[11]);
        if (tmp_args_element_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 46;
        tmp_assattr_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_16);
        Py_DECREF(tmp_called_name_16);
        Py_DECREF(tmp_args_element_name_16);
        if (tmp_assattr_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[42], tmp_assattr_name_8);
        Py_DECREF(tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_expression_name_49;
        PyObject *tmp_expression_name_50;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_called_instance_22;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_50 = par_self;
        tmp_expression_name_49 = LOOKUP_ATTRIBUTE(tmp_expression_name_50, mod_consts[42]);
        if (tmp_expression_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_49, mod_consts[12]);
        Py_DECREF(tmp_expression_name_49);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_22 == NULL)) {
            tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 47;
        tmp_args_element_name_17 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_22,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[43], 0)
        );

        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 47;
        tmp_call_result_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_17);
        Py_DECREF(tmp_called_name_17);
        Py_DECREF(tmp_args_element_name_17);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_instance_23;
        PyObject *tmp_expression_name_51;
        PyObject *tmp_call_result_25;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_51 = par_self;
        tmp_called_instance_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_51, mod_consts[42]);
        if (tmp_called_instance_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 48;
        tmp_call_result_25 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_23,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        Py_DECREF(tmp_called_instance_23);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_called_name_18;
        PyObject *tmp_expression_name_52;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_expression_name_53;
        PyObject *tmp_assattr_target_9;
        tmp_expression_name_52 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_52 == NULL)) {
            tmp_expression_name_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_52, mod_consts[45]);
        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_53 = par_self;
        tmp_args_element_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_53, mod_consts[11]);
        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 49;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 49;
        tmp_assattr_name_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_18);
        Py_DECREF(tmp_called_name_18);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_assattr_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[46], tmp_assattr_name_9);
        Py_DECREF(tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_19;
        PyObject *tmp_expression_name_54;
        PyObject *tmp_expression_name_55;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_called_instance_24;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_55 = par_self;
        tmp_expression_name_54 = LOOKUP_ATTRIBUTE(tmp_expression_name_55, mod_consts[46]);
        if (tmp_expression_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_54, mod_consts[12]);
        Py_DECREF(tmp_expression_name_54);
        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_24 == NULL)) {
            tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 50;
        tmp_args_element_name_19 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_24,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[47], 0)
        );

        if (tmp_args_element_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 50;
        tmp_call_result_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_19);
        Py_DECREF(tmp_called_name_19);
        Py_DECREF(tmp_args_element_name_19);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_instance_25;
        PyObject *tmp_expression_name_56;
        PyObject *tmp_call_result_27;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_56 = par_self;
        tmp_called_instance_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_56, mod_consts[46]);
        if (tmp_called_instance_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 51;
        tmp_call_result_27 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_25,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[48], 0)
        );

        Py_DECREF(tmp_called_instance_25);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_called_name_20;
        PyObject *tmp_expression_name_57;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_expression_name_58;
        PyObject *tmp_assattr_target_10;
        tmp_expression_name_57 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_57 == NULL)) {
            tmp_expression_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_57, mod_consts[9]);
        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_58 = par_self;
        tmp_args_element_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_58, mod_consts[7]);
        if (tmp_args_element_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 52;
        tmp_assattr_name_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_20, tmp_args_element_name_20);
        Py_DECREF(tmp_called_name_20);
        Py_DECREF(tmp_args_element_name_20);
        if (tmp_assattr_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[49], tmp_assattr_name_10);
        Py_DECREF(tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_59;
        PyObject *tmp_expression_name_60;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_called_instance_26;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_60 = par_self;
        tmp_expression_name_59 = LOOKUP_ATTRIBUTE(tmp_expression_name_60, mod_consts[49]);
        if (tmp_expression_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_59, mod_consts[12]);
        Py_DECREF(tmp_expression_name_59);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_26 == NULL)) {
            tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 53;
        tmp_args_element_name_21 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_26,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[50], 0)
        );

        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 53;
        tmp_call_result_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, tmp_args_element_name_21);
        Py_DECREF(tmp_called_name_21);
        Py_DECREF(tmp_args_element_name_21);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_name_22;
        PyObject *tmp_expression_name_61;
        PyObject *tmp_expression_name_62;
        PyObject *tmp_call_result_29;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_expression_name_63;
        PyObject *tmp_expression_name_64;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_62 = par_self;
        tmp_expression_name_61 = LOOKUP_ATTRIBUTE(tmp_expression_name_62, mod_consts[49]);
        if (tmp_expression_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_61, mod_consts[16]);
        Py_DECREF(tmp_expression_name_61);
        if (tmp_called_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_64 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_64 == NULL)) {
            tmp_expression_name_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);

            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_63 = LOOKUP_ATTRIBUTE(tmp_expression_name_64, mod_consts[9]);
        if (tmp_expression_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);

            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_63, mod_consts[17]);
        Py_DECREF(tmp_expression_name_63);
        if (tmp_args_element_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);

            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 54;
        tmp_call_result_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, tmp_args_element_name_22);
        Py_DECREF(tmp_called_name_22);
        Py_DECREF(tmp_args_element_name_22);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_name_23;
        PyObject *tmp_expression_name_65;
        PyObject *tmp_expression_name_66;
        PyObject *tmp_call_result_30;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_expression_name_67;
        PyObject *tmp_expression_name_68;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_66 = par_self;
        tmp_expression_name_65 = LOOKUP_ATTRIBUTE(tmp_expression_name_66, mod_consts[49]);
        if (tmp_expression_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_65, mod_consts[18]);
        Py_DECREF(tmp_expression_name_65);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_68 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_68 == NULL)) {
            tmp_expression_name_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_23);

            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_67 = LOOKUP_ATTRIBUTE(tmp_expression_name_68, mod_consts[9]);
        if (tmp_expression_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_23);

            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_67, mod_consts[19]);
        Py_DECREF(tmp_expression_name_67);
        if (tmp_args_element_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_23);

            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 55;
        tmp_call_result_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_23);
        Py_DECREF(tmp_called_name_23);
        Py_DECREF(tmp_args_element_name_23);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_instance_27;
        PyObject *tmp_expression_name_69;
        PyObject *tmp_call_result_31;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_69 = par_self;
        tmp_called_instance_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_69, mod_consts[49]);
        if (tmp_called_instance_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 56;
        tmp_call_result_31 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_27,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[51], 0)
        );

        Py_DECREF(tmp_called_instance_27);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_called_name_24;
        PyObject *tmp_expression_name_70;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_expression_name_71;
        PyObject *tmp_assattr_target_11;
        tmp_expression_name_70 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_70 == NULL)) {
            tmp_expression_name_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_70, mod_consts[9]);
        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_71 = par_self;
        tmp_args_element_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_71, mod_consts[49]);
        if (tmp_args_element_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 57;
        tmp_assattr_name_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_24, tmp_args_element_name_24);
        Py_DECREF(tmp_called_name_24);
        Py_DECREF(tmp_args_element_name_24);
        if (tmp_assattr_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[52], tmp_assattr_name_11);
        Py_DECREF(tmp_assattr_name_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_25;
        PyObject *tmp_expression_name_72;
        PyObject *tmp_expression_name_73;
        PyObject *tmp_call_result_32;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_called_instance_28;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_73 = par_self;
        tmp_expression_name_72 = LOOKUP_ATTRIBUTE(tmp_expression_name_73, mod_consts[52]);
        if (tmp_expression_name_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_72, mod_consts[12]);
        Py_DECREF(tmp_expression_name_72);
        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_28 == NULL)) {
            tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_25);

            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 58;
        tmp_args_element_name_25 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_28,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[53], 0)
        );

        if (tmp_args_element_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_25);

            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 58;
        tmp_call_result_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_25, tmp_args_element_name_25);
        Py_DECREF(tmp_called_name_25);
        Py_DECREF(tmp_args_element_name_25);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_name_26;
        PyObject *tmp_expression_name_74;
        PyObject *tmp_expression_name_75;
        PyObject *tmp_call_result_33;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_expression_name_76;
        PyObject *tmp_expression_name_77;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_75 = par_self;
        tmp_expression_name_74 = LOOKUP_ATTRIBUTE(tmp_expression_name_75, mod_consts[52]);
        if (tmp_expression_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_74, mod_consts[16]);
        Py_DECREF(tmp_expression_name_74);
        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_77 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_77 == NULL)) {
            tmp_expression_name_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_26);

            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_76 = LOOKUP_ATTRIBUTE(tmp_expression_name_77, mod_consts[9]);
        if (tmp_expression_name_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_26);

            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_76, mod_consts[17]);
        Py_DECREF(tmp_expression_name_76);
        if (tmp_args_element_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_26);

            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 59;
        tmp_call_result_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_26, tmp_args_element_name_26);
        Py_DECREF(tmp_called_name_26);
        Py_DECREF(tmp_args_element_name_26);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_name_27;
        PyObject *tmp_expression_name_78;
        PyObject *tmp_expression_name_79;
        PyObject *tmp_call_result_34;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_expression_name_80;
        PyObject *tmp_expression_name_81;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_79 = par_self;
        tmp_expression_name_78 = LOOKUP_ATTRIBUTE(tmp_expression_name_79, mod_consts[52]);
        if (tmp_expression_name_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_78, mod_consts[18]);
        Py_DECREF(tmp_expression_name_78);
        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_81 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_81 == NULL)) {
            tmp_expression_name_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_27);

            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_80 = LOOKUP_ATTRIBUTE(tmp_expression_name_81, mod_consts[9]);
        if (tmp_expression_name_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_27);

            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_80, mod_consts[19]);
        Py_DECREF(tmp_expression_name_80);
        if (tmp_args_element_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_27);

            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 60;
        tmp_call_result_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, tmp_args_element_name_27);
        Py_DECREF(tmp_called_name_27);
        Py_DECREF(tmp_args_element_name_27);
        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_instance_29;
        PyObject *tmp_expression_name_82;
        PyObject *tmp_call_result_35;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_82 = par_self;
        tmp_called_instance_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_82, mod_consts[52]);
        if (tmp_called_instance_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 61;
        tmp_call_result_35 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_29,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        Py_DECREF(tmp_called_instance_29);
        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_called_name_28;
        PyObject *tmp_expression_name_83;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_expression_name_84;
        PyObject *tmp_assattr_target_12;
        tmp_expression_name_83 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_83 == NULL)) {
            tmp_expression_name_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_83, mod_consts[55]);
        if (tmp_called_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_84 = par_self;
        tmp_args_element_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_84, mod_consts[52]);
        if (tmp_args_element_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_28);

            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 62;
        tmp_assattr_name_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_28, tmp_args_element_name_28);
        Py_DECREF(tmp_called_name_28);
        Py_DECREF(tmp_args_element_name_28);
        if (tmp_assattr_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[56], tmp_assattr_name_12);
        Py_DECREF(tmp_assattr_name_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_29;
        PyObject *tmp_expression_name_85;
        PyObject *tmp_expression_name_86;
        PyObject *tmp_call_result_36;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_called_instance_30;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_86 = par_self;
        tmp_expression_name_85 = LOOKUP_ATTRIBUTE(tmp_expression_name_86, mod_consts[56]);
        if (tmp_expression_name_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_85, mod_consts[12]);
        Py_DECREF(tmp_expression_name_85);
        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_30 == NULL)) {
            tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_29);

            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 63;
        tmp_args_element_name_29 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_30,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_args_element_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_29);

            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 63;
        tmp_call_result_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, tmp_args_element_name_29);
        Py_DECREF(tmp_called_name_29);
        Py_DECREF(tmp_args_element_name_29);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_called_instance_31;
        PyObject *tmp_expression_name_87;
        PyObject *tmp_call_result_37;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_87 = par_self;
        tmp_called_instance_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_87, mod_consts[56]);
        if (tmp_called_instance_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 64;
        tmp_call_result_37 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_31,
            mod_consts[58],
            &PyTuple_GET_ITEM(mod_consts[34], 0)
        );

        Py_DECREF(tmp_called_instance_31);
        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_instance_32;
        PyObject *tmp_expression_name_88;
        PyObject *tmp_call_result_38;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_88 = par_self;
        tmp_called_instance_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_88, mod_consts[56]);
        if (tmp_called_instance_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 65;
        tmp_call_result_38 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_32,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        Py_DECREF(tmp_called_instance_32);
        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_called_name_30;
        PyObject *tmp_expression_name_89;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_expression_name_90;
        PyObject *tmp_assattr_target_13;
        tmp_expression_name_89 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_89 == NULL)) {
            tmp_expression_name_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_89, mod_consts[60]);
        if (tmp_called_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_30);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_90 = par_self;
        tmp_args_element_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_90, mod_consts[52]);
        if (tmp_args_element_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 66;
        tmp_assattr_name_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_30, tmp_args_element_name_30);
        Py_DECREF(tmp_called_name_30);
        Py_DECREF(tmp_args_element_name_30);
        if (tmp_assattr_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[61], tmp_assattr_name_13);
        Py_DECREF(tmp_assattr_name_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_33;
        PyObject *tmp_expression_name_91;
        PyObject *tmp_call_result_39;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_91 = par_self;
        tmp_called_instance_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_91, mod_consts[61]);
        if (tmp_called_instance_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 67;
        tmp_call_result_39 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_33,
            mod_consts[62],
            &PyTuple_GET_ITEM(mod_consts[63], 0)
        );

        Py_DECREF(tmp_called_instance_33);
        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_name_31;
        PyObject *tmp_expression_name_92;
        PyObject *tmp_expression_name_93;
        PyObject *tmp_call_result_40;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_called_instance_34;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_93 = par_self;
        tmp_expression_name_92 = LOOKUP_ATTRIBUTE(tmp_expression_name_93, mod_consts[61]);
        if (tmp_expression_name_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_92, mod_consts[12]);
        Py_DECREF(tmp_expression_name_92);
        if (tmp_called_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_34 == NULL)) {
            tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_31);

            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 68;
        tmp_args_element_name_31 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_34,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[64], 0)
        );

        if (tmp_args_element_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_31);

            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 68;
        tmp_call_result_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_31, tmp_args_element_name_31);
        Py_DECREF(tmp_called_name_31);
        Py_DECREF(tmp_args_element_name_31);
        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_instance_35;
        PyObject *tmp_expression_name_94;
        PyObject *tmp_call_result_41;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_94 = par_self;
        tmp_called_instance_35 = LOOKUP_ATTRIBUTE(tmp_expression_name_94, mod_consts[61]);
        if (tmp_called_instance_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 69;
        tmp_call_result_41 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_35,
            mod_consts[65],
            &PyTuple_GET_ITEM(mod_consts[66], 0)
        );

        Py_DECREF(tmp_called_instance_35);
        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_instance_36;
        PyObject *tmp_expression_name_95;
        PyObject *tmp_call_result_42;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_95 = par_self;
        tmp_called_instance_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_95, mod_consts[61]);
        if (tmp_called_instance_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 70;
        tmp_call_result_42 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_36,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[67], 0)
        );

        Py_DECREF(tmp_called_instance_36);
        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_called_name_32;
        PyObject *tmp_expression_name_96;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_expression_name_97;
        PyObject *tmp_assattr_target_14;
        tmp_expression_name_96 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_96 == NULL)) {
            tmp_expression_name_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_96, mod_consts[9]);
        if (tmp_called_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_32);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_97 = par_self;
        tmp_args_element_name_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_97, mod_consts[49]);
        if (tmp_args_element_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_32);

            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 71;
        tmp_assattr_name_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_32, tmp_args_element_name_32);
        Py_DECREF(tmp_called_name_32);
        Py_DECREF(tmp_args_element_name_32);
        if (tmp_assattr_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[68], tmp_assattr_name_14);
        Py_DECREF(tmp_assattr_name_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_33;
        PyObject *tmp_expression_name_98;
        PyObject *tmp_expression_name_99;
        PyObject *tmp_call_result_43;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_called_instance_37;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_99 = par_self;
        tmp_expression_name_98 = LOOKUP_ATTRIBUTE(tmp_expression_name_99, mod_consts[68]);
        if (tmp_expression_name_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_98, mod_consts[12]);
        Py_DECREF(tmp_expression_name_98);
        if (tmp_called_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_37 == NULL)) {
            tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_33);

            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 72;
        tmp_args_element_name_33 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_37,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        if (tmp_args_element_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_33);

            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 72;
        tmp_call_result_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_33, tmp_args_element_name_33);
        Py_DECREF(tmp_called_name_33);
        Py_DECREF(tmp_args_element_name_33);
        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_name_34;
        PyObject *tmp_expression_name_100;
        PyObject *tmp_expression_name_101;
        PyObject *tmp_call_result_44;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_expression_name_102;
        PyObject *tmp_expression_name_103;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_101 = par_self;
        tmp_expression_name_100 = LOOKUP_ATTRIBUTE(tmp_expression_name_101, mod_consts[68]);
        if (tmp_expression_name_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_34 = LOOKUP_ATTRIBUTE(tmp_expression_name_100, mod_consts[16]);
        Py_DECREF(tmp_expression_name_100);
        if (tmp_called_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_103 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_103 == NULL)) {
            tmp_expression_name_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_34);

            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_102 = LOOKUP_ATTRIBUTE(tmp_expression_name_103, mod_consts[9]);
        if (tmp_expression_name_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_34);

            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_34 = LOOKUP_ATTRIBUTE(tmp_expression_name_102, mod_consts[17]);
        Py_DECREF(tmp_expression_name_102);
        if (tmp_args_element_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_34);

            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 73;
        tmp_call_result_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_34, tmp_args_element_name_34);
        Py_DECREF(tmp_called_name_34);
        Py_DECREF(tmp_args_element_name_34);
        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_name_35;
        PyObject *tmp_expression_name_104;
        PyObject *tmp_expression_name_105;
        PyObject *tmp_call_result_45;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_expression_name_106;
        PyObject *tmp_expression_name_107;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_105 = par_self;
        tmp_expression_name_104 = LOOKUP_ATTRIBUTE(tmp_expression_name_105, mod_consts[68]);
        if (tmp_expression_name_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_35 = LOOKUP_ATTRIBUTE(tmp_expression_name_104, mod_consts[18]);
        Py_DECREF(tmp_expression_name_104);
        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_107 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_107 == NULL)) {
            tmp_expression_name_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_35);

            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_106 = LOOKUP_ATTRIBUTE(tmp_expression_name_107, mod_consts[9]);
        if (tmp_expression_name_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_35);

            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_35 = LOOKUP_ATTRIBUTE(tmp_expression_name_106, mod_consts[19]);
        Py_DECREF(tmp_expression_name_106);
        if (tmp_args_element_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_35);

            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 74;
        tmp_call_result_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_35, tmp_args_element_name_35);
        Py_DECREF(tmp_called_name_35);
        Py_DECREF(tmp_args_element_name_35);
        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_instance_38;
        PyObject *tmp_expression_name_108;
        PyObject *tmp_call_result_46;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_108 = par_self;
        tmp_called_instance_38 = LOOKUP_ATTRIBUTE(tmp_expression_name_108, mod_consts[68]);
        if (tmp_called_instance_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 75;
        tmp_call_result_46 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_38,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[70], 0)
        );

        Py_DECREF(tmp_called_instance_38);
        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_called_name_36;
        PyObject *tmp_expression_name_109;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_expression_name_110;
        PyObject *tmp_assattr_target_15;
        tmp_expression_name_109 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_109 == NULL)) {
            tmp_expression_name_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_109, mod_consts[25]);
        if (tmp_called_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_36);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_110 = par_self;
        tmp_args_element_name_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_110, mod_consts[68]);
        if (tmp_args_element_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_36);

            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 76;
        tmp_assattr_name_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_36, tmp_args_element_name_36);
        Py_DECREF(tmp_called_name_36);
        Py_DECREF(tmp_args_element_name_36);
        if (tmp_assattr_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[71], tmp_assattr_name_15);
        Py_DECREF(tmp_assattr_name_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_37;
        PyObject *tmp_expression_name_111;
        PyObject *tmp_expression_name_112;
        PyObject *tmp_call_result_47;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_called_instance_39;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_112 = par_self;
        tmp_expression_name_111 = LOOKUP_ATTRIBUTE(tmp_expression_name_112, mod_consts[71]);
        if (tmp_expression_name_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_37 = LOOKUP_ATTRIBUTE(tmp_expression_name_111, mod_consts[12]);
        Py_DECREF(tmp_expression_name_111);
        if (tmp_called_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_39 == NULL)) {
            tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_37);

            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 77;
        tmp_args_element_name_37 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_39,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[72], 0)
        );

        if (tmp_args_element_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_37);

            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 77;
        tmp_call_result_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_37, tmp_args_element_name_37);
        Py_DECREF(tmp_called_name_37);
        Py_DECREF(tmp_args_element_name_37);
        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_called_instance_40;
        PyObject *tmp_expression_name_113;
        PyObject *tmp_call_result_48;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_113 = par_self;
        tmp_called_instance_40 = LOOKUP_ATTRIBUTE(tmp_expression_name_113, mod_consts[71]);
        if (tmp_called_instance_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 78;
        tmp_call_result_48 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_40,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[73], 0)
        );

        Py_DECREF(tmp_called_instance_40);
        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_assattr_name_16;
        PyObject *tmp_called_name_38;
        PyObject *tmp_expression_name_114;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_expression_name_115;
        PyObject *tmp_assattr_target_16;
        tmp_expression_name_114 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_114 == NULL)) {
            tmp_expression_name_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_38 = LOOKUP_ATTRIBUTE(tmp_expression_name_114, mod_consts[25]);
        if (tmp_called_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_38);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_115 = par_self;
        tmp_args_element_name_38 = LOOKUP_ATTRIBUTE(tmp_expression_name_115, mod_consts[68]);
        if (tmp_args_element_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_38);

            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 79;
        tmp_assattr_name_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_38, tmp_args_element_name_38);
        Py_DECREF(tmp_called_name_38);
        Py_DECREF(tmp_args_element_name_38);
        if (tmp_assattr_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[74], tmp_assattr_name_16);
        Py_DECREF(tmp_assattr_name_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_39;
        PyObject *tmp_expression_name_116;
        PyObject *tmp_expression_name_117;
        PyObject *tmp_call_result_49;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_called_instance_41;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_117 = par_self;
        tmp_expression_name_116 = LOOKUP_ATTRIBUTE(tmp_expression_name_117, mod_consts[74]);
        if (tmp_expression_name_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_39 = LOOKUP_ATTRIBUTE(tmp_expression_name_116, mod_consts[12]);
        Py_DECREF(tmp_expression_name_116);
        if (tmp_called_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_41 == NULL)) {
            tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);

            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 80;
        tmp_args_element_name_39 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_41,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[75], 0)
        );

        if (tmp_args_element_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);

            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 80;
        tmp_call_result_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_39, tmp_args_element_name_39);
        Py_DECREF(tmp_called_name_39);
        Py_DECREF(tmp_args_element_name_39);
        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_called_instance_42;
        PyObject *tmp_expression_name_118;
        PyObject *tmp_call_result_50;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 81;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_118 = par_self;
        tmp_called_instance_42 = LOOKUP_ATTRIBUTE(tmp_expression_name_118, mod_consts[74]);
        if (tmp_called_instance_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 81;
        tmp_call_result_50 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_42,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[76], 0)
        );

        Py_DECREF(tmp_called_instance_42);
        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_assattr_name_17;
        PyObject *tmp_called_name_40;
        PyObject *tmp_expression_name_119;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_expression_name_120;
        PyObject *tmp_assattr_target_17;
        tmp_expression_name_119 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_119 == NULL)) {
            tmp_expression_name_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_40 = LOOKUP_ATTRIBUTE(tmp_expression_name_119, mod_consts[25]);
        if (tmp_called_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_40);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_120 = par_self;
        tmp_args_element_name_40 = LOOKUP_ATTRIBUTE(tmp_expression_name_120, mod_consts[68]);
        if (tmp_args_element_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_40);

            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 82;
        tmp_assattr_name_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_40, tmp_args_element_name_40);
        Py_DECREF(tmp_called_name_40);
        Py_DECREF(tmp_args_element_name_40);
        if (tmp_assattr_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[77], tmp_assattr_name_17);
        Py_DECREF(tmp_assattr_name_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_41;
        PyObject *tmp_expression_name_121;
        PyObject *tmp_expression_name_122;
        PyObject *tmp_call_result_51;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_called_instance_43;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_122 = par_self;
        tmp_expression_name_121 = LOOKUP_ATTRIBUTE(tmp_expression_name_122, mod_consts[77]);
        if (tmp_expression_name_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_41 = LOOKUP_ATTRIBUTE(tmp_expression_name_121, mod_consts[12]);
        Py_DECREF(tmp_expression_name_121);
        if (tmp_called_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_43 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_43 == NULL)) {
            tmp_called_instance_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);

            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 83;
        tmp_args_element_name_41 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_43,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[78], 0)
        );

        if (tmp_args_element_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);

            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 83;
        tmp_call_result_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_41, tmp_args_element_name_41);
        Py_DECREF(tmp_called_name_41);
        Py_DECREF(tmp_args_element_name_41);
        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_called_instance_44;
        PyObject *tmp_expression_name_123;
        PyObject *tmp_call_result_52;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_123 = par_self;
        tmp_called_instance_44 = LOOKUP_ATTRIBUTE(tmp_expression_name_123, mod_consts[77]);
        if (tmp_called_instance_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 84;
        tmp_call_result_52 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_44,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[79], 0)
        );

        Py_DECREF(tmp_called_instance_44);
        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_assattr_name_18;
        PyObject *tmp_called_name_42;
        PyObject *tmp_expression_name_124;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_expression_name_125;
        PyObject *tmp_assattr_target_18;
        tmp_expression_name_124 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_124 == NULL)) {
            tmp_expression_name_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_42 = LOOKUP_ATTRIBUTE(tmp_expression_name_124, mod_consts[25]);
        if (tmp_called_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_42);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_125 = par_self;
        tmp_args_element_name_42 = LOOKUP_ATTRIBUTE(tmp_expression_name_125, mod_consts[68]);
        if (tmp_args_element_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);

            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 85;
        tmp_assattr_name_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_42, tmp_args_element_name_42);
        Py_DECREF(tmp_called_name_42);
        Py_DECREF(tmp_args_element_name_42);
        if (tmp_assattr_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[80], tmp_assattr_name_18);
        Py_DECREF(tmp_assattr_name_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_43;
        PyObject *tmp_expression_name_126;
        PyObject *tmp_expression_name_127;
        PyObject *tmp_call_result_53;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_called_instance_45;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_127 = par_self;
        tmp_expression_name_126 = LOOKUP_ATTRIBUTE(tmp_expression_name_127, mod_consts[80]);
        if (tmp_expression_name_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_43 = LOOKUP_ATTRIBUTE(tmp_expression_name_126, mod_consts[12]);
        Py_DECREF(tmp_expression_name_126);
        if (tmp_called_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_45 == NULL)) {
            tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_43);

            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 86;
        tmp_args_element_name_43 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_45,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[81], 0)
        );

        if (tmp_args_element_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_43);

            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 86;
        tmp_call_result_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_43, tmp_args_element_name_43);
        Py_DECREF(tmp_called_name_43);
        Py_DECREF(tmp_args_element_name_43);
        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_instance_46;
        PyObject *tmp_expression_name_128;
        PyObject *tmp_call_result_54;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_128 = par_self;
        tmp_called_instance_46 = LOOKUP_ATTRIBUTE(tmp_expression_name_128, mod_consts[80]);
        if (tmp_called_instance_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 87;
        tmp_call_result_54 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_46,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[82], 0)
        );

        Py_DECREF(tmp_called_instance_46);
        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_assattr_name_19;
        PyObject *tmp_called_name_44;
        PyObject *tmp_expression_name_129;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_expression_name_130;
        PyObject *tmp_assattr_target_19;
        tmp_expression_name_129 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_129 == NULL)) {
            tmp_expression_name_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_44 = LOOKUP_ATTRIBUTE(tmp_expression_name_129, mod_consts[9]);
        if (tmp_called_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_44);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_130 = par_self;
        tmp_args_element_name_44 = LOOKUP_ATTRIBUTE(tmp_expression_name_130, mod_consts[68]);
        if (tmp_args_element_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_44);

            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 88;
        tmp_assattr_name_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_44, tmp_args_element_name_44);
        Py_DECREF(tmp_called_name_44);
        Py_DECREF(tmp_args_element_name_44);
        if (tmp_assattr_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_19 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[83], tmp_assattr_name_19);
        Py_DECREF(tmp_assattr_name_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_45;
        PyObject *tmp_expression_name_131;
        PyObject *tmp_expression_name_132;
        PyObject *tmp_call_result_55;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_called_instance_47;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_132 = par_self;
        tmp_expression_name_131 = LOOKUP_ATTRIBUTE(tmp_expression_name_132, mod_consts[83]);
        if (tmp_expression_name_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_45 = LOOKUP_ATTRIBUTE(tmp_expression_name_131, mod_consts[12]);
        Py_DECREF(tmp_expression_name_131);
        if (tmp_called_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_47 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_47 == NULL)) {
            tmp_called_instance_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_45);

            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 89;
        tmp_args_element_name_45 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_47,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[84], 0)
        );

        if (tmp_args_element_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_45);

            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 89;
        tmp_call_result_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_45, tmp_args_element_name_45);
        Py_DECREF(tmp_called_name_45);
        Py_DECREF(tmp_args_element_name_45);
        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_55);
    }
    {
        PyObject *tmp_called_name_46;
        PyObject *tmp_expression_name_133;
        PyObject *tmp_expression_name_134;
        PyObject *tmp_call_result_56;
        PyObject *tmp_args_element_name_46;
        PyObject *tmp_expression_name_135;
        PyObject *tmp_expression_name_136;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_134 = par_self;
        tmp_expression_name_133 = LOOKUP_ATTRIBUTE(tmp_expression_name_134, mod_consts[83]);
        if (tmp_expression_name_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_46 = LOOKUP_ATTRIBUTE(tmp_expression_name_133, mod_consts[16]);
        Py_DECREF(tmp_expression_name_133);
        if (tmp_called_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_136 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_136 == NULL)) {
            tmp_expression_name_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_46);

            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_135 = LOOKUP_ATTRIBUTE(tmp_expression_name_136, mod_consts[9]);
        if (tmp_expression_name_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_46);

            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_46 = LOOKUP_ATTRIBUTE(tmp_expression_name_135, mod_consts[17]);
        Py_DECREF(tmp_expression_name_135);
        if (tmp_args_element_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_46);

            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 90;
        tmp_call_result_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_46, tmp_args_element_name_46);
        Py_DECREF(tmp_called_name_46);
        Py_DECREF(tmp_args_element_name_46);
        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_called_name_47;
        PyObject *tmp_expression_name_137;
        PyObject *tmp_expression_name_138;
        PyObject *tmp_call_result_57;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_expression_name_139;
        PyObject *tmp_expression_name_140;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_138 = par_self;
        tmp_expression_name_137 = LOOKUP_ATTRIBUTE(tmp_expression_name_138, mod_consts[83]);
        if (tmp_expression_name_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_47 = LOOKUP_ATTRIBUTE(tmp_expression_name_137, mod_consts[18]);
        Py_DECREF(tmp_expression_name_137);
        if (tmp_called_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_140 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_140 == NULL)) {
            tmp_expression_name_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_47);

            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_139 = LOOKUP_ATTRIBUTE(tmp_expression_name_140, mod_consts[9]);
        if (tmp_expression_name_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_47);

            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_47 = LOOKUP_ATTRIBUTE(tmp_expression_name_139, mod_consts[19]);
        Py_DECREF(tmp_expression_name_139);
        if (tmp_args_element_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_47);

            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 91;
        tmp_call_result_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_47, tmp_args_element_name_47);
        Py_DECREF(tmp_called_name_47);
        Py_DECREF(tmp_args_element_name_47);
        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_called_instance_48;
        PyObject *tmp_expression_name_141;
        PyObject *tmp_call_result_58;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_141 = par_self;
        tmp_called_instance_48 = LOOKUP_ATTRIBUTE(tmp_expression_name_141, mod_consts[83]);
        if (tmp_called_instance_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 92;
        tmp_call_result_58 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_48,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[85], 0)
        );

        Py_DECREF(tmp_called_instance_48);
        if (tmp_call_result_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_assattr_name_20;
        PyObject *tmp_called_name_48;
        PyObject *tmp_expression_name_142;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_expression_name_143;
        PyObject *tmp_assattr_target_20;
        tmp_expression_name_142 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_142 == NULL)) {
            tmp_expression_name_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_48 = LOOKUP_ATTRIBUTE(tmp_expression_name_142, mod_consts[25]);
        if (tmp_called_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_48);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_143 = par_self;
        tmp_args_element_name_48 = LOOKUP_ATTRIBUTE(tmp_expression_name_143, mod_consts[83]);
        if (tmp_args_element_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_48);

            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 93;
        tmp_assattr_name_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_48, tmp_args_element_name_48);
        Py_DECREF(tmp_called_name_48);
        Py_DECREF(tmp_args_element_name_48);
        if (tmp_assattr_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_20 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[86], tmp_assattr_name_20);
        Py_DECREF(tmp_assattr_name_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_49;
        PyObject *tmp_expression_name_144;
        PyObject *tmp_expression_name_145;
        PyObject *tmp_call_result_59;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_called_instance_49;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_145 = par_self;
        tmp_expression_name_144 = LOOKUP_ATTRIBUTE(tmp_expression_name_145, mod_consts[86]);
        if (tmp_expression_name_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_49 = LOOKUP_ATTRIBUTE(tmp_expression_name_144, mod_consts[12]);
        Py_DECREF(tmp_expression_name_144);
        if (tmp_called_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_49 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_49 == NULL)) {
            tmp_called_instance_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_49);

            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 94;
        tmp_args_element_name_49 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_49,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[87], 0)
        );

        if (tmp_args_element_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_49);

            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 94;
        tmp_call_result_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_49, tmp_args_element_name_49);
        Py_DECREF(tmp_called_name_49);
        Py_DECREF(tmp_args_element_name_49);
        if (tmp_call_result_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_instance_50;
        PyObject *tmp_expression_name_146;
        PyObject *tmp_call_result_60;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_146 = par_self;
        tmp_called_instance_50 = LOOKUP_ATTRIBUTE(tmp_expression_name_146, mod_consts[86]);
        if (tmp_called_instance_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 95;
        tmp_call_result_60 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_50,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[88], 0)
        );

        Py_DECREF(tmp_called_instance_50);
        if (tmp_call_result_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_60);
    }
    {
        PyObject *tmp_assattr_name_21;
        PyObject *tmp_called_name_50;
        PyObject *tmp_expression_name_147;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_expression_name_148;
        PyObject *tmp_assattr_target_21;
        tmp_expression_name_147 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_147 == NULL)) {
            tmp_expression_name_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_50 = LOOKUP_ATTRIBUTE(tmp_expression_name_147, mod_consts[29]);
        if (tmp_called_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_50);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_148 = par_self;
        tmp_args_element_name_50 = LOOKUP_ATTRIBUTE(tmp_expression_name_148, mod_consts[83]);
        if (tmp_args_element_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_50);

            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 96;
        tmp_assattr_name_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_50, tmp_args_element_name_50);
        Py_DECREF(tmp_called_name_50);
        Py_DECREF(tmp_args_element_name_50);
        if (tmp_assattr_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_21);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_21 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[89], tmp_assattr_name_21);
        Py_DECREF(tmp_assattr_name_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_51;
        PyObject *tmp_expression_name_149;
        PyObject *tmp_expression_name_150;
        PyObject *tmp_call_result_61;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_called_instance_51;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_150 = par_self;
        tmp_expression_name_149 = LOOKUP_ATTRIBUTE(tmp_expression_name_150, mod_consts[89]);
        if (tmp_expression_name_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_51 = LOOKUP_ATTRIBUTE(tmp_expression_name_149, mod_consts[12]);
        Py_DECREF(tmp_expression_name_149);
        if (tmp_called_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_51 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_51 == NULL)) {
            tmp_called_instance_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_51);

            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 97;
        tmp_args_element_name_51 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_51,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[90], 0)
        );

        if (tmp_args_element_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_51);

            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 97;
        tmp_call_result_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_51, tmp_args_element_name_51);
        Py_DECREF(tmp_called_name_51);
        Py_DECREF(tmp_args_element_name_51);
        if (tmp_call_result_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        PyObject *tmp_called_instance_52;
        PyObject *tmp_expression_name_151;
        PyObject *tmp_call_result_62;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_151 = par_self;
        tmp_called_instance_52 = LOOKUP_ATTRIBUTE(tmp_expression_name_151, mod_consts[89]);
        if (tmp_called_instance_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 98;
        tmp_call_result_62 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_52,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[91], 0)
        );

        Py_DECREF(tmp_called_instance_52);
        if (tmp_call_result_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_assattr_name_22;
        PyObject *tmp_called_name_52;
        PyObject *tmp_expression_name_152;
        PyObject *tmp_args_element_name_52;
        PyObject *tmp_expression_name_153;
        PyObject *tmp_assattr_target_22;
        tmp_expression_name_152 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_152 == NULL)) {
            tmp_expression_name_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_52 = LOOKUP_ATTRIBUTE(tmp_expression_name_152, mod_consts[9]);
        if (tmp_called_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_52);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_153 = par_self;
        tmp_args_element_name_52 = LOOKUP_ATTRIBUTE(tmp_expression_name_153, mod_consts[7]);
        if (tmp_args_element_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_52);

            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 99;
        tmp_assattr_name_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_52, tmp_args_element_name_52);
        Py_DECREF(tmp_called_name_52);
        Py_DECREF(tmp_args_element_name_52);
        if (tmp_assattr_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_22 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[92], tmp_assattr_name_22);
        Py_DECREF(tmp_assattr_name_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_53;
        PyObject *tmp_expression_name_154;
        PyObject *tmp_expression_name_155;
        PyObject *tmp_call_result_63;
        PyObject *tmp_args_element_name_53;
        PyObject *tmp_called_instance_53;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_155 = par_self;
        tmp_expression_name_154 = LOOKUP_ATTRIBUTE(tmp_expression_name_155, mod_consts[92]);
        if (tmp_expression_name_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_53 = LOOKUP_ATTRIBUTE(tmp_expression_name_154, mod_consts[12]);
        Py_DECREF(tmp_expression_name_154);
        if (tmp_called_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_53 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_53 == NULL)) {
            tmp_called_instance_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);

            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 100;
        tmp_args_element_name_53 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_53,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[93], 0)
        );

        if (tmp_args_element_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);

            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 100;
        tmp_call_result_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_53, tmp_args_element_name_53);
        Py_DECREF(tmp_called_name_53);
        Py_DECREF(tmp_args_element_name_53);
        if (tmp_call_result_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_called_name_54;
        PyObject *tmp_expression_name_156;
        PyObject *tmp_expression_name_157;
        PyObject *tmp_call_result_64;
        PyObject *tmp_args_element_name_54;
        PyObject *tmp_expression_name_158;
        PyObject *tmp_expression_name_159;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_157 = par_self;
        tmp_expression_name_156 = LOOKUP_ATTRIBUTE(tmp_expression_name_157, mod_consts[92]);
        if (tmp_expression_name_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_54 = LOOKUP_ATTRIBUTE(tmp_expression_name_156, mod_consts[16]);
        Py_DECREF(tmp_expression_name_156);
        if (tmp_called_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_159 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_159 == NULL)) {
            tmp_expression_name_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_54);

            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_158 = LOOKUP_ATTRIBUTE(tmp_expression_name_159, mod_consts[9]);
        if (tmp_expression_name_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_54);

            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_54 = LOOKUP_ATTRIBUTE(tmp_expression_name_158, mod_consts[17]);
        Py_DECREF(tmp_expression_name_158);
        if (tmp_args_element_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_54);

            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 101;
        tmp_call_result_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_54, tmp_args_element_name_54);
        Py_DECREF(tmp_called_name_54);
        Py_DECREF(tmp_args_element_name_54);
        if (tmp_call_result_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_64);
    }
    {
        PyObject *tmp_called_name_55;
        PyObject *tmp_expression_name_160;
        PyObject *tmp_expression_name_161;
        PyObject *tmp_call_result_65;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_expression_name_162;
        PyObject *tmp_expression_name_163;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_161 = par_self;
        tmp_expression_name_160 = LOOKUP_ATTRIBUTE(tmp_expression_name_161, mod_consts[92]);
        if (tmp_expression_name_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_55 = LOOKUP_ATTRIBUTE(tmp_expression_name_160, mod_consts[18]);
        Py_DECREF(tmp_expression_name_160);
        if (tmp_called_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_163 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_163 == NULL)) {
            tmp_expression_name_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_55);

            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_162 = LOOKUP_ATTRIBUTE(tmp_expression_name_163, mod_consts[9]);
        if (tmp_expression_name_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_55);

            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_55 = LOOKUP_ATTRIBUTE(tmp_expression_name_162, mod_consts[19]);
        Py_DECREF(tmp_expression_name_162);
        if (tmp_args_element_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_55);

            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 102;
        tmp_call_result_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_55, tmp_args_element_name_55);
        Py_DECREF(tmp_called_name_55);
        Py_DECREF(tmp_args_element_name_55);
        if (tmp_call_result_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_called_instance_54;
        PyObject *tmp_expression_name_164;
        PyObject *tmp_call_result_66;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_164 = par_self;
        tmp_called_instance_54 = LOOKUP_ATTRIBUTE(tmp_expression_name_164, mod_consts[92]);
        if (tmp_called_instance_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 103;
        tmp_call_result_66 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_54,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[94], 0)
        );

        Py_DECREF(tmp_called_instance_54);
        if (tmp_call_result_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_assattr_name_23;
        PyObject *tmp_called_name_56;
        PyObject *tmp_expression_name_165;
        PyObject *tmp_args_element_name_56;
        PyObject *tmp_expression_name_166;
        PyObject *tmp_assattr_target_23;
        tmp_expression_name_165 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_165 == NULL)) {
            tmp_expression_name_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_56 = LOOKUP_ATTRIBUTE(tmp_expression_name_165, mod_consts[60]);
        if (tmp_called_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_56);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_166 = par_self;
        tmp_args_element_name_56 = LOOKUP_ATTRIBUTE(tmp_expression_name_166, mod_consts[92]);
        if (tmp_args_element_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_56);

            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 104;
        tmp_assattr_name_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_56, tmp_args_element_name_56);
        Py_DECREF(tmp_called_name_56);
        Py_DECREF(tmp_args_element_name_56);
        if (tmp_assattr_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_23 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_23, mod_consts[95], tmp_assattr_name_23);
        Py_DECREF(tmp_assattr_name_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_55;
        PyObject *tmp_expression_name_167;
        PyObject *tmp_call_result_67;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 105;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_167 = par_self;
        tmp_called_instance_55 = LOOKUP_ATTRIBUTE(tmp_expression_name_167, mod_consts[95]);
        if (tmp_called_instance_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 105;
        tmp_call_result_67 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_55,
            mod_consts[62],
            &PyTuple_GET_ITEM(mod_consts[63], 0)
        );

        Py_DECREF(tmp_called_instance_55);
        if (tmp_call_result_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_67);
    }
    {
        PyObject *tmp_called_name_57;
        PyObject *tmp_expression_name_168;
        PyObject *tmp_expression_name_169;
        PyObject *tmp_call_result_68;
        PyObject *tmp_args_element_name_57;
        PyObject *tmp_called_instance_56;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_169 = par_self;
        tmp_expression_name_168 = LOOKUP_ATTRIBUTE(tmp_expression_name_169, mod_consts[95]);
        if (tmp_expression_name_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_57 = LOOKUP_ATTRIBUTE(tmp_expression_name_168, mod_consts[12]);
        Py_DECREF(tmp_expression_name_168);
        if (tmp_called_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_56 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_56 == NULL)) {
            tmp_called_instance_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_57);

            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 106;
        tmp_args_element_name_57 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_56,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[96], 0)
        );

        if (tmp_args_element_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_57);

            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 106;
        tmp_call_result_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_57, tmp_args_element_name_57);
        Py_DECREF(tmp_called_name_57);
        Py_DECREF(tmp_args_element_name_57);
        if (tmp_call_result_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_68);
    }
    {
        PyObject *tmp_called_instance_57;
        PyObject *tmp_expression_name_170;
        PyObject *tmp_call_result_69;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_170 = par_self;
        tmp_called_instance_57 = LOOKUP_ATTRIBUTE(tmp_expression_name_170, mod_consts[95]);
        if (tmp_called_instance_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 107;
        tmp_call_result_69 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_57,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[97], 0)
        );

        Py_DECREF(tmp_called_instance_57);
        if (tmp_call_result_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_69);
    }
    {
        PyObject *tmp_called_name_58;
        PyObject *tmp_expression_name_171;
        PyObject *tmp_call_result_70;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_expression_name_172;
        if (par_mainWindow == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_171 = par_mainWindow;
        tmp_called_name_58 = LOOKUP_ATTRIBUTE(tmp_expression_name_171, mod_consts[98]);
        if (tmp_called_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_58);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_172 = par_self;
        tmp_args_element_name_58 = LOOKUP_ATTRIBUTE(tmp_expression_name_172, mod_consts[7]);
        if (tmp_args_element_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_58);

            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 108;
        tmp_call_result_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_58, tmp_args_element_name_58);
        Py_DECREF(tmp_called_name_58);
        Py_DECREF(tmp_args_element_name_58);
        if (tmp_call_result_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_70);
    }
    {
        PyObject *tmp_assattr_name_24;
        PyObject *tmp_called_name_59;
        PyObject *tmp_expression_name_173;
        PyObject *tmp_args_element_name_59;
        PyObject *tmp_assattr_target_24;
        tmp_expression_name_173 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_173 == NULL)) {
            tmp_expression_name_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_59 = LOOKUP_ATTRIBUTE(tmp_expression_name_173, mod_consts[99]);
        if (tmp_called_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_mainWindow == NULL) {
            Py_DECREF(tmp_called_name_59);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_59 = par_mainWindow;
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 109;
        tmp_assattr_name_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_59, tmp_args_element_name_59);
        Py_DECREF(tmp_called_name_59);
        if (tmp_assattr_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_24 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_24, mod_consts[100], tmp_assattr_name_24);
        Py_DECREF(tmp_assattr_name_24);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_58;
        PyObject *tmp_expression_name_174;
        PyObject *tmp_call_result_71;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_174 = par_self;
        tmp_called_instance_58 = LOOKUP_ATTRIBUTE(tmp_expression_name_174, mod_consts[100]);
        if (tmp_called_instance_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 110;
        tmp_call_result_71 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_58,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[101], 0)
        );

        Py_DECREF(tmp_called_instance_58);
        if (tmp_call_result_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_71);
    }
    {
        PyObject *tmp_called_name_60;
        PyObject *tmp_expression_name_175;
        PyObject *tmp_call_result_72;
        PyObject *tmp_args_element_name_60;
        PyObject *tmp_expression_name_176;
        if (par_mainWindow == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 111;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_175 = par_mainWindow;
        tmp_called_name_60 = LOOKUP_ATTRIBUTE(tmp_expression_name_175, mod_consts[102]);
        if (tmp_called_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_60);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 111;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_176 = par_self;
        tmp_args_element_name_60 = LOOKUP_ATTRIBUTE(tmp_expression_name_176, mod_consts[100]);
        if (tmp_args_element_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_60);

            exception_lineno = 111;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 111;
        tmp_call_result_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_60, tmp_args_element_name_60);
        Py_DECREF(tmp_called_name_60);
        Py_DECREF(tmp_args_element_name_60);
        if (tmp_call_result_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        PyObject *tmp_called_name_61;
        PyObject *tmp_expression_name_177;
        PyObject *tmp_call_result_73;
        PyObject *tmp_args_element_name_61;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 113;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_177 = par_self;
        tmp_called_name_61 = LOOKUP_ATTRIBUTE(tmp_expression_name_177, mod_consts[103]);
        if (tmp_called_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_mainWindow == NULL) {
            Py_DECREF(tmp_called_name_61);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 113;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_61 = par_mainWindow;
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 113;
        tmp_call_result_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_61, tmp_args_element_name_61);
        Py_DECREF(tmp_called_name_61);
        if (tmp_call_result_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_73);
    }
    {
        PyObject *tmp_called_name_62;
        PyObject *tmp_expression_name_178;
        PyObject *tmp_expression_name_179;
        PyObject *tmp_call_result_74;
        PyObject *tmp_args_element_name_62;
        tmp_expression_name_179 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_name_179 == NULL)) {
            tmp_expression_name_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_name_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_178 = LOOKUP_ATTRIBUTE(tmp_expression_name_179, mod_consts[104]);
        if (tmp_expression_name_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_62 = LOOKUP_ATTRIBUTE(tmp_expression_name_178, mod_consts[105]);
        Py_DECREF(tmp_expression_name_178);
        if (tmp_called_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_mainWindow == NULL) {
            Py_DECREF(tmp_called_name_62);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 114;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_62 = par_mainWindow;
        frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame.f_lineno = 114;
        tmp_call_result_74 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_62, tmp_args_element_name_62);
        Py_DECREF(tmp_called_name_62);
        if (tmp_call_result_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_74);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3e61ae88b46eadb8c1e8ced31a534b35);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3e61ae88b46eadb8c1e8ced31a534b35);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3e61ae88b46eadb8c1e8ced31a534b35, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e61ae88b46eadb8c1e8ced31a534b35->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e61ae88b46eadb8c1e8ced31a534b35, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e61ae88b46eadb8c1e8ced31a534b35,
        type_description_1,
        par_self,
        par_mainWindow
    );


    // Release cached frame if used for exception.
    if (frame_3e61ae88b46eadb8c1e8ced31a534b35 == cache_frame_3e61ae88b46eadb8c1e8ced31a534b35) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3e61ae88b46eadb8c1e8ced31a534b35);
        cache_frame_3e61ae88b46eadb8c1e8ced31a534b35 = NULL;
    }

    assertFrameObject(frame_3e61ae88b46eadb8c1e8ced31a534b35);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_mainWindow);
    par_mainWindow = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_mainWindow);
    par_mainWindow = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_src$ui$MainWindow$$$function__2_retranslateUi(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_mainWindow = python_pars[1];
    PyObject *var__translate = NULL;
    struct Nuitka_FrameObject *frame_c21b04c45173f1f9f5a8580baaecf796;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c21b04c45173f1f9f5a8580baaecf796 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c21b04c45173f1f9f5a8580baaecf796)) {
        Py_XDECREF(cache_frame_c21b04c45173f1f9f5a8580baaecf796);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c21b04c45173f1f9f5a8580baaecf796 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c21b04c45173f1f9f5a8580baaecf796 = MAKE_FUNCTION_FRAME(codeobj_c21b04c45173f1f9f5a8580baaecf796, module_src$ui$MainWindow, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c21b04c45173f1f9f5a8580baaecf796->m_type_description == NULL);
    frame_c21b04c45173f1f9f5a8580baaecf796 = cache_frame_c21b04c45173f1f9f5a8580baaecf796;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c21b04c45173f1f9f5a8580baaecf796);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c21b04c45173f1f9f5a8580baaecf796) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[106]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[107]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var__translate == NULL);
        var__translate = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        CHECK_OBJECT(par_mainWindow);
        tmp_expression_name_3 = par_mainWindow;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[108]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_2 = var__translate;
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 118;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, &PyTuple_GET_ITEM(mod_consts[109], 0));

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 118;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 118;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_4;
        CHECK_OBJECT(par_self);
        tmp_expression_name_5 = par_self;
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[26]);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[58]);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_4 = var__translate;
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 119;
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, &PyTuple_GET_ITEM(mod_consts[110], 0));

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 119;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_name_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 120;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_self;
        tmp_expression_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[30]);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[111]);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = mod_consts[112];
        CHECK_OBJECT(var__translate);
        tmp_called_name_6 = var__translate;
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 120;
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, &PyTuple_GET_ITEM(mod_consts[113], 0));

        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 120;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_name_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = par_self;
        tmp_expression_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[30]);
        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[111]);
        Py_DECREF(tmp_expression_name_8);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = mod_consts[114];
        CHECK_OBJECT(var__translate);
        tmp_called_name_8 = var__translate;
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 121;
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_8, &PyTuple_GET_ITEM(mod_consts[115], 0));

        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 121;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_7, call_args);
        }

        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_name_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_11 = par_self;
        tmp_expression_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[30]);
        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[111]);
        Py_DECREF(tmp_expression_name_10);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = mod_consts[116];
        CHECK_OBJECT(var__translate);
        tmp_called_name_10 = var__translate;
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 122;
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_10, &PyTuple_GET_ITEM(mod_consts[117], 0));

        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 122;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_9, call_args);
        }

        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_called_name_12;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_13 = par_self;
        tmp_expression_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[30]);
        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[111]);
        Py_DECREF(tmp_expression_name_12);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_9 = mod_consts[118];
        CHECK_OBJECT(var__translate);
        tmp_called_name_12 = var__translate;
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 123;
        tmp_args_element_name_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_12, &PyTuple_GET_ITEM(mod_consts[119], 0));

        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_11, call_args);
        }

        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_name_14;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_15 = par_self;
        tmp_expression_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[30]);
        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[111]);
        Py_DECREF(tmp_expression_name_14);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_11 = mod_consts[120];
        CHECK_OBJECT(var__translate);
        tmp_called_name_14 = var__translate;
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 124;
        tmp_args_element_name_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_14, &PyTuple_GET_ITEM(mod_consts[121], 0));

        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_13);

            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = {tmp_args_element_name_11, tmp_args_element_name_12};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_13, call_args);
        }

        Py_DECREF(tmp_called_name_13);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_called_name_16;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_17 = par_self;
        tmp_expression_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[30]);
        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[111]);
        Py_DECREF(tmp_expression_name_16);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = mod_consts[122];
        CHECK_OBJECT(var__translate);
        tmp_called_name_16 = var__translate;
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 125;
        tmp_args_element_name_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_16, &PyTuple_GET_ITEM(mod_consts[123], 0));

        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = {tmp_args_element_name_13, tmp_args_element_name_14};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_15, call_args);
        }

        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_called_name_18;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_19 = par_self;
        tmp_expression_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[35]);
        if (tmp_expression_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[58]);
        Py_DECREF(tmp_expression_name_18);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_18 = var__translate;
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 126;
        tmp_args_element_name_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_18, &PyTuple_GET_ITEM(mod_consts[124], 0));

        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 126;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_15);
        Py_DECREF(tmp_called_name_17);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_name_19;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_called_name_20;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 127;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_21 = par_self;
        tmp_expression_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[38]);
        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[58]);
        Py_DECREF(tmp_expression_name_20);
        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_20 = var__translate;
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 127;
        tmp_args_element_name_16 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_20, &PyTuple_GET_ITEM(mod_consts[125], 0));

        if (tmp_args_element_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 127;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 127;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_16);
        Py_DECREF(tmp_called_name_19);
        Py_DECREF(tmp_args_element_name_16);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_called_name_22;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 128;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_23 = par_self;
        tmp_expression_name_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[42]);
        if (tmp_expression_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[58]);
        Py_DECREF(tmp_expression_name_22);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_22 = var__translate;
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 128;
        tmp_args_element_name_17 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_22, &PyTuple_GET_ITEM(mod_consts[126], 0));

        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 128;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 128;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, tmp_args_element_name_17);
        Py_DECREF(tmp_called_name_21);
        Py_DECREF(tmp_args_element_name_17);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_name_23;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_called_name_24;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_25 = par_self;
        tmp_expression_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[61]);
        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[127]);
        Py_DECREF(tmp_expression_name_24);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_24 = var__translate;
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 129;
        tmp_args_element_name_18 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_24, &PyTuple_GET_ITEM(mod_consts[128], 0));

        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_23);

            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 129;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_18);
        Py_DECREF(tmp_called_name_23);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_name_25;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_called_name_26;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_27 = par_self;
        tmp_expression_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[71]);
        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[58]);
        Py_DECREF(tmp_expression_name_26);
        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_26 = var__translate;
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 134;
        tmp_args_element_name_19 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_26, &PyTuple_GET_ITEM(mod_consts[129], 0));

        if (tmp_args_element_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_25);

            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 134;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_25, tmp_args_element_name_19);
        Py_DECREF(tmp_called_name_25);
        Py_DECREF(tmp_args_element_name_19);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_name_27;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_called_name_28;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_29 = par_self;
        tmp_expression_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[74]);
        if (tmp_expression_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[58]);
        Py_DECREF(tmp_expression_name_28);
        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_28 = var__translate;
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 135;
        tmp_args_element_name_20 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_28, &PyTuple_GET_ITEM(mod_consts[130], 0));

        if (tmp_args_element_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_27);

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 135;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, tmp_args_element_name_20);
        Py_DECREF(tmp_called_name_27);
        Py_DECREF(tmp_args_element_name_20);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_name_29;
        PyObject *tmp_expression_name_30;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_called_name_30;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_31 = par_self;
        tmp_expression_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[77]);
        if (tmp_expression_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[58]);
        Py_DECREF(tmp_expression_name_30);
        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_30 = var__translate;
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 136;
        tmp_args_element_name_21 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_30, &PyTuple_GET_ITEM(mod_consts[131], 0));

        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_29);

            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 136;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, tmp_args_element_name_21);
        Py_DECREF(tmp_called_name_29);
        Py_DECREF(tmp_args_element_name_21);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_name_31;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_called_name_32;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_33 = par_self;
        tmp_expression_name_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[80]);
        if (tmp_expression_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[58]);
        Py_DECREF(tmp_expression_name_32);
        if (tmp_called_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_32 = var__translate;
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 137;
        tmp_args_element_name_22 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_32, &PyTuple_GET_ITEM(mod_consts[132], 0));

        if (tmp_args_element_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_31);

            exception_lineno = 137;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 137;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_31, tmp_args_element_name_22);
        Py_DECREF(tmp_called_name_31);
        Py_DECREF(tmp_args_element_name_22);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_name_33;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_expression_name_35;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_called_name_34;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 138;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_35 = par_self;
        tmp_expression_name_34 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[86]);
        if (tmp_expression_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[58]);
        Py_DECREF(tmp_expression_name_34);
        if (tmp_called_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_34 = var__translate;
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 138;
        tmp_args_element_name_23 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_34, &PyTuple_GET_ITEM(mod_consts[133], 0));

        if (tmp_args_element_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_33);

            exception_lineno = 138;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c21b04c45173f1f9f5a8580baaecf796->m_frame.f_lineno = 138;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_33, tmp_args_element_name_23);
        Py_DECREF(tmp_called_name_33);
        Py_DECREF(tmp_args_element_name_23);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c21b04c45173f1f9f5a8580baaecf796);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c21b04c45173f1f9f5a8580baaecf796);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c21b04c45173f1f9f5a8580baaecf796, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c21b04c45173f1f9f5a8580baaecf796->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c21b04c45173f1f9f5a8580baaecf796, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c21b04c45173f1f9f5a8580baaecf796,
        type_description_1,
        par_self,
        par_mainWindow,
        var__translate
    );


    // Release cached frame if used for exception.
    if (frame_c21b04c45173f1f9f5a8580baaecf796 == cache_frame_c21b04c45173f1f9f5a8580baaecf796) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c21b04c45173f1f9f5a8580baaecf796);
        cache_frame_c21b04c45173f1f9f5a8580baaecf796 = NULL;
    }

    assertFrameObject(frame_c21b04c45173f1f9f5a8580baaecf796);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_mainWindow);
    par_mainWindow = NULL;
    CHECK_OBJECT(var__translate);
    Py_DECREF(var__translate);
    var__translate = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_mainWindow);
    par_mainWindow = NULL;
    Py_XDECREF(var__translate);
    var__translate = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_src$ui$MainWindow$$$function__1_setupUi() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_src$ui$MainWindow$$$function__1_setupUi,
        mod_consts[154],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_3e61ae88b46eadb8c1e8ced31a534b35,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_src$ui$MainWindow,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_src$ui$MainWindow$$$function__2_retranslateUi() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_src$ui$MainWindow$$$function__2_retranslateUi,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_c21b04c45173f1f9f5a8580baaecf796,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_src$ui$MainWindow,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_src$ui$MainWindow[] = {
    impl_src$ui$MainWindow$$$function__1_setupUi,
    impl_src$ui$MainWindow$$$function__2_retranslateUi,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_src$ui$MainWindow;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_src$ui$MainWindow) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_src$ui$MainWindow[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_src$ui$MainWindow,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Actual name might be different when loaded as a package.
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "src.ui.MainWindow";

// Internal entry point for module code.
PyObject *modulecode_src$ui$MainWindow(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_src$ui$MainWindow = module;

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 0x300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("src.ui.MainWindow: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("src.ui.MainWindow: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("src.ui.MainWindow: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initsrc$ui$MainWindow\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_src$ui$MainWindow = MODULE_DICT(module_src$ui$MainWindow);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL) {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_src$ui$MainWindow,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_src$ui$MainWindow,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_src$ui$MainWindow,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_src$ui$MainWindow,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_src$ui$MainWindow,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_src$ui$MainWindow);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_src$ui$MainWindow);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_1b5d64867d57fddadbcb8fa2c97308ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_src$ui$MainWindow$$$class__1_Ui_mainWindow_14 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_10c3a5949e5861e804d798f68bfdaa7e_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_10c3a5949e5861e804d798f68bfdaa7e_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_1b5d64867d57fddadbcb8fa2c97308ca = MAKE_MODULE_FRAME(codeobj_1b5d64867d57fddadbcb8fa2c97308ca, module_src$ui$MainWindow);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_1b5d64867d57fddadbcb8fa2c97308ca);
    assert(Py_REFCNT(frame_1b5d64867d57fddadbcb8fa2c97308ca) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[137], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[138], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[140];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_src$ui$MainWindow;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[141];
        tmp_level_name_1 = mod_consts[112];
        frame_1b5d64867d57fddadbcb8fa2c97308ca->m_frame.f_lineno = 11;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_src$ui$MainWindow,
                mod_consts[13],
                mod_consts[112]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[13]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_src$ui$MainWindow,
                mod_consts[142],
                mod_consts[112]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[142]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_src$ui$MainWindow,
                mod_consts[5],
                mod_consts[112]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[5]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_7);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[143];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_8 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[144];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_1, tmp_key_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = mod_consts[144];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = mod_consts[112];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_10 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[144];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[144];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 14;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[145]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[145]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[146];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_1b5d64867d57fddadbcb8fa2c97308ca->m_frame.f_lineno = 14;
        tmp_assign_source_11 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_4, mod_consts[147]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[148];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[149];
        tmp_getattr_default_1 = mod_consts[150];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[149]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 14;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_12;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_src$ui$MainWindow$$$class__1_Ui_mainWindow_14 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[151];
        tmp_res = PyObject_SetItem(locals_src$ui$MainWindow$$$class__1_Ui_mainWindow_14, mod_consts[152], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[146];
        tmp_res = PyObject_SetItem(locals_src$ui$MainWindow$$$class__1_Ui_mainWindow_14, mod_consts[153], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_10c3a5949e5861e804d798f68bfdaa7e_2)) {
            Py_XDECREF(cache_frame_10c3a5949e5861e804d798f68bfdaa7e_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_10c3a5949e5861e804d798f68bfdaa7e_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_10c3a5949e5861e804d798f68bfdaa7e_2 = MAKE_FUNCTION_FRAME(codeobj_10c3a5949e5861e804d798f68bfdaa7e, module_src$ui$MainWindow, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_10c3a5949e5861e804d798f68bfdaa7e_2->m_type_description == NULL);
        frame_10c3a5949e5861e804d798f68bfdaa7e_2 = cache_frame_10c3a5949e5861e804d798f68bfdaa7e_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_10c3a5949e5861e804d798f68bfdaa7e_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_10c3a5949e5861e804d798f68bfdaa7e_2) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_src$ui$MainWindow$$$function__1_setupUi();

        tmp_res = PyObject_SetItem(locals_src$ui$MainWindow$$$class__1_Ui_mainWindow_14, mod_consts[154], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_src$ui$MainWindow$$$function__2_retranslateUi();

        tmp_res = PyObject_SetItem(locals_src$ui$MainWindow$$$class__1_Ui_mainWindow_14, mod_consts[103], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_10c3a5949e5861e804d798f68bfdaa7e_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_10c3a5949e5861e804d798f68bfdaa7e_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_10c3a5949e5861e804d798f68bfdaa7e_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_10c3a5949e5861e804d798f68bfdaa7e_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_10c3a5949e5861e804d798f68bfdaa7e_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_10c3a5949e5861e804d798f68bfdaa7e_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_10c3a5949e5861e804d798f68bfdaa7e_2 == cache_frame_10c3a5949e5861e804d798f68bfdaa7e_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_10c3a5949e5861e804d798f68bfdaa7e_2);
            cache_frame_10c3a5949e5861e804d798f68bfdaa7e_2 = NULL;
        }

        assertFrameObject(frame_10c3a5949e5861e804d798f68bfdaa7e_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = mod_consts[143];
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        tmp_dictset_value = mod_consts[143];
        tmp_res = PyObject_SetItem(locals_src$ui$MainWindow$$$class__1_Ui_mainWindow_14, mod_consts[157], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[146];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_src$ui$MainWindow$$$class__1_Ui_mainWindow_14;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_1b5d64867d57fddadbcb8fa2c97308ca->m_frame.f_lineno = 14;
            tmp_assign_source_14 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_13 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_src$ui$MainWindow$$$class__1_Ui_mainWindow_14);
        locals_src$ui$MainWindow$$$class__1_Ui_mainWindow_14 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_src$ui$MainWindow$$$class__1_Ui_mainWindow_14);
        locals_src$ui$MainWindow$$$class__1_Ui_mainWindow_14 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 14;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_src$ui$MainWindow, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_13);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1b5d64867d57fddadbcb8fa2c97308ca);
#endif
    popFrameStack();

    assertFrameObject(frame_1b5d64867d57fddadbcb8fa2c97308ca);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1b5d64867d57fddadbcb8fa2c97308ca);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1b5d64867d57fddadbcb8fa2c97308ca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b5d64867d57fddadbcb8fa2c97308ca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b5d64867d57fddadbcb8fa2c97308ca, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    return module_src$ui$MainWindow;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

