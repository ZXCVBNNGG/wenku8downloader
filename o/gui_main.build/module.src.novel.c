/* Generated code for Python module 'src.novel'
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

/* The "module_src$novel" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_src$novel;
PyDictObject *moduledict_src$novel;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[126];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "src.novel");

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
void checkModuleConstants_src$novel(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "src.novel");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b97b5abb9ebae4988ebcb864861f77b9;
static PyCodeObject *codeobj_710ab246c3f61033c0a6fb711085d915;
static PyCodeObject *codeobj_18bb62c648bca56ff2a8742948b966ab;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[122]); CHECK_OBJECT(module_filename_obj);
    codeobj_b97b5abb9ebae4988ebcb864861f77b9 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[123], NULL, NULL, 0, 0, 0);
    codeobj_710ab246c3f61033c0a6fb711085d915 = MAKE_CODEOBJECT(module_filename_obj, 17, CO_NOFREE, mod_consts[108], mod_consts[124], NULL, 0, 0, 0);
    codeobj_18bb62c648bca56ff2a8742948b966ab = MAKE_CODEOBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[120], mod_consts[125], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_src$novel$$$function__1___init__(PyObject *annotations);


// The module function definitions.
static PyObject *impl_src$novel$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_articleid = python_pars[1];
    PyObject *var_main_page_request = NULL;
    PyObject *var_main_page = NULL;
    PyObject *var_main_web_content = NULL;
    PyObject *var_i = NULL;
    PyObject *var_read_page_request = NULL;
    PyObject *var_read_page = NULL;
    PyObject *var_tags = NULL;
    PyObject *var_volumeList = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_18bb62c648bca56ff2a8742948b966ab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_18bb62c648bca56ff2a8742948b966ab = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_18bb62c648bca56ff2a8742948b966ab)) {
        Py_XDECREF(cache_frame_18bb62c648bca56ff2a8742948b966ab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18bb62c648bca56ff2a8742948b966ab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18bb62c648bca56ff2a8742948b966ab = MAKE_FUNCTION_FRAME(codeobj_18bb62c648bca56ff2a8742948b966ab, module_src$novel, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_18bb62c648bca56ff2a8742948b966ab->m_type_description == NULL);
    frame_18bb62c648bca56ff2a8742948b966ab = cache_frame_18bb62c648bca56ff2a8742948b966ab;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_18bb62c648bca56ff2a8742948b966ab);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_18bb62c648bca56ff2a8742948b966ab) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[2];
        tmp_string_concat_values_1 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_articleid);
            tmp_format_value_1 = par_articleid;
            tmp_format_spec_1 = mod_consts[3];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[4];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_tuple_element_1 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 36;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[5];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 36;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_name_2;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[6];
            tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_name_2 == NULL)) {
                tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            if (tmp_expression_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[6]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 36;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_main_page_request == NULL);
        var_main_page_request = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[8];
        CHECK_OBJECT(var_main_page_request);
        tmp_assattr_target_1 = var_main_page_request;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[9], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_kwargs_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_main_page_request);
        tmp_expression_name_3 = var_main_page_request;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[11]);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_3);
        tmp_kwargs_name_2 = PyDict_Copy(mod_consts[12]);
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 39;
        tmp_assign_source_2 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_main_page == NULL);
        var_main_page = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(var_main_page);
        tmp_expression_name_4 = var_main_page;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[11]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_main_web_content == NULL);
        var_main_web_content = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_articleid);
        tmp_assattr_name_2 = par_articleid;
        CHECK_OBJECT(par_cls);
        tmp_assattr_target_2 = par_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[13], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_assattr_target_3;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[15];
        CHECK_OBJECT(var_main_web_content);
        tmp_args_element_name_2 = var_main_web_content;
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 42;
        tmp_assattr_name_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[16]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_assattr_target_3 = par_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[17], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[18];
        tmp_assign_source_4 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooo";
                exception_lineno = 43;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_name_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_name_6;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[1]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_5 = mod_consts[19];
        tmp_string_concat_values_2 = PyTuple_New(5);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(var_i);
            tmp_format_value_2 = var_i;
            tmp_format_spec_2 = mod_consts[3];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[20];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_5);
            if (par_articleid == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 45;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_format_value_3 = par_articleid;
            tmp_format_spec_3 = mod_consts[3];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_tuple_element_4 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 45;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_name_3 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_4);
        tmp_dict_key_2 = mod_consts[6];
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_name_3);

            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[6]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_name_3);

            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_kwargs_name_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[5];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooo";
            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kwargs_name_3);
        goto try_except_handler_2;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 44;
        tmp_assign_source_7 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kwargs_name_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_read_page_request;
            var_read_page_request = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(var_read_page_request);
        tmp_expression_name_7 = var_read_page_request;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[23]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = mod_consts[24];
        tmp_operand_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(var_i);
        tmp_assattr_name_4 = var_i;
        if (par_cls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_4 = par_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[26], tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 43;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_value_name_1;
        PyObject *tmp_expression_name_8;
        if (par_cls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_cls;
        tmp_value_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[17]);
        if (tmp_value_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_name_1);
        Py_DECREF(tmp_value_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 49;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_assattr_target_5;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = mod_consts[27];
        CHECK_OBJECT(var_main_web_content);
        tmp_args_element_name_4 = var_main_web_content;
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_cls == NULL) {
            Py_DECREF(tmp_assattr_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = par_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[28], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = mod_consts[29];
        CHECK_OBJECT(var_main_web_content);
        tmp_args_element_name_6 = var_main_web_content;
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assattr_name_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, call_args);
        }

        if (tmp_assattr_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_cls == NULL) {
            Py_DECREF(tmp_assattr_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = par_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[30], tmp_assattr_name_6);
        Py_DECREF(tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_assattr_target_7;
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = mod_consts[31];
        CHECK_OBJECT(var_main_web_content);
        tmp_args_element_name_8 = var_main_web_content;
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_assattr_name_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_7, call_args);
        }

        if (tmp_assattr_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_cls == NULL) {
            Py_DECREF(tmp_assattr_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_7 = par_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[32], tmp_assattr_name_7);
        Py_DECREF(tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_assattr_target_8;
        tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_8 == NULL)) {
            tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_9 = mod_consts[33];
        CHECK_OBJECT(var_main_web_content);
        tmp_args_element_name_10 = var_main_web_content;
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_assattr_name_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_8, call_args);
        }

        if (tmp_assattr_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_cls == NULL) {
            Py_DECREF(tmp_assattr_name_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_8 = par_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[34], tmp_assattr_name_8);
        Py_DECREF(tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_1;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(var_main_web_content);
        tmp_called_instance_2 = var_main_web_content;
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 54;
        tmp_compexpr_left_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[35],
            &PyTuple_GET_ITEM(mod_consts[36], 0)
        );

        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[37];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 54;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assattr_name_9 = Py_True;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assattr_name_9 = Py_False;
        condexpr_end_1:;
        if (par_cls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_9 = par_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[38], tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_assattr_target_10;
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_11 = mod_consts[39];
        if (var_main_web_content == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_12 = var_main_web_content;
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_name_11, tmp_args_element_name_12};
            tmp_called_instance_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_9, call_args);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 55;
        tmp_called_instance_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[16]);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 55;
        tmp_called_instance_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[41]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 55;
        tmp_called_instance_4 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_5,
            mod_consts[42],
            &PyTuple_GET_ITEM(mod_consts[43], 0)
        );

        Py_DECREF(tmp_called_instance_5);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 55;
        tmp_called_instance_3 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_4,
            mod_consts[42],
            &PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        Py_DECREF(tmp_called_instance_4);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 55;
        tmp_assattr_name_10 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_3,
            mod_consts[42],
            &PyTuple_GET_ITEM(mod_consts[45], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_assattr_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_cls == NULL) {
            Py_DECREF(tmp_assattr_name_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_10 = par_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[46], tmp_assattr_name_10);
        Py_DECREF(tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_assattr_target_11;
        tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_name_10 == NULL)) {
            tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = mod_consts[48];
        tmp_string_concat_values_3 = PyTuple_New(7);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_expression_name_10;
            PyObject *tmp_format_spec_4;
            PyObject *tmp_format_value_5;
            PyObject *tmp_expression_name_11;
            PyObject *tmp_format_spec_5;
            PyObject *tmp_format_value_6;
            PyObject *tmp_expression_name_12;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_6);
            if (par_cls == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 56;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_expression_name_10 = par_cls;
            tmp_format_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[26]);
            if (tmp_format_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_4 = mod_consts[3];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[20];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_6);
            if (par_cls == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 56;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_expression_name_11 = par_cls;
            tmp_format_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[13]);
            if (tmp_format_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_5 = mod_consts[3];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[20];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_6);
            if (par_cls == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 56;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_expression_name_12 = par_cls;
            tmp_format_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[13]);
            if (tmp_format_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_6 = mod_consts[3];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
            Py_DECREF(tmp_format_value_6);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 5, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[49];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 6, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_name_13 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_name_13 == NULL)) {
            tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_13);

            exception_lineno = 57;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[6]);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_13);

            exception_lineno = 57;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_name_13, tmp_args_element_name_14};
            tmp_expression_name_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_10, call_args);
        }

        Py_DECREF(tmp_args_element_name_13);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[50]);
        Py_DECREF(tmp_expression_name_9);
        if (tmp_assattr_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_cls == NULL) {
            Py_DECREF(tmp_assattr_name_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_11 = par_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[51], tmp_assattr_name_11);
        Py_DECREF(tmp_assattr_name_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_name_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_name_16;
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[1]);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = mod_consts[19];
        tmp_string_concat_values_4 = PyTuple_New(5);
        {
            PyObject *tmp_format_value_7;
            PyObject *tmp_expression_name_15;
            PyObject *tmp_format_spec_7;
            PyObject *tmp_format_value_8;
            PyObject *tmp_format_spec_8;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_8);
            if (par_cls == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 59;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_4;
            }

            tmp_expression_name_15 = par_cls;
            tmp_format_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[26]);
            if (tmp_format_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_7 = mod_consts[3];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_7, tmp_format_spec_7);
            Py_DECREF(tmp_format_value_7);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[20];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_8);
            if (par_articleid == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 59;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_4;
            }

            tmp_format_value_8 = par_articleid;
            tmp_format_spec_8 = mod_consts[3];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_8, tmp_format_spec_8);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 3, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 4, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_string_concat_values_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_tuple_element_7 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 59;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_4 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_4, 0, tmp_tuple_element_7);
        tmp_dict_key_3 = mod_consts[6];
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_args_name_4);

            exception_lineno = 60;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[6]);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_args_name_4);

            exception_lineno = 60;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_4 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_4, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[5];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooo";
            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_kwargs_name_4, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_args_name_4);
        Py_DECREF(tmp_kwargs_name_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 58;
        tmp_assign_source_8 = CALL_FUNCTION(tmp_called_name_11, tmp_args_name_4, tmp_kwargs_name_4);
        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_args_name_4);
        Py_DECREF(tmp_kwargs_name_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_read_page_request;
            var_read_page_request = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_assattr_target_12;
        tmp_assattr_name_12 = mod_consts[8];
        CHECK_OBJECT(var_read_page_request);
        tmp_assattr_target_12 = var_read_page_request;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[9], tmp_assattr_name_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_12;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_kwargs_name_5;
        tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_name_12 == NULL)) {
            tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_read_page_request);
        tmp_expression_name_17 = var_read_page_request;
        tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[11]);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_5 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_5, 0, tmp_tuple_element_9);
        tmp_kwargs_name_5 = PyDict_Copy(mod_consts[12]);
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 62;
        tmp_assign_source_9 = CALL_FUNCTION(tmp_called_name_12, tmp_args_name_5, tmp_kwargs_name_5);
        Py_DECREF(tmp_args_name_5);
        Py_DECREF(tmp_kwargs_name_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_read_page == NULL);
        var_read_page = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_8;
        CHECK_OBJECT(var_read_page);
        tmp_called_instance_8 = var_read_page;
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 64;
        tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_8,
            mod_consts[52],
            &PyTuple_GET_ITEM(mod_consts[53], 0)
        );

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tags == NULL);
        var_tags = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = PyList_New(0);
        assert(var_volumeList == NULL);
        var_volumeList = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_tags);
        tmp_iter_arg_2 = var_tags;
        tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooo";
                exception_lineno = 66;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_14 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_14;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_tmp_condition_result_4_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_i);
        tmp_expression_name_19 = var_i;
        tmp_subscript_name_1 = mod_consts[54];
        tmp_expression_name_18 = LOOKUP_SUBSCRIPT(tmp_expression_name_19, tmp_subscript_name_1);
        if (tmp_expression_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_name_2 = mod_consts[55];
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_18, tmp_subscript_name_2, 0);
        Py_DECREF(tmp_expression_name_18);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_3 = mod_consts[56];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_tmp_condition_result_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_4_object_1);

            exception_lineno = 67;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_name_21;
        if (var_volumeList == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_20 = var_volumeList;
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[58]);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_dict_key_4 = mod_consts[59];
        CHECK_OBJECT(var_i);
        tmp_expression_name_21 = var_i;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[60]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_13);

            exception_lineno = 68;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_dict_value_4 = PyObject_Unicode(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_13);

            exception_lineno = 68;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_name_15 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_15, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[61];
        tmp_dict_value_4 = PyList_New(0);
        tmp_res = PyDict_SetItem(tmp_args_element_name_15, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 68;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_15);
        Py_DECREF(tmp_called_name_13);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_tmp_and_left_value_1_object_1;
        int tmp_truth_name_3;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_tmp_and_right_value_1_object_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_i);
        tmp_expression_name_23 = var_i;
        tmp_subscript_name_3 = mod_consts[54];
        tmp_expression_name_22 = LOOKUP_SUBSCRIPT(tmp_expression_name_23, tmp_subscript_name_3);
        if (tmp_expression_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_name_4 = mod_consts[55];
        tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_22, tmp_subscript_name_4, 0);
        Py_DECREF(tmp_expression_name_22);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_4 = mod_consts[62];
        tmp_tmp_and_left_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        if (tmp_tmp_and_left_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_and_left_value_1_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_left_value_1_object_1);

            exception_lineno = 69;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_and_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_left_value_1_object_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_i);
        tmp_expression_name_24 = var_i;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[60]);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_5 = mod_consts[63];
        tmp_tmp_and_right_value_1_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        if (tmp_tmp_and_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_and_right_value_1_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_1_object_1);

            exception_lineno = 69;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_and_right_value_1 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_right_value_1_object_1);
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_name_14;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_expression_name_28;
        if (var_volumeList == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 70;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_27 = var_volumeList;
        if (var_volumeList == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 70;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_len_arg_1 = var_volumeList;
        tmp_left_name_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_1 = mod_consts[64];
        tmp_subscript_name_5 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        assert(!(tmp_subscript_name_5 == NULL));
        tmp_expression_name_26 = LOOKUP_SUBSCRIPT(tmp_expression_name_27, tmp_subscript_name_5);
        Py_DECREF(tmp_subscript_name_5);
        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_name_6 = mod_consts[61];
        tmp_expression_name_25 = LOOKUP_SUBSCRIPT(tmp_expression_name_26, tmp_subscript_name_6);
        Py_DECREF(tmp_expression_name_26);
        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[58]);
        Py_DECREF(tmp_expression_name_25);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_dict_key_5 = mod_consts[59];
        if (var_i == NULL) {
            Py_DECREF(tmp_called_name_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_28 = var_i;
        tmp_unicode_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[60]);
        if (tmp_unicode_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 71;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_dict_value_5 = PyObject_Unicode(tmp_unicode_arg_2);
        Py_DECREF(tmp_unicode_arg_2);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 71;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_name_16 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_int_arg_1;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_expression_name_29;
            PyObject *tmp_expression_name_30;
            PyObject *tmp_subscript_name_7;
            tmp_res = PyDict_SetItem(tmp_args_element_name_16, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[66];
            if (var_i == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 71;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_4;
            }

            tmp_expression_name_30 = var_i;
            tmp_expression_name_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[67]);
            if (tmp_expression_name_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_4;
            }
            tmp_subscript_name_7 = mod_consts[68];
            tmp_called_instance_9 = LOOKUP_SUBSCRIPT(tmp_expression_name_29, tmp_subscript_name_7);
            Py_DECREF(tmp_expression_name_29);
            if (tmp_called_instance_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_4;
            }
            frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 71;
            tmp_int_arg_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_9,
                mod_consts[42],
                &PyTuple_GET_ITEM(mod_consts[69], 0)
            );

            Py_DECREF(tmp_called_instance_9);
            if (tmp_int_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_4;
            }
            tmp_dict_value_5 = PyNumber_Int(tmp_int_arg_1);
            Py_DECREF(tmp_int_arg_1);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_name_16, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_called_name_14);
        Py_DECREF(tmp_args_element_name_16);
        goto try_except_handler_3;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        frame_18bb62c648bca56ff2a8742948b966ab->m_frame.f_lineno = 70;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_16);
        Py_DECREF(tmp_called_name_14);
        Py_DECREF(tmp_args_element_name_16);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    branch_end_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 66;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_assattr_target_13;
        if (var_volumeList == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 72;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_13 = var_volumeList;
        if (par_cls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 72;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_13 = par_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[57], tmp_assattr_name_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_18bb62c648bca56ff2a8742948b966ab);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_18bb62c648bca56ff2a8742948b966ab);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_18bb62c648bca56ff2a8742948b966ab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18bb62c648bca56ff2a8742948b966ab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18bb62c648bca56ff2a8742948b966ab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18bb62c648bca56ff2a8742948b966ab,
        type_description_1,
        par_cls,
        par_articleid,
        var_main_page_request,
        var_main_page,
        var_main_web_content,
        var_i,
        var_read_page_request,
        var_read_page,
        var_tags,
        var_volumeList
    );


    // Release cached frame if used for exception.
    if (frame_18bb62c648bca56ff2a8742948b966ab == cache_frame_18bb62c648bca56ff2a8742948b966ab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_18bb62c648bca56ff2a8742948b966ab);
        cache_frame_18bb62c648bca56ff2a8742948b966ab = NULL;
    }

    assertFrameObject(frame_18bb62c648bca56ff2a8742948b966ab);

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
    Py_XDECREF(par_cls);
    par_cls = NULL;
    Py_XDECREF(par_articleid);
    par_articleid = NULL;
    Py_XDECREF(var_main_page_request);
    var_main_page_request = NULL;
    Py_XDECREF(var_main_page);
    var_main_page = NULL;
    Py_XDECREF(var_main_web_content);
    var_main_web_content = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_read_page_request);
    var_read_page_request = NULL;
    Py_XDECREF(var_read_page);
    var_read_page = NULL;
    Py_XDECREF(var_tags);
    var_tags = NULL;
    Py_XDECREF(var_volumeList);
    var_volumeList = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_cls);
    par_cls = NULL;
    Py_XDECREF(par_articleid);
    par_articleid = NULL;
    Py_XDECREF(var_main_page_request);
    var_main_page_request = NULL;
    Py_XDECREF(var_main_page);
    var_main_page = NULL;
    Py_XDECREF(var_main_web_content);
    var_main_web_content = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_read_page_request);
    var_read_page_request = NULL;
    Py_XDECREF(var_read_page);
    var_read_page = NULL;
    Py_XDECREF(var_tags);
    var_tags = NULL;
    Py_XDECREF(var_volumeList);
    var_volumeList = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

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



static PyObject *MAKE_FUNCTION_src$novel$$$function__1___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_src$novel$$$function__1___init__,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_18bb62c648bca56ff2a8742948b966ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_src$novel,
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

function_impl_code functable_src$novel[] = {
    impl_src$novel$$$function__1___init__,
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

    function_impl_code *current = functable_src$novel;
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

    if (offset > sizeof(functable_src$novel) || offset < 0) {
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
        functable_src$novel[offset],
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
        module_src$novel,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "src.novel";

// Internal entry point for module code.
PyObject *modulecode_src$novel(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_src$novel = module;

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
    PRINT_STRING("src.novel: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("src.novel: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("src.novel: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initsrc$novel\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_src$novel = MODULE_DICT(module_src$novel);

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
        moduledict_src$novel,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_src$novel,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_src$novel,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_src$novel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_src$novel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_src$novel);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_src$novel, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_src$novel, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_src$novel, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_src$novel);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_src$novel, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_b97b5abb9ebae4988ebcb864861f77b9;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_src$novel$$$class__1_Novel_17 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_710ab246c3f61033c0a6fb711085d915_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_710ab246c3f61033c0a6fb711085d915_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_b97b5abb9ebae4988ebcb864861f77b9 = MAKE_MODULE_FRAME(codeobj_b97b5abb9ebae4988ebcb864861f77b9, module_src$novel);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_b97b5abb9ebae4988ebcb864861f77b9);
    assert(Py_REFCNT(frame_b97b5abb9ebae4988ebcb864861f77b9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[73], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[74], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[76];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_src$novel;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[77];
        tmp_level_name_1 = mod_consts[55];
        frame_b97b5abb9ebae4988ebcb864861f77b9->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_src$novel,
                mod_consts[78],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[78]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[0];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_src$novel;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[55];
        frame_b97b5abb9ebae4988ebcb864861f77b9->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[79];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_src$novel;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[80];
        tmp_level_name_3 = mod_consts[55];
        frame_b97b5abb9ebae4988ebcb864861f77b9->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_src$novel,
                mod_consts[10],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[10]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[81];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_src$novel;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[82];
        tmp_level_name_4 = mod_consts[55];
        frame_b97b5abb9ebae4988ebcb864861f77b9->m_frame.f_lineno = 5;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_src$novel,
                mod_consts[83],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[83]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[85];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_src$novel;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[86];
        tmp_level_name_5 = mod_consts[55];
        frame_b97b5abb9ebae4988ebcb864861f77b9->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_src$novel,
                mod_consts[87],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[87]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_src$novel,
                mod_consts[88],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[88]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_src$novel,
                mod_consts[89],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[89]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_11);
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
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[90];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_src$novel;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[91];
        tmp_level_name_6 = mod_consts[55];
        frame_b97b5abb9ebae4988ebcb864861f77b9->m_frame.f_lineno = 7;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_src$novel,
                mod_consts[83],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[83]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_src$novel,
                mod_consts[92],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[92]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_14);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_arg_name_7;
        PyObject *tmp_locals_arg_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[93];
        tmp_globals_arg_name_7 = (PyObject *)moduledict_src$novel;
        tmp_locals_arg_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[94];
        tmp_level_name_7 = mod_consts[64];
        frame_b97b5abb9ebae4988ebcb864861f77b9->m_frame.f_lineno = 9;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_arg_name_7, tmp_locals_arg_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_src$novel,
                mod_consts[7],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[7]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_arg_name_8;
        PyObject *tmp_locals_arg_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = mod_consts[95];
        tmp_globals_arg_name_8 = (PyObject *)moduledict_src$novel;
        tmp_locals_arg_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[96];
        tmp_level_name_8 = mod_consts[64];
        frame_b97b5abb9ebae4988ebcb864861f77b9->m_frame.f_lineno = 10;
        tmp_assign_source_16 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_arg_name_8, tmp_locals_arg_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_src$novel,
                mod_consts[14],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[14]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_src$novel,
                mod_consts[47],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[47]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_18);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = PyDict_Copy(mod_consts[97]);
        UPDATE_STRING_DICT1(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[98];
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
        tmp_key_name_2 = mod_consts[98];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_1:;
        tmp_bases_name_1 = mod_consts[99];
        tmp_assign_source_21 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[98];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[98];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 17;

        goto try_except_handler_4;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_1 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_1, mod_consts[100]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[100]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_args_name_1 = mod_consts[101];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_b97b5abb9ebae4988ebcb864861f77b9->m_frame.f_lineno = 17;
        tmp_assign_source_22 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_3 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_3, mod_consts[102]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
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
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[103];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[104];
        tmp_getattr_default_1 = mod_consts[105];
        tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_4;
            PyObject *tmp_type_arg_1;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_1 = tmp_class_creation_1__prepared;
            tmp_expression_name_4 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_name_4 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[104]);
            Py_DECREF(tmp_expression_name_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 17;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_23;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_src$novel$$$class__1_Novel_17 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[108];
        tmp_res = PyObject_SetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[109], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        tmp_dictset_value = PyDict_New();
        tmp_res = PyObject_SetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[110], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        if (isFrameUnusable(cache_frame_710ab246c3f61033c0a6fb711085d915_2)) {
            Py_XDECREF(cache_frame_710ab246c3f61033c0a6fb711085d915_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_710ab246c3f61033c0a6fb711085d915_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_710ab246c3f61033c0a6fb711085d915_2 = MAKE_FUNCTION_FRAME(codeobj_710ab246c3f61033c0a6fb711085d915, module_src$novel, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_710ab246c3f61033c0a6fb711085d915_2->m_type_description == NULL);
        frame_710ab246c3f61033c0a6fb711085d915_2 = cache_frame_710ab246c3f61033c0a6fb711085d915_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_710ab246c3f61033c0a6fb711085d915_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_710ab246c3f61033c0a6fb711085d915_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[111]);

            if (tmp_ass_subvalue_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_1 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_ass_subvalue_1);
                }
            }

            tmp_ass_subscribed_1 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[110]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_1);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[110]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 18;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_1);

                exception_lineno = 18;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_1 = mod_consts[13];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            Py_DECREF(tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[112]);

            if (tmp_ass_subvalue_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_2 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_ass_subvalue_2);
                }
            }

            tmp_ass_subscribed_2 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[110]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[110]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 19;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_2);

                exception_lineno = 19;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_2 = mod_consts[17];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            Py_DECREF(tmp_ass_subvalue_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_ass_subvalue_3 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[112]);

            if (tmp_ass_subvalue_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_3 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_ass_subvalue_3);
                }
            }

            tmp_ass_subscribed_3 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[110]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_3);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[110]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 20;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_3);

                exception_lineno = 20;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_3 = mod_consts[28];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subscribed_3);
            Py_DECREF(tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_ass_subvalue_4 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[112]);

            if (tmp_ass_subvalue_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_4 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_ass_subvalue_4);
                }
            }

            tmp_ass_subscribed_4 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[110]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_4);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[110]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 21;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_4);

                exception_lineno = 21;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_4 = mod_consts[30];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            Py_DECREF(tmp_ass_subscribed_4);
            Py_DECREF(tmp_ass_subvalue_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            tmp_ass_subvalue_5 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[113]);

            if (tmp_ass_subvalue_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_5 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_ass_subvalue_5);
                }
            }

            tmp_ass_subscribed_5 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[110]);

            if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_5);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[110]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 22;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_5);

                exception_lineno = 22;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_5 = mod_consts[51];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
            Py_DECREF(tmp_ass_subscribed_5);
            Py_DECREF(tmp_ass_subvalue_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            tmp_ass_subvalue_6 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[112]);

            if (tmp_ass_subvalue_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_6 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_ass_subvalue_6);
                }
            }

            tmp_ass_subscribed_6 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[110]);

            if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_6);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[110]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 23;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_6);

                exception_lineno = 23;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_6 = mod_consts[32];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
            Py_DECREF(tmp_ass_subscribed_6);
            Py_DECREF(tmp_ass_subvalue_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_ass_subscript_7;
            tmp_ass_subvalue_7 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[111]);

            if (tmp_ass_subvalue_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_7 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_ass_subvalue_7);
                }
            }

            tmp_ass_subscribed_7 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[110]);

            if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_7);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[110]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_7);

                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_7 = mod_consts[26];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
            Py_DECREF(tmp_ass_subscribed_7);
            Py_DECREF(tmp_ass_subvalue_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_8;
            PyObject *tmp_ass_subscribed_8;
            PyObject *tmp_ass_subscript_8;
            tmp_ass_subvalue_8 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[112]);

            if (tmp_ass_subvalue_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_8 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_ass_subvalue_8);
                }
            }

            tmp_ass_subscribed_8 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[110]);

            if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_8);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[110]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_8);

                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_8 = mod_consts[34];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
            Py_DECREF(tmp_ass_subscribed_8);
            Py_DECREF(tmp_ass_subvalue_8);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_9;
            PyObject *tmp_ass_subscribed_9;
            PyObject *tmp_ass_subscript_9;
            tmp_ass_subvalue_9 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[112]);

            if (tmp_ass_subvalue_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_9 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_ass_subvalue_9);
                }
            }

            tmp_ass_subscribed_9 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[110]);

            if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_9);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[110]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_9);

                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_9 = mod_consts[46];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
            Py_DECREF(tmp_ass_subscribed_9);
            Py_DECREF(tmp_ass_subvalue_9);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_10;
            PyObject *tmp_ass_subscribed_10;
            PyObject *tmp_ass_subscript_10;
            tmp_ass_subvalue_10 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[114]);

            if (tmp_ass_subvalue_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_10 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_ass_subvalue_10);
                }
            }

            tmp_ass_subscribed_10 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[110]);

            if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_10);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[110]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_10);

                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_10 = mod_consts[38];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
            Py_DECREF(tmp_ass_subscribed_10);
            Py_DECREF(tmp_ass_subvalue_10);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_11;
            PyObject *tmp_expression_name_5;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_ass_subscribed_11;
            PyObject *tmp_ass_subscript_11;
            tmp_expression_name_5 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[78]);

            if (tmp_expression_name_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[78]);

                    if (unlikely(tmp_expression_name_5 == NULL)) {
                        tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                    }

                    if (tmp_expression_name_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_name_5);
                }
            }

            tmp_subscript_name_1 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[115]);

            if (tmp_subscript_name_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_name_1 = (PyObject *)&PyDict_Type;
                    Py_INCREF(tmp_subscript_name_1);
                }
            }

            tmp_ass_subvalue_11 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_1);
            Py_DECREF(tmp_expression_name_5);
            Py_DECREF(tmp_subscript_name_1);
            if (tmp_ass_subvalue_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_11 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[110]);

            if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_11);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[110]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_11);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_11 = mod_consts[57];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
            Py_DECREF(tmp_ass_subscribed_11);
            Py_DECREF(tmp_ass_subvalue_11);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_called_name_4;
            PyObject *tmp_kwargs_name_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_7;
            PyObject *tmp_called_name_8;
            PyObject *tmp_kwargs_name_3;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_name_11;
            PyObject *tmp_called_name_12;
            PyObject *tmp_kwargs_name_4;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_called_name_13;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_name_15;
            PyObject *tmp_called_name_16;
            PyObject *tmp_kwargs_name_5;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_called_name_17;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_classmethod_arg_1;
            PyObject *tmp_called_name_19;
            PyObject *tmp_called_name_20;
            PyObject *tmp_kwargs_name_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_called_name_21;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_called_name_23;
            PyObject *tmp_called_name_24;
            PyObject *tmp_kwargs_name_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_called_name_25;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_called_name_27;
            PyObject *tmp_called_name_28;
            PyObject *tmp_kwargs_name_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_called_name_29;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_called_name_31;
            PyObject *tmp_called_name_32;
            PyObject *tmp_kwargs_name_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_called_name_33;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_res = MAPPING_HAS_ITEM(locals_src$novel$$$class__1_Novel_17, mod_consts[116]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_name_2 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[116]);

            if (unlikely(tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[116]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_name_4 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[87]);

            if (tmp_called_name_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_called_name_4 == NULL)) {
                        tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_called_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_2);

                        exception_lineno = 31;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_4);
                }
            }

            tmp_dict_key_1 = mod_consts[117];
            tmp_called_name_5 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[88]);

            if (tmp_called_name_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_called_name_5 == NULL)) {
                        tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_called_name_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_2);
                        Py_DECREF(tmp_called_name_4);

                        exception_lineno = 31;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_5);
                }
            }

            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 31;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, mod_consts[118]);
            Py_DECREF(tmp_called_name_5);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_4);

                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kwargs_name_2 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_name_6;
                PyObject *tmp_args_element_name_2;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[87];
                tmp_called_name_6 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[89]);

                if (tmp_called_name_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[89]);

                        if (unlikely(tmp_called_name_6 == NULL)) {
                            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                        }

                        if (tmp_called_name_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 31;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_called_name_6);
                    }
                }

                tmp_args_element_name_2 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[83]);

                if (tmp_args_element_name_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_name_2 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[83]);

                        if (unlikely(tmp_args_element_name_2 == NULL)) {
                            tmp_args_element_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                        }

                        if (tmp_args_element_name_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_6);

                            exception_lineno = 31;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_args_element_name_2);
                    }
                }

                frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 31;
                tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_2);
                Py_DECREF(tmp_called_name_6);
                Py_DECREF(tmp_args_element_name_2);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 31;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_kwargs_name_2);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 31;
            tmp_called_name_3 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_4, tmp_kwargs_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_kwargs_name_2);
            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_name_8 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[87]);

            if (tmp_called_name_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_called_name_8 == NULL)) {
                        tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_called_name_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_2);
                        Py_DECREF(tmp_called_name_3);

                        exception_lineno = 32;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_8);
                }
            }

            tmp_dict_key_2 = mod_consts[117];
            tmp_called_name_9 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[88]);

            if (tmp_called_name_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_called_name_9 == NULL)) {
                        tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_called_name_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_2);
                        Py_DECREF(tmp_called_name_3);
                        Py_DECREF(tmp_called_name_8);

                        exception_lineno = 32;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_9);
                }
            }

            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 32;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, mod_consts[118]);
            Py_DECREF(tmp_called_name_9);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);
                Py_DECREF(tmp_called_name_8);

                exception_lineno = 32;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kwargs_name_3 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_name_10;
                PyObject *tmp_args_element_name_4;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[87];
                tmp_called_name_10 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[89]);

                if (tmp_called_name_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[89]);

                        if (unlikely(tmp_called_name_10 == NULL)) {
                            tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                        }

                        if (tmp_called_name_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 32;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_called_name_10);
                    }
                }

                tmp_args_element_name_4 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[92]);

                if (tmp_args_element_name_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_name_4 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[92]);

                        if (unlikely(tmp_args_element_name_4 == NULL)) {
                            tmp_args_element_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
                        }

                        if (tmp_args_element_name_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_10);

                            exception_lineno = 32;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_args_element_name_4);
                    }
                }

                frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 32;
                tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_4);
                Py_DECREF(tmp_called_name_10);
                Py_DECREF(tmp_args_element_name_4);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_kwargs_name_3);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 32;
            tmp_called_name_7 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_8, tmp_kwargs_name_3);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_kwargs_name_3);
            if (tmp_called_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);

                exception_lineno = 32;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_name_12 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[87]);

            if (tmp_called_name_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_called_name_12 == NULL)) {
                        tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_called_name_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_2);
                        Py_DECREF(tmp_called_name_3);
                        Py_DECREF(tmp_called_name_7);

                        exception_lineno = 33;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_12);
                }
            }

            tmp_dict_key_3 = mod_consts[117];
            tmp_called_name_13 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[88]);

            if (tmp_called_name_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_13 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_called_name_13 == NULL)) {
                        tmp_called_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_called_name_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_2);
                        Py_DECREF(tmp_called_name_3);
                        Py_DECREF(tmp_called_name_7);
                        Py_DECREF(tmp_called_name_12);

                        exception_lineno = 33;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_13);
                }
            }

            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 33;
            tmp_dict_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, mod_consts[118]);
            Py_DECREF(tmp_called_name_13);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);
                Py_DECREF(tmp_called_name_7);
                Py_DECREF(tmp_called_name_12);

                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kwargs_name_4 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_name_14;
                PyObject *tmp_args_element_name_6;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_4, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[87];
                tmp_called_name_14 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[89]);

                if (tmp_called_name_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_name_14 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[89]);

                        if (unlikely(tmp_called_name_14 == NULL)) {
                            tmp_called_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                        }

                        if (tmp_called_name_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 33;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_called_name_14);
                    }
                }

                tmp_args_element_name_6 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[84]);

                if (tmp_args_element_name_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_name_6 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[84]);

                        if (unlikely(tmp_args_element_name_6 == NULL)) {
                            tmp_args_element_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                        }

                        if (tmp_args_element_name_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_14);

                            exception_lineno = 33;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_args_element_name_6);
                    }
                }

                frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 33;
                tmp_dict_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_6);
                Py_DECREF(tmp_called_name_14);
                Py_DECREF(tmp_args_element_name_6);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_4, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_kwargs_name_4);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;
            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 33;
            tmp_called_name_11 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_12, tmp_kwargs_name_4);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_kwargs_name_4);
            if (tmp_called_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);
                Py_DECREF(tmp_called_name_7);

                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_name_16 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[87]);

            if (tmp_called_name_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_16 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_called_name_16 == NULL)) {
                        tmp_called_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_called_name_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_2);
                        Py_DECREF(tmp_called_name_3);
                        Py_DECREF(tmp_called_name_7);
                        Py_DECREF(tmp_called_name_11);

                        exception_lineno = 34;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_16);
                }
            }

            tmp_dict_key_4 = mod_consts[117];
            tmp_called_name_17 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[88]);

            if (tmp_called_name_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_17 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_called_name_17 == NULL)) {
                        tmp_called_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_called_name_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_2);
                        Py_DECREF(tmp_called_name_3);
                        Py_DECREF(tmp_called_name_7);
                        Py_DECREF(tmp_called_name_11);
                        Py_DECREF(tmp_called_name_16);

                        exception_lineno = 34;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_17);
                }
            }

            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 34;
            tmp_dict_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, mod_consts[118]);
            Py_DECREF(tmp_called_name_17);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);
                Py_DECREF(tmp_called_name_7);
                Py_DECREF(tmp_called_name_11);
                Py_DECREF(tmp_called_name_16);

                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kwargs_name_5 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_name_18;
                PyObject *tmp_args_element_name_8;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[87];
                tmp_called_name_18 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[89]);

                if (tmp_called_name_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_name_18 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[89]);

                        if (unlikely(tmp_called_name_18 == NULL)) {
                            tmp_called_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                        }

                        if (tmp_called_name_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 34;
                            type_description_2 = "o";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_called_name_18);
                    }
                }

                tmp_args_element_name_8 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[119]);

                if (tmp_args_element_name_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_name_8 = PyExc_TimeoutError;
                        Py_INCREF(tmp_args_element_name_8);
                    }
                }

                frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 34;
                tmp_dict_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_8);
                Py_DECREF(tmp_called_name_18);
                Py_DECREF(tmp_args_element_name_8);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 34;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_5, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_kwargs_name_5);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;
            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 34;
            tmp_called_name_15 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_16, tmp_kwargs_name_5);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_kwargs_name_5);
            if (tmp_called_name_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);
                Py_DECREF(tmp_called_name_7);
                Py_DECREF(tmp_called_name_11);

                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_5 = mod_consts[21];
            tmp_dict_value_5 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[111]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_5);
                }
            }

            tmp_annotations_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_name_9 = MAKE_FUNCTION_src$novel$$$function__1___init__(tmp_annotations_1);

            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 34;
            tmp_args_element_name_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_9);
            Py_DECREF(tmp_called_name_15);
            Py_DECREF(tmp_args_element_name_9);
            if (tmp_args_element_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);
                Py_DECREF(tmp_called_name_7);
                Py_DECREF(tmp_called_name_11);

                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 33;
            tmp_args_element_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_7);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_args_element_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);
                Py_DECREF(tmp_called_name_7);

                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 32;
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_5);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_args_element_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);

                exception_lineno = 32;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 31;
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 30;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_name_20 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[87]);

            if (tmp_called_name_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_20 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_called_name_20 == NULL)) {
                        tmp_called_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_called_name_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 31;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_20);
                }
            }

            tmp_dict_key_6 = mod_consts[117];
            tmp_called_name_21 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[88]);

            if (tmp_called_name_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_21 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_called_name_21 == NULL)) {
                        tmp_called_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_called_name_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_20);

                        exception_lineno = 31;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_21);
                }
            }

            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 31;
            tmp_dict_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, mod_consts[118]);
            Py_DECREF(tmp_called_name_21);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_20);

                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kwargs_name_6 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_name_22;
                PyObject *tmp_args_element_name_10;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_6, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[87];
                tmp_called_name_22 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[89]);

                if (tmp_called_name_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_name_22 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[89]);

                        if (unlikely(tmp_called_name_22 == NULL)) {
                            tmp_called_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                        }

                        if (tmp_called_name_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 31;
                            type_description_2 = "o";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_called_name_22);
                    }
                }

                tmp_args_element_name_10 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[83]);

                if (tmp_args_element_name_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_name_10 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[83]);

                        if (unlikely(tmp_args_element_name_10 == NULL)) {
                            tmp_args_element_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                        }

                        if (tmp_args_element_name_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_22);

                            exception_lineno = 31;
                            type_description_2 = "o";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_name_10);
                    }
                }

                frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 31;
                tmp_dict_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, tmp_args_element_name_10);
                Py_DECREF(tmp_called_name_22);
                Py_DECREF(tmp_args_element_name_10);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 31;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_6, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_kwargs_name_6);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 31;
            tmp_called_name_19 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_20, tmp_kwargs_name_6);
            Py_DECREF(tmp_called_name_20);
            Py_DECREF(tmp_kwargs_name_6);
            if (tmp_called_name_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_name_24 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[87]);

            if (tmp_called_name_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_24 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_called_name_24 == NULL)) {
                        tmp_called_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_called_name_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_19);

                        exception_lineno = 32;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_24);
                }
            }

            tmp_dict_key_7 = mod_consts[117];
            tmp_called_name_25 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[88]);

            if (tmp_called_name_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_25 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_called_name_25 == NULL)) {
                        tmp_called_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_called_name_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_19);
                        Py_DECREF(tmp_called_name_24);

                        exception_lineno = 32;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_25);
                }
            }

            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 32;
            tmp_dict_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_25, mod_consts[118]);
            Py_DECREF(tmp_called_name_25);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_19);
                Py_DECREF(tmp_called_name_24);

                exception_lineno = 32;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kwargs_name_7 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_name_26;
                PyObject *tmp_args_element_name_12;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[87];
                tmp_called_name_26 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[89]);

                if (tmp_called_name_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_name_26 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[89]);

                        if (unlikely(tmp_called_name_26 == NULL)) {
                            tmp_called_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                        }

                        if (tmp_called_name_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 32;
                            type_description_2 = "o";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_called_name_26);
                    }
                }

                tmp_args_element_name_12 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[92]);

                if (tmp_args_element_name_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_name_12 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[92]);

                        if (unlikely(tmp_args_element_name_12 == NULL)) {
                            tmp_args_element_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
                        }

                        if (tmp_args_element_name_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_26);

                            exception_lineno = 32;
                            type_description_2 = "o";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_args_element_name_12);
                    }
                }

                frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 32;
                tmp_dict_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_26, tmp_args_element_name_12);
                Py_DECREF(tmp_called_name_26);
                Py_DECREF(tmp_args_element_name_12);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_7, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_called_name_19);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_kwargs_name_7);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;
            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 32;
            tmp_called_name_23 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_24, tmp_kwargs_name_7);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_kwargs_name_7);
            if (tmp_called_name_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_19);

                exception_lineno = 32;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_name_28 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[87]);

            if (tmp_called_name_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_28 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_called_name_28 == NULL)) {
                        tmp_called_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_called_name_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_19);
                        Py_DECREF(tmp_called_name_23);

                        exception_lineno = 33;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_28);
                }
            }

            tmp_dict_key_8 = mod_consts[117];
            tmp_called_name_29 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[88]);

            if (tmp_called_name_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_29 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_called_name_29 == NULL)) {
                        tmp_called_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_called_name_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_19);
                        Py_DECREF(tmp_called_name_23);
                        Py_DECREF(tmp_called_name_28);

                        exception_lineno = 33;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_29);
                }
            }

            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 33;
            tmp_dict_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, mod_consts[118]);
            Py_DECREF(tmp_called_name_29);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_19);
                Py_DECREF(tmp_called_name_23);
                Py_DECREF(tmp_called_name_28);

                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kwargs_name_8 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_name_30;
                PyObject *tmp_args_element_name_14;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[87];
                tmp_called_name_30 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[89]);

                if (tmp_called_name_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_name_30 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[89]);

                        if (unlikely(tmp_called_name_30 == NULL)) {
                            tmp_called_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                        }

                        if (tmp_called_name_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 33;
                            type_description_2 = "o";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_called_name_30);
                    }
                }

                tmp_args_element_name_14 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[84]);

                if (tmp_args_element_name_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_name_14 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[84]);

                        if (unlikely(tmp_args_element_name_14 == NULL)) {
                            tmp_args_element_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                        }

                        if (tmp_args_element_name_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_30);

                            exception_lineno = 33;
                            type_description_2 = "o";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_args_element_name_14);
                    }
                }

                frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 33;
                tmp_dict_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_30, tmp_args_element_name_14);
                Py_DECREF(tmp_called_name_30);
                Py_DECREF(tmp_args_element_name_14);
                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_8, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_called_name_19);
            Py_DECREF(tmp_called_name_23);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_kwargs_name_8);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;
            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 33;
            tmp_called_name_27 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_28, tmp_kwargs_name_8);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_kwargs_name_8);
            if (tmp_called_name_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_19);
                Py_DECREF(tmp_called_name_23);

                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_name_32 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[87]);

            if (tmp_called_name_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_32 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_called_name_32 == NULL)) {
                        tmp_called_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_called_name_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_19);
                        Py_DECREF(tmp_called_name_23);
                        Py_DECREF(tmp_called_name_27);

                        exception_lineno = 34;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_32);
                }
            }

            tmp_dict_key_9 = mod_consts[117];
            tmp_called_name_33 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[88]);

            if (tmp_called_name_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_33 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_called_name_33 == NULL)) {
                        tmp_called_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_called_name_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_19);
                        Py_DECREF(tmp_called_name_23);
                        Py_DECREF(tmp_called_name_27);
                        Py_DECREF(tmp_called_name_32);

                        exception_lineno = 34;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_33);
                }
            }

            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 34;
            tmp_dict_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_33, mod_consts[118]);
            Py_DECREF(tmp_called_name_33);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_19);
                Py_DECREF(tmp_called_name_23);
                Py_DECREF(tmp_called_name_27);
                Py_DECREF(tmp_called_name_32);

                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kwargs_name_9 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_name_34;
                PyObject *tmp_args_element_name_16;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[87];
                tmp_called_name_34 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[89]);

                if (tmp_called_name_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_name_34 = GET_STRING_DICT_VALUE(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[89]);

                        if (unlikely(tmp_called_name_34 == NULL)) {
                            tmp_called_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                        }

                        if (tmp_called_name_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 34;
                            type_description_2 = "o";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_called_name_34);
                    }
                }

                tmp_args_element_name_16 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[119]);

                if (tmp_args_element_name_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_name_16 = PyExc_TimeoutError;
                        Py_INCREF(tmp_args_element_name_16);
                    }
                }

                frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 34;
                tmp_dict_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_34, tmp_args_element_name_16);
                Py_DECREF(tmp_called_name_34);
                Py_DECREF(tmp_args_element_name_16);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 34;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_called_name_19);
            Py_DECREF(tmp_called_name_23);
            Py_DECREF(tmp_called_name_27);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_kwargs_name_9);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;
            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 34;
            tmp_called_name_31 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_32, tmp_kwargs_name_9);
            Py_DECREF(tmp_called_name_32);
            Py_DECREF(tmp_kwargs_name_9);
            if (tmp_called_name_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_19);
                Py_DECREF(tmp_called_name_23);
                Py_DECREF(tmp_called_name_27);

                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_10 = mod_consts[21];
            tmp_dict_value_10 = PyObject_GetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[111]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_10);
                }
            }

            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_name_17 = MAKE_FUNCTION_src$novel$$$function__1___init__(tmp_annotations_2);

            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 34;
            tmp_args_element_name_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_31, tmp_args_element_name_17);
            Py_DECREF(tmp_called_name_31);
            Py_DECREF(tmp_args_element_name_17);
            if (tmp_args_element_name_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_19);
                Py_DECREF(tmp_called_name_23);
                Py_DECREF(tmp_called_name_27);

                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 33;
            tmp_args_element_name_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, tmp_args_element_name_15);
            Py_DECREF(tmp_called_name_27);
            Py_DECREF(tmp_args_element_name_15);
            if (tmp_args_element_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_19);
                Py_DECREF(tmp_called_name_23);

                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 32;
            tmp_args_element_name_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_13);
            Py_DECREF(tmp_called_name_23);
            Py_DECREF(tmp_args_element_name_13);
            if (tmp_args_element_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_19);

                exception_lineno = 32;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_710ab246c3f61033c0a6fb711085d915_2->m_frame.f_lineno = 31;
            tmp_classmethod_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_11);
            Py_DECREF(tmp_called_name_19);
            Py_DECREF(tmp_args_element_name_11);
            if (tmp_classmethod_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_src$novel$$$class__1_Novel_17, mod_consts[120], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_710ab246c3f61033c0a6fb711085d915_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_710ab246c3f61033c0a6fb711085d915_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_710ab246c3f61033c0a6fb711085d915_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_710ab246c3f61033c0a6fb711085d915_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_710ab246c3f61033c0a6fb711085d915_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_710ab246c3f61033c0a6fb711085d915_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_710ab246c3f61033c0a6fb711085d915_2 == cache_frame_710ab246c3f61033c0a6fb711085d915_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_710ab246c3f61033c0a6fb711085d915_2);
            cache_frame_710ab246c3f61033c0a6fb711085d915_2 = NULL;
        }

        assertFrameObject(frame_710ab246c3f61033c0a6fb711085d915_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_name_35;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_name_10;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_35 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = mod_consts[108];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[99];
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_src$novel$$$class__1_Novel_17;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_10 = tmp_class_creation_1__class_decl_dict;
            frame_b97b5abb9ebae4988ebcb864861f77b9->m_frame.f_lineno = 17;
            tmp_assign_source_25 = CALL_FUNCTION(tmp_called_name_35, tmp_args_name_2, tmp_kwargs_name_10);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_24 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_src$novel$$$class__1_Novel_17);
        locals_src$novel$$$class__1_Novel_17 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_src$novel$$$class__1_Novel_17);
        locals_src$novel$$$class__1_Novel_17 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 17;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_src$novel, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_24);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b97b5abb9ebae4988ebcb864861f77b9);
#endif
    popFrameStack();

    assertFrameObject(frame_b97b5abb9ebae4988ebcb864861f77b9);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b97b5abb9ebae4988ebcb864861f77b9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b97b5abb9ebae4988ebcb864861f77b9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b97b5abb9ebae4988ebcb864861f77b9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b97b5abb9ebae4988ebcb864861f77b9, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    return module_src$novel;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

