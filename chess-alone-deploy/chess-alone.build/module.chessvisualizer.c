/* Generated code for Python module 'chessvisualizer'
 * created by Nuitka version 0.7.7
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

/* The "module_chessvisualizer" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chessvisualizer;
PyDictObject *moduledict_chessvisualizer;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[76];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[76];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("chessvisualizer"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 76; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chessvisualizer(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 76; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_12f44c372b22df16a6ebdca22419db0c;
static PyCodeObject *codeobj_861575f2d36fd5080ae5f198fe9cb2ab;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[62]; CHECK_OBJECT(module_filename_obj);
    codeobj_12f44c372b22df16a6ebdca22419db0c = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[73], NULL, NULL, 0, 0, 0);
    codeobj_861575f2d36fd5080ae5f198fe9cb2ab = MAKE_CODEOBJECT(module_filename_obj, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[74], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_chessvisualizer$$$function__1_visual();


// The module function definitions.
static PyObject *impl_chessvisualizer$$$function__1_visual(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_array = python_pars[0];
    PyObject *var_width = NULL;
    PyObject *var_height = NULL;
    PyObject *var_SizeW = NULL;
    PyObject *var_SizeH = NULL;
    PyObject *var_canvas = NULL;
    PyObject *var_blackqueen = NULL;
    PyObject *var_blackking = NULL;
    PyObject *var_blackknight = NULL;
    PyObject *var_blackbishop = NULL;
    PyObject *var_blackrook = NULL;
    PyObject *var_blackpawn = NULL;
    PyObject *var_whitequeen = NULL;
    PyObject *var_whiteking = NULL;
    PyObject *var_whiteknight = NULL;
    PyObject *var_whitebishop = NULL;
    PyObject *var_whiterook = NULL;
    PyObject *var_whitepawn = NULL;
    PyObject *var_x = NULL;
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *var_drawx = NULL;
    PyObject *var_drawy = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_861575f2d36fd5080ae5f198fe9cb2ab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_861575f2d36fd5080ae5f198fe9cb2ab = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_861575f2d36fd5080ae5f198fe9cb2ab)) {
        Py_XDECREF(cache_frame_861575f2d36fd5080ae5f198fe9cb2ab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_861575f2d36fd5080ae5f198fe9cb2ab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_861575f2d36fd5080ae5f198fe9cb2ab = MAKE_FUNCTION_FRAME(codeobj_861575f2d36fd5080ae5f198fe9cb2ab, module_chessvisualizer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_861575f2d36fd5080ae5f198fe9cb2ab->m_type_description == NULL);
    frame_861575f2d36fd5080ae5f198fe9cb2ab = cache_frame_861575f2d36fd5080ae5f198fe9cb2ab;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_861575f2d36fd5080ae5f198fe9cb2ab);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_861575f2d36fd5080ae5f198fe9cb2ab) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_array);
        tmp_len_arg_1 = par_array;
        tmp_assign_source_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_width == NULL);
        var_width = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_array);
        tmp_expression_value_1 = par_array;
        tmp_subscript_value_1 = mod_consts[0];
        tmp_len_arg_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_height == NULL);
        var_height = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        tmp_left_value_1 = mod_consts[1];
        CHECK_OBJECT(var_width);
        tmp_right_value_1 = var_width;
        tmp_assign_source_3 = BINARY_OPERATION_MULT_OBJECT_LONG_LONG(tmp_left_value_1, tmp_right_value_1);
        assert(!(tmp_assign_source_3 == NULL));
        assert(var_SizeW == NULL);
        var_SizeW = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        tmp_left_value_2 = mod_consts[1];
        CHECK_OBJECT(var_height);
        tmp_right_value_2 = var_height;
        tmp_assign_source_4 = BINARY_OPERATION_MULT_OBJECT_LONG_LONG(tmp_left_value_2, tmp_right_value_2);
        assert(!(tmp_assign_source_4 == NULL));
        assert(var_SizeH == NULL);
        var_SizeH = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[4];
        tmp_args_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_tuple_element_2;
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_SizeW);
            tmp_tuple_element_2 = var_SizeW;
            tmp_tuple_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_SizeH);
            tmp_tuple_element_2 = var_SizeH;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
        }
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[5]);
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 14;
        tmp_assign_source_5 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_canvas == NULL);
        var_canvas = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 15;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 15;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blackqueen == NULL);
        var_blackqueen = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 16;
        tmp_called_instance_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 16;
        tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blackking == NULL);
        var_blackking = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_instance_6;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 17;
        tmp_called_instance_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 17;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blackknight == NULL);
        var_blackknight = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_instance_8;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 18;
        tmp_called_instance_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[12], 0)
        );

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 18;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_7);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blackbishop == NULL);
        var_blackbishop = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_called_instance_10;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 19;
        tmp_called_instance_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_10,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[13], 0)
        );

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 19;
        tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_9,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_9);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blackrook == NULL);
        var_blackrook = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_called_instance_12;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 20;
        tmp_called_instance_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_12,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[14], 0)
        );

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 20;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_11);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blackpawn == NULL);
        var_blackpawn = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_called_instance_14;
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 21;
        tmp_called_instance_13 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_14,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[15], 0)
        );

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 21;
        tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_13,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_13);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_whitequeen == NULL);
        var_whitequeen = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_called_instance_16;
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 22;
        tmp_called_instance_15 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_16,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 22;
        tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_15,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_15);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_whiteking == NULL);
        var_whiteking = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_called_instance_18;
        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_18 == NULL)) {
            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 23;
        tmp_called_instance_17 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_18,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[17], 0)
        );

        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 23;
        tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_17,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_17);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_whiteknight == NULL);
        var_whiteknight = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_called_instance_20;
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 24;
        tmp_called_instance_19 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_20,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[18], 0)
        );

        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 24;
        tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_19,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_19);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_whitebishop == NULL);
        var_whitebishop = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_called_instance_22;
        tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_22 == NULL)) {
            tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 25;
        tmp_called_instance_21 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_22,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[19], 0)
        );

        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 25;
        tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_21,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_21);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_whiterook == NULL);
        var_whiterook = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_called_instance_24;
        tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_24 == NULL)) {
            tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 26;
        tmp_called_instance_23 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_24,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[20], 0)
        );

        if (tmp_called_instance_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 26;
        tmp_assign_source_17 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_23,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_23);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_whitepawn == NULL);
        var_whitepawn = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_25;
        PyObject *tmp_called_instance_26;
        tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_26 == NULL)) {
            tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 27;
        tmp_called_instance_25 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_26,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[21], 0)
        );

        if (tmp_called_instance_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 27;
        tmp_assign_source_18 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_25,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_25);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        tmp_xrange_low_1 = mod_consts[0];
        CHECK_OBJECT(var_width);
        tmp_xrange_high_1 = var_width;
        tmp_iter_arg_1 = BUILTIN_XRANGE2(tmp_xrange_low_1, tmp_xrange_high_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_19;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_20 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooNNoooooooooooooooooooo";
                exception_lineno = 29;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_21 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_21;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_xrange_high_2;
        tmp_xrange_low_2 = mod_consts[0];
        if (var_height == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 30;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_xrange_high_2 = var_height;
        tmp_iter_arg_2 = BUILTIN_XRANGE2(tmp_xrange_low_2, tmp_xrange_high_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_22 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_23 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_23 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooNNoooooooooooooooooooo";
                exception_lineno = 30;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_24 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_24;
            Py_INCREF(var_j);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_left_value_3;
        PyObject *tmp_left_value_4;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_3;
        PyObject *tmp_right_value_4;
        PyObject *tmp_right_value_5;
        if (var_SizeW == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 31;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_5 = var_SizeW;
        tmp_right_value_3 = mod_consts[24];
        tmp_left_value_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_5, tmp_right_value_3);
        if (tmp_left_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_value_4 = mod_consts[25];
        tmp_left_value_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_4, tmp_right_value_4);
        Py_DECREF(tmp_left_value_4);
        if (tmp_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_width == NULL) {
            Py_DECREF(tmp_left_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 31;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_right_value_5 = var_width;
        tmp_assign_source_25 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_3, tmp_right_value_5);
        Py_DECREF(tmp_left_value_3);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_drawx;
            var_drawx = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_left_value_6;
        PyObject *tmp_left_value_7;
        PyObject *tmp_left_value_8;
        PyObject *tmp_right_value_6;
        PyObject *tmp_right_value_7;
        PyObject *tmp_right_value_8;
        if (var_SizeH == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 32;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_8 = var_SizeH;
        tmp_right_value_6 = mod_consts[24];
        tmp_left_value_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_8, tmp_right_value_6);
        if (tmp_left_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_value_7 = mod_consts[25];
        tmp_left_value_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_7, tmp_right_value_7);
        Py_DECREF(tmp_left_value_7);
        if (tmp_left_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_height == NULL) {
            Py_DECREF(tmp_left_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 32;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_right_value_8 = var_height;
        tmp_assign_source_26 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_6, tmp_right_value_8);
        Py_DECREF(tmp_left_value_6);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_drawy;
            var_drawy = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_array);
        tmp_expression_value_6 = par_array;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 33;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_2 = var_i;
        tmp_expression_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_j);
        tmp_subscript_value_3 = var_j;
        tmp_unicode_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_4 = PyObject_Unicode(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[29]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 33;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[30]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_4 = mod_consts[0];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_4, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_1 = mod_consts[31];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(par_array);
        tmp_expression_value_10 = par_array;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_5 = var_i;
        tmp_expression_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_5);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_j);
        tmp_subscript_value_6 = var_j;
        tmp_unicode_arg_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_unicode_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_8 = PyObject_Unicode(tmp_unicode_arg_2);
        Py_DECREF(tmp_unicode_arg_2);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[29]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 34;
        tmp_expression_value_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[30]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_7 = mod_consts[32];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_7, 1);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_2 = mod_consts[33];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_left_value_9;
        PyObject *tmp_left_value_10;
        PyObject *tmp_left_value_11;
        PyObject *tmp_right_value_9;
        PyObject *tmp_right_value_10;
        PyObject *tmp_right_value_11;
        PyObject *tmp_left_value_12;
        PyObject *tmp_right_value_12;
        if (var_canvas == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 35;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_11 = var_canvas;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[35]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_blackpawn == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 35;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_kw_call_value_0_1 = var_blackpawn;
        if (var_SizeW == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 35;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_11 = var_SizeW;
        tmp_right_value_9 = mod_consts[32];
        tmp_left_value_10 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_11, tmp_right_value_9);
        if (tmp_left_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 35;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_value_10 = mod_consts[25];
        tmp_left_value_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_10, tmp_right_value_10);
        Py_DECREF(tmp_left_value_10);
        if (tmp_left_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 35;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_drawx);
        tmp_left_value_12 = var_drawx;
        CHECK_OBJECT(var_j);
        tmp_right_value_12 = var_j;
        tmp_right_value_11 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_12, tmp_right_value_12);
        if (tmp_right_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_left_value_9);

            exception_lineno = 35;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_int_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_9, tmp_right_value_11);
        Py_DECREF(tmp_left_value_9);
        Py_DECREF(tmp_right_value_11);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 35;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_3 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 35;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_value_1_1 = PyTuple_New(2);
        {
            PyObject *tmp_int_arg_2;
            PyObject *tmp_left_value_13;
            PyObject *tmp_left_value_14;
            PyObject *tmp_left_value_15;
            PyObject *tmp_right_value_13;
            PyObject *tmp_right_value_14;
            PyObject *tmp_right_value_15;
            PyObject *tmp_left_value_16;
            PyObject *tmp_right_value_16;
            PyTuple_SET_ITEM(tmp_kw_call_value_1_1, 0, tmp_tuple_element_3);
            if (var_SizeH == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 35;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_left_value_15 = var_SizeH;
            tmp_right_value_13 = mod_consts[32];
            tmp_left_value_14 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_15, tmp_right_value_13);
            if (tmp_left_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_right_value_14 = mod_consts[25];
            tmp_left_value_13 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_14, tmp_right_value_14);
            Py_DECREF(tmp_left_value_14);
            if (tmp_left_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_drawy);
            tmp_left_value_16 = var_drawy;
            if (var_i == NULL) {
                Py_DECREF(tmp_left_value_13);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 35;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_right_value_16 = var_i;
            tmp_right_value_15 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_16, tmp_right_value_16);
            if (tmp_right_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_value_13);

                exception_lineno = 35;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_int_arg_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_13, tmp_right_value_15);
            Py_DECREF(tmp_left_value_13);
            Py_DECREF(tmp_right_value_15);
            if (tmp_int_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_3 = PyNumber_Int(tmp_int_arg_2);
            Py_DECREF(tmp_int_arg_2);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_kw_call_value_1_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_1_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 35;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_unicode_arg_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(par_array);
        tmp_expression_value_15 = par_array;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 37;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_8 = var_i;
        tmp_expression_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_8);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_j == NULL) {
            Py_DECREF(tmp_expression_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 37;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_9 = var_j;
        tmp_unicode_arg_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_9);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_unicode_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_13 = PyObject_Unicode(tmp_unicode_arg_3);
        Py_DECREF(tmp_unicode_arg_3);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[29]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 37;
        tmp_expression_value_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[30]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_10 = mod_consts[32];
        tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_12, tmp_subscript_value_10, 1);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_3 = mod_consts[39];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        assert(tmp_condition_result_3 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_left_value_17;
        PyObject *tmp_left_value_18;
        PyObject *tmp_left_value_19;
        PyObject *tmp_right_value_17;
        PyObject *tmp_right_value_18;
        PyObject *tmp_right_value_19;
        PyObject *tmp_left_value_20;
        PyObject *tmp_right_value_20;
        if (var_canvas == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_16 = var_canvas;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[35]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_blackking == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_kw_call_value_0_2 = var_blackking;
        if (var_SizeW == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_19 = var_SizeW;
        tmp_right_value_17 = mod_consts[32];
        tmp_left_value_18 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_19, tmp_right_value_17);
        if (tmp_left_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 38;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_value_18 = mod_consts[25];
        tmp_left_value_17 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_18, tmp_right_value_18);
        Py_DECREF(tmp_left_value_18);
        if (tmp_left_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 38;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_drawx == NULL) {
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_left_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_20 = var_drawx;
        if (var_j == NULL) {
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_left_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_right_value_20 = var_j;
        tmp_right_value_19 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_20, tmp_right_value_20);
        if (tmp_right_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_left_value_17);

            exception_lineno = 38;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_int_arg_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_17, tmp_right_value_19);
        Py_DECREF(tmp_left_value_17);
        Py_DECREF(tmp_right_value_19);
        if (tmp_int_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 38;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_4 = PyNumber_Int(tmp_int_arg_3);
        Py_DECREF(tmp_int_arg_3);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 38;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_value_1_2 = PyTuple_New(2);
        {
            PyObject *tmp_int_arg_4;
            PyObject *tmp_left_value_21;
            PyObject *tmp_left_value_22;
            PyObject *tmp_left_value_23;
            PyObject *tmp_right_value_21;
            PyObject *tmp_right_value_22;
            PyObject *tmp_right_value_23;
            PyObject *tmp_left_value_24;
            PyObject *tmp_right_value_24;
            PyTuple_SET_ITEM(tmp_kw_call_value_1_2, 0, tmp_tuple_element_4);
            if (var_SizeH == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 38;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_left_value_23 = var_SizeH;
            tmp_right_value_21 = mod_consts[32];
            tmp_left_value_22 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_23, tmp_right_value_21);
            if (tmp_left_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_right_value_22 = mod_consts[25];
            tmp_left_value_21 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_22, tmp_right_value_22);
            Py_DECREF(tmp_left_value_22);
            if (tmp_left_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            if (var_drawy == NULL) {
                Py_DECREF(tmp_left_value_21);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 38;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_left_value_24 = var_drawy;
            if (var_i == NULL) {
                Py_DECREF(tmp_left_value_21);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 38;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_right_value_24 = var_i;
            tmp_right_value_23 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_24, tmp_right_value_24);
            if (tmp_right_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_value_21);

                exception_lineno = 38;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_int_arg_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_21, tmp_right_value_23);
            Py_DECREF(tmp_left_value_21);
            Py_DECREF(tmp_right_value_23);
            if (tmp_int_arg_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_4 = PyNumber_Int(tmp_int_arg_4);
            Py_DECREF(tmp_int_arg_4);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_kw_call_value_1_2, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_value_1_2);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 38;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_value_1_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_unicode_arg_4;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_subscript_value_13;
        CHECK_OBJECT(par_array);
        tmp_expression_value_20 = par_array;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 40;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_11 = var_i;
        tmp_expression_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_11);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_j == NULL) {
            Py_DECREF(tmp_expression_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 40;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_12 = var_j;
        tmp_unicode_arg_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_12);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_unicode_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_18 = PyObject_Unicode(tmp_unicode_arg_4);
        Py_DECREF(tmp_unicode_arg_4);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[29]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 40;
        tmp_expression_value_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[30]);

        Py_DECREF(tmp_called_value_7);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_13 = mod_consts[32];
        tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_13, 1);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_4 = mod_consts[43];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        assert(tmp_condition_result_4 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_int_arg_5;
        PyObject *tmp_left_value_25;
        PyObject *tmp_left_value_26;
        PyObject *tmp_left_value_27;
        PyObject *tmp_right_value_25;
        PyObject *tmp_right_value_26;
        PyObject *tmp_right_value_27;
        PyObject *tmp_left_value_28;
        PyObject *tmp_right_value_28;
        if (var_canvas == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 41;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_21 = var_canvas;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[35]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_blackqueen == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 41;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_kw_call_value_0_3 = var_blackqueen;
        if (var_SizeW == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 41;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_27 = var_SizeW;
        tmp_right_value_25 = mod_consts[32];
        tmp_left_value_26 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_27, tmp_right_value_25);
        if (tmp_left_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 41;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_value_26 = mod_consts[25];
        tmp_left_value_25 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_26, tmp_right_value_26);
        Py_DECREF(tmp_left_value_26);
        if (tmp_left_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 41;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_drawx == NULL) {
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_left_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 41;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_28 = var_drawx;
        if (var_j == NULL) {
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_left_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 41;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_right_value_28 = var_j;
        tmp_right_value_27 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_28, tmp_right_value_28);
        if (tmp_right_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_left_value_25);

            exception_lineno = 41;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_int_arg_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_25, tmp_right_value_27);
        Py_DECREF(tmp_left_value_25);
        Py_DECREF(tmp_right_value_27);
        if (tmp_int_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 41;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_5 = PyNumber_Int(tmp_int_arg_5);
        Py_DECREF(tmp_int_arg_5);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 41;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_value_1_3 = PyTuple_New(2);
        {
            PyObject *tmp_int_arg_6;
            PyObject *tmp_left_value_29;
            PyObject *tmp_left_value_30;
            PyObject *tmp_left_value_31;
            PyObject *tmp_right_value_29;
            PyObject *tmp_right_value_30;
            PyObject *tmp_right_value_31;
            PyObject *tmp_left_value_32;
            PyObject *tmp_right_value_32;
            PyTuple_SET_ITEM(tmp_kw_call_value_1_3, 0, tmp_tuple_element_5);
            if (var_SizeH == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 41;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_left_value_31 = var_SizeH;
            tmp_right_value_29 = mod_consts[32];
            tmp_left_value_30 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_31, tmp_right_value_29);
            if (tmp_left_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_right_value_30 = mod_consts[25];
            tmp_left_value_29 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_30, tmp_right_value_30);
            Py_DECREF(tmp_left_value_30);
            if (tmp_left_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            if (var_drawy == NULL) {
                Py_DECREF(tmp_left_value_29);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 41;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_left_value_32 = var_drawy;
            if (var_i == NULL) {
                Py_DECREF(tmp_left_value_29);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 41;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_right_value_32 = var_i;
            tmp_right_value_31 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_32, tmp_right_value_32);
            if (tmp_right_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_value_29);

                exception_lineno = 41;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_int_arg_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_29, tmp_right_value_31);
            Py_DECREF(tmp_left_value_29);
            Py_DECREF(tmp_right_value_31);
            if (tmp_int_arg_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_5 = PyNumber_Int(tmp_int_arg_6);
            Py_DECREF(tmp_int_arg_6);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_kw_call_value_1_3, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_kw_call_value_1_3);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 41;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};

            tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_8, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_kw_call_value_1_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_unicode_arg_5;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_subscript_value_16;
        CHECK_OBJECT(par_array);
        tmp_expression_value_25 = par_array;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_14 = var_i;
        tmp_expression_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_14);
        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_j == NULL) {
            Py_DECREF(tmp_expression_value_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_15 = var_j;
        tmp_unicode_arg_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_15);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_unicode_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_23 = PyObject_Unicode(tmp_unicode_arg_5);
        Py_DECREF(tmp_unicode_arg_5);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[29]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 43;
        tmp_expression_value_22 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[30]);

        Py_DECREF(tmp_called_value_9);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_16 = mod_consts[32];
        tmp_cmp_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_22, tmp_subscript_value_16, 1);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_5 = mod_consts[45];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        assert(tmp_condition_result_5 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_int_arg_7;
        PyObject *tmp_left_value_33;
        PyObject *tmp_left_value_34;
        PyObject *tmp_left_value_35;
        PyObject *tmp_right_value_33;
        PyObject *tmp_right_value_34;
        PyObject *tmp_right_value_35;
        PyObject *tmp_left_value_36;
        PyObject *tmp_right_value_36;
        if (var_canvas == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_26 = var_canvas;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[35]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_blackknight == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_kw_call_value_0_4 = var_blackknight;
        if (var_SizeW == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_35 = var_SizeW;
        tmp_right_value_33 = mod_consts[32];
        tmp_left_value_34 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_35, tmp_right_value_33);
        if (tmp_left_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 44;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_value_34 = mod_consts[25];
        tmp_left_value_33 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_34, tmp_right_value_34);
        Py_DECREF(tmp_left_value_34);
        if (tmp_left_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 44;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_drawx == NULL) {
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_left_value_33);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_36 = var_drawx;
        if (var_j == NULL) {
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_left_value_33);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_right_value_36 = var_j;
        tmp_right_value_35 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_36, tmp_right_value_36);
        if (tmp_right_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_left_value_33);

            exception_lineno = 44;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_int_arg_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_33, tmp_right_value_35);
        Py_DECREF(tmp_left_value_33);
        Py_DECREF(tmp_right_value_35);
        if (tmp_int_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 44;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_6 = PyNumber_Int(tmp_int_arg_7);
        Py_DECREF(tmp_int_arg_7);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 44;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_value_1_4 = PyTuple_New(2);
        {
            PyObject *tmp_int_arg_8;
            PyObject *tmp_left_value_37;
            PyObject *tmp_left_value_38;
            PyObject *tmp_left_value_39;
            PyObject *tmp_right_value_37;
            PyObject *tmp_right_value_38;
            PyObject *tmp_right_value_39;
            PyObject *tmp_left_value_40;
            PyObject *tmp_right_value_40;
            PyTuple_SET_ITEM(tmp_kw_call_value_1_4, 0, tmp_tuple_element_6);
            if (var_SizeH == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 44;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_4;
            }

            tmp_left_value_39 = var_SizeH;
            tmp_right_value_37 = mod_consts[32];
            tmp_left_value_38 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_39, tmp_right_value_37);
            if (tmp_left_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_right_value_38 = mod_consts[25];
            tmp_left_value_37 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_38, tmp_right_value_38);
            Py_DECREF(tmp_left_value_38);
            if (tmp_left_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            if (var_drawy == NULL) {
                Py_DECREF(tmp_left_value_37);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 44;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_4;
            }

            tmp_left_value_40 = var_drawy;
            if (var_i == NULL) {
                Py_DECREF(tmp_left_value_37);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 44;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_4;
            }

            tmp_right_value_40 = var_i;
            tmp_right_value_39 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_40, tmp_right_value_40);
            if (tmp_right_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_value_37);

                exception_lineno = 44;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_int_arg_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_37, tmp_right_value_39);
            Py_DECREF(tmp_left_value_37);
            Py_DECREF(tmp_right_value_39);
            if (tmp_int_arg_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_tuple_element_6 = PyNumber_Int(tmp_int_arg_8);
            Py_DECREF(tmp_int_arg_8);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_kw_call_value_1_4, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_value_1_4);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 44;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4};

            tmp_call_result_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_10, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_value_1_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_unicode_arg_6;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_subscript_value_19;
        CHECK_OBJECT(par_array);
        tmp_expression_value_30 = par_array;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_17 = var_i;
        tmp_expression_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_17);
        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_j == NULL) {
            Py_DECREF(tmp_expression_value_29);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_18 = var_j;
        tmp_unicode_arg_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_18);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_unicode_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_28 = PyObject_Unicode(tmp_unicode_arg_6);
        Py_DECREF(tmp_unicode_arg_6);
        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[29]);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 46;
        tmp_expression_value_27 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[30]);

        Py_DECREF(tmp_called_value_11);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_19 = mod_consts[32];
        tmp_cmp_expr_left_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_27, tmp_subscript_value_19, 1);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_6 = mod_consts[47];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_int_arg_9;
        PyObject *tmp_left_value_41;
        PyObject *tmp_left_value_42;
        PyObject *tmp_left_value_43;
        PyObject *tmp_right_value_41;
        PyObject *tmp_right_value_42;
        PyObject *tmp_right_value_43;
        PyObject *tmp_left_value_44;
        PyObject *tmp_right_value_44;
        if (var_canvas == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_31 = var_canvas;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[35]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_blackbishop == NULL) {
            Py_DECREF(tmp_called_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_kw_call_value_0_5 = var_blackbishop;
        if (var_SizeW == NULL) {
            Py_DECREF(tmp_called_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_43 = var_SizeW;
        tmp_right_value_41 = mod_consts[32];
        tmp_left_value_42 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_43, tmp_right_value_41);
        if (tmp_left_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 47;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_value_42 = mod_consts[25];
        tmp_left_value_41 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_42, tmp_right_value_42);
        Py_DECREF(tmp_left_value_42);
        if (tmp_left_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 47;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_drawx == NULL) {
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_left_value_41);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_44 = var_drawx;
        if (var_j == NULL) {
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_left_value_41);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_right_value_44 = var_j;
        tmp_right_value_43 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_44, tmp_right_value_44);
        if (tmp_right_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_left_value_41);

            exception_lineno = 47;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_int_arg_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_41, tmp_right_value_43);
        Py_DECREF(tmp_left_value_41);
        Py_DECREF(tmp_right_value_43);
        if (tmp_int_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 47;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_7 = PyNumber_Int(tmp_int_arg_9);
        Py_DECREF(tmp_int_arg_9);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 47;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_value_1_5 = PyTuple_New(2);
        {
            PyObject *tmp_int_arg_10;
            PyObject *tmp_left_value_45;
            PyObject *tmp_left_value_46;
            PyObject *tmp_left_value_47;
            PyObject *tmp_right_value_45;
            PyObject *tmp_right_value_46;
            PyObject *tmp_right_value_47;
            PyObject *tmp_left_value_48;
            PyObject *tmp_right_value_48;
            PyTuple_SET_ITEM(tmp_kw_call_value_1_5, 0, tmp_tuple_element_7);
            if (var_SizeH == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 47;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_5;
            }

            tmp_left_value_47 = var_SizeH;
            tmp_right_value_45 = mod_consts[32];
            tmp_left_value_46 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_47, tmp_right_value_45);
            if (tmp_left_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_right_value_46 = mod_consts[25];
            tmp_left_value_45 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_46, tmp_right_value_46);
            Py_DECREF(tmp_left_value_46);
            if (tmp_left_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            if (var_drawy == NULL) {
                Py_DECREF(tmp_left_value_45);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 47;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_5;
            }

            tmp_left_value_48 = var_drawy;
            if (var_i == NULL) {
                Py_DECREF(tmp_left_value_45);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 47;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_5;
            }

            tmp_right_value_48 = var_i;
            tmp_right_value_47 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_48, tmp_right_value_48);
            if (tmp_right_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_value_45);

                exception_lineno = 47;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_int_arg_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_45, tmp_right_value_47);
            Py_DECREF(tmp_left_value_45);
            Py_DECREF(tmp_right_value_47);
            if (tmp_int_arg_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_tuple_element_7 = PyNumber_Int(tmp_int_arg_10);
            Py_DECREF(tmp_int_arg_10);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_kw_call_value_1_5, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_kw_call_value_1_5);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 47;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5};

            tmp_call_result_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_12, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_kw_call_value_1_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_unicode_arg_7;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_subscript_value_22;
        CHECK_OBJECT(par_array);
        tmp_expression_value_35 = par_array;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_20 = var_i;
        tmp_expression_value_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_20);
        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_j == NULL) {
            Py_DECREF(tmp_expression_value_34);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_21 = var_j;
        tmp_unicode_arg_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_21);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_unicode_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_33 = PyObject_Unicode(tmp_unicode_arg_7);
        Py_DECREF(tmp_unicode_arg_7);
        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[29]);
        Py_DECREF(tmp_expression_value_33);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 49;
        tmp_expression_value_32 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[30]);

        Py_DECREF(tmp_called_value_13);
        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_22 = mod_consts[32];
        tmp_cmp_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_32, tmp_subscript_value_22, 1);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_7 = mod_consts[49];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        assert(tmp_condition_result_7 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_call_result_6;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_kw_call_value_1_6;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_int_arg_11;
        PyObject *tmp_left_value_49;
        PyObject *tmp_left_value_50;
        PyObject *tmp_left_value_51;
        PyObject *tmp_right_value_49;
        PyObject *tmp_right_value_50;
        PyObject *tmp_right_value_51;
        PyObject *tmp_left_value_52;
        PyObject *tmp_right_value_52;
        if (var_canvas == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_36 = var_canvas;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[35]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_blackrook == NULL) {
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_kw_call_value_0_6 = var_blackrook;
        if (var_SizeW == NULL) {
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_51 = var_SizeW;
        tmp_right_value_49 = mod_consts[32];
        tmp_left_value_50 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_51, tmp_right_value_49);
        if (tmp_left_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 50;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_value_50 = mod_consts[25];
        tmp_left_value_49 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_50, tmp_right_value_50);
        Py_DECREF(tmp_left_value_50);
        if (tmp_left_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 50;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_drawx == NULL) {
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_left_value_49);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_52 = var_drawx;
        if (var_j == NULL) {
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_left_value_49);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_right_value_52 = var_j;
        tmp_right_value_51 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_52, tmp_right_value_52);
        if (tmp_right_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_left_value_49);

            exception_lineno = 50;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_int_arg_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_49, tmp_right_value_51);
        Py_DECREF(tmp_left_value_49);
        Py_DECREF(tmp_right_value_51);
        if (tmp_int_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 50;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_8 = PyNumber_Int(tmp_int_arg_11);
        Py_DECREF(tmp_int_arg_11);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 50;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_value_1_6 = PyTuple_New(2);
        {
            PyObject *tmp_int_arg_12;
            PyObject *tmp_left_value_53;
            PyObject *tmp_left_value_54;
            PyObject *tmp_left_value_55;
            PyObject *tmp_right_value_53;
            PyObject *tmp_right_value_54;
            PyObject *tmp_right_value_55;
            PyObject *tmp_left_value_56;
            PyObject *tmp_right_value_56;
            PyTuple_SET_ITEM(tmp_kw_call_value_1_6, 0, tmp_tuple_element_8);
            if (var_SizeH == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 50;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_6;
            }

            tmp_left_value_55 = var_SizeH;
            tmp_right_value_53 = mod_consts[32];
            tmp_left_value_54 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_55, tmp_right_value_53);
            if (tmp_left_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_right_value_54 = mod_consts[25];
            tmp_left_value_53 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_54, tmp_right_value_54);
            Py_DECREF(tmp_left_value_54);
            if (tmp_left_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            if (var_drawy == NULL) {
                Py_DECREF(tmp_left_value_53);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 50;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_6;
            }

            tmp_left_value_56 = var_drawy;
            if (var_i == NULL) {
                Py_DECREF(tmp_left_value_53);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 50;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_6;
            }

            tmp_right_value_56 = var_i;
            tmp_right_value_55 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_56, tmp_right_value_56);
            if (tmp_right_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_value_53);

                exception_lineno = 50;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_int_arg_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_53, tmp_right_value_55);
            Py_DECREF(tmp_left_value_53);
            Py_DECREF(tmp_right_value_55);
            if (tmp_int_arg_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_tuple_element_8 = PyNumber_Int(tmp_int_arg_12);
            Py_DECREF(tmp_int_arg_12);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_kw_call_value_1_6, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_kw_call_value_1_6);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 50;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6};

            tmp_call_result_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_14, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_kw_call_value_1_6);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_7:;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_unicode_arg_8;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_subscript_value_25;
        CHECK_OBJECT(par_array);
        tmp_expression_value_40 = par_array;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_23 = var_i;
        tmp_expression_value_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_23);
        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_j);
        tmp_subscript_value_24 = var_j;
        tmp_unicode_arg_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_24);
        Py_DECREF(tmp_expression_value_39);
        if (tmp_unicode_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_38 = PyObject_Unicode(tmp_unicode_arg_8);
        Py_DECREF(tmp_unicode_arg_8);
        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[29]);
        Py_DECREF(tmp_expression_value_38);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 52;
        tmp_expression_value_37 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[30]);

        Py_DECREF(tmp_called_value_15);
        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_25 = mod_consts[0];
        tmp_cmp_expr_left_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_37, tmp_subscript_value_25, 0);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_8 = mod_consts[51];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        assert(tmp_condition_result_8 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_unicode_arg_9;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_subscript_value_27;
        PyObject *tmp_subscript_value_28;
        CHECK_OBJECT(par_array);
        tmp_expression_value_44 = par_array;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_26 = var_i;
        tmp_expression_value_43 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_26);
        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_j);
        tmp_subscript_value_27 = var_j;
        tmp_unicode_arg_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_27);
        Py_DECREF(tmp_expression_value_43);
        if (tmp_unicode_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_42 = PyObject_Unicode(tmp_unicode_arg_9);
        Py_DECREF(tmp_unicode_arg_9);
        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[29]);
        Py_DECREF(tmp_expression_value_42);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 53;
        tmp_expression_value_41 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_16, mod_consts[30]);

        Py_DECREF(tmp_called_value_16);
        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_28 = mod_consts[32];
        tmp_cmp_expr_left_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_41, tmp_subscript_value_28, 1);
        Py_DECREF(tmp_expression_value_41);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_9 = mod_consts[33];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
        assert(tmp_condition_result_9 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_kw_call_value_1_7;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_int_arg_13;
        PyObject *tmp_left_value_57;
        PyObject *tmp_left_value_58;
        PyObject *tmp_left_value_59;
        PyObject *tmp_right_value_57;
        PyObject *tmp_right_value_58;
        PyObject *tmp_right_value_59;
        PyObject *tmp_left_value_60;
        PyObject *tmp_right_value_60;
        if (var_canvas == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_45 = var_canvas;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[35]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_whitepawn == NULL) {
            Py_DECREF(tmp_called_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_kw_call_value_0_7 = var_whitepawn;
        if (var_SizeW == NULL) {
            Py_DECREF(tmp_called_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_59 = var_SizeW;
        tmp_right_value_57 = mod_consts[32];
        tmp_left_value_58 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_59, tmp_right_value_57);
        if (tmp_left_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 54;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_value_58 = mod_consts[25];
        tmp_left_value_57 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_58, tmp_right_value_58);
        Py_DECREF(tmp_left_value_58);
        if (tmp_left_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 54;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_drawx);
        tmp_left_value_60 = var_drawx;
        CHECK_OBJECT(var_j);
        tmp_right_value_60 = var_j;
        tmp_right_value_59 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_60, tmp_right_value_60);
        if (tmp_right_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_left_value_57);

            exception_lineno = 54;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_int_arg_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_57, tmp_right_value_59);
        Py_DECREF(tmp_left_value_57);
        Py_DECREF(tmp_right_value_59);
        if (tmp_int_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 54;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_9 = PyNumber_Int(tmp_int_arg_13);
        Py_DECREF(tmp_int_arg_13);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 54;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_value_1_7 = PyTuple_New(2);
        {
            PyObject *tmp_int_arg_14;
            PyObject *tmp_left_value_61;
            PyObject *tmp_left_value_62;
            PyObject *tmp_left_value_63;
            PyObject *tmp_right_value_61;
            PyObject *tmp_right_value_62;
            PyObject *tmp_right_value_63;
            PyObject *tmp_left_value_64;
            PyObject *tmp_right_value_64;
            PyTuple_SET_ITEM(tmp_kw_call_value_1_7, 0, tmp_tuple_element_9);
            if (var_SizeH == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 54;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_7;
            }

            tmp_left_value_63 = var_SizeH;
            tmp_right_value_61 = mod_consts[32];
            tmp_left_value_62 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_63, tmp_right_value_61);
            if (tmp_left_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_right_value_62 = mod_consts[25];
            tmp_left_value_61 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_62, tmp_right_value_62);
            Py_DECREF(tmp_left_value_62);
            if (tmp_left_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            CHECK_OBJECT(var_drawy);
            tmp_left_value_64 = var_drawy;
            if (var_i == NULL) {
                Py_DECREF(tmp_left_value_61);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 54;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_7;
            }

            tmp_right_value_64 = var_i;
            tmp_right_value_63 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_64, tmp_right_value_64);
            if (tmp_right_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_value_61);

                exception_lineno = 54;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_int_arg_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_61, tmp_right_value_63);
            Py_DECREF(tmp_left_value_61);
            Py_DECREF(tmp_right_value_63);
            if (tmp_int_arg_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_tuple_element_9 = PyNumber_Int(tmp_int_arg_14);
            Py_DECREF(tmp_int_arg_14);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_kw_call_value_1_7, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_kw_call_value_1_7);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 54;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7};

            tmp_call_result_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_17, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_kw_call_value_1_7);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_unicode_arg_10;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_subscript_value_31;
        CHECK_OBJECT(par_array);
        tmp_expression_value_49 = par_array;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_29 = var_i;
        tmp_expression_value_48 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_29);
        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_j == NULL) {
            Py_DECREF(tmp_expression_value_48);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_30 = var_j;
        tmp_unicode_arg_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_30);
        Py_DECREF(tmp_expression_value_48);
        if (tmp_unicode_arg_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_47 = PyObject_Unicode(tmp_unicode_arg_10);
        Py_DECREF(tmp_unicode_arg_10);
        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[29]);
        Py_DECREF(tmp_expression_value_47);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 56;
        tmp_expression_value_46 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_18, mod_consts[30]);

        Py_DECREF(tmp_called_value_18);
        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_31 = mod_consts[32];
        tmp_cmp_expr_left_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_46, tmp_subscript_value_31, 1);
        Py_DECREF(tmp_expression_value_46);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_10 = mod_consts[39];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
        assert(tmp_condition_result_10 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_call_result_8;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_kw_call_value_1_8;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_int_arg_15;
        PyObject *tmp_left_value_65;
        PyObject *tmp_left_value_66;
        PyObject *tmp_left_value_67;
        PyObject *tmp_right_value_65;
        PyObject *tmp_right_value_66;
        PyObject *tmp_right_value_67;
        PyObject *tmp_left_value_68;
        PyObject *tmp_right_value_68;
        if (var_canvas == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_50 = var_canvas;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[35]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_whiteking == NULL) {
            Py_DECREF(tmp_called_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_kw_call_value_0_8 = var_whiteking;
        if (var_SizeW == NULL) {
            Py_DECREF(tmp_called_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_67 = var_SizeW;
        tmp_right_value_65 = mod_consts[32];
        tmp_left_value_66 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_67, tmp_right_value_65);
        if (tmp_left_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 57;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_value_66 = mod_consts[25];
        tmp_left_value_65 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_66, tmp_right_value_66);
        Py_DECREF(tmp_left_value_66);
        if (tmp_left_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 57;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_drawx == NULL) {
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_left_value_65);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_68 = var_drawx;
        if (var_j == NULL) {
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_left_value_65);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_right_value_68 = var_j;
        tmp_right_value_67 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_68, tmp_right_value_68);
        if (tmp_right_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_left_value_65);

            exception_lineno = 57;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_int_arg_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_65, tmp_right_value_67);
        Py_DECREF(tmp_left_value_65);
        Py_DECREF(tmp_right_value_67);
        if (tmp_int_arg_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 57;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_10 = PyNumber_Int(tmp_int_arg_15);
        Py_DECREF(tmp_int_arg_15);
        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 57;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_value_1_8 = PyTuple_New(2);
        {
            PyObject *tmp_int_arg_16;
            PyObject *tmp_left_value_69;
            PyObject *tmp_left_value_70;
            PyObject *tmp_left_value_71;
            PyObject *tmp_right_value_69;
            PyObject *tmp_right_value_70;
            PyObject *tmp_right_value_71;
            PyObject *tmp_left_value_72;
            PyObject *tmp_right_value_72;
            PyTuple_SET_ITEM(tmp_kw_call_value_1_8, 0, tmp_tuple_element_10);
            if (var_SizeH == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 57;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_8;
            }

            tmp_left_value_71 = var_SizeH;
            tmp_right_value_69 = mod_consts[32];
            tmp_left_value_70 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_71, tmp_right_value_69);
            if (tmp_left_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            tmp_right_value_70 = mod_consts[25];
            tmp_left_value_69 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_70, tmp_right_value_70);
            Py_DECREF(tmp_left_value_70);
            if (tmp_left_value_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            if (var_drawy == NULL) {
                Py_DECREF(tmp_left_value_69);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 57;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_8;
            }

            tmp_left_value_72 = var_drawy;
            if (var_i == NULL) {
                Py_DECREF(tmp_left_value_69);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 57;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_8;
            }

            tmp_right_value_72 = var_i;
            tmp_right_value_71 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_72, tmp_right_value_72);
            if (tmp_right_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_value_69);

                exception_lineno = 57;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            tmp_int_arg_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_69, tmp_right_value_71);
            Py_DECREF(tmp_left_value_69);
            Py_DECREF(tmp_right_value_71);
            if (tmp_int_arg_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            tmp_tuple_element_10 = PyNumber_Int(tmp_int_arg_16);
            Py_DECREF(tmp_int_arg_16);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_kw_call_value_1_8, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_kw_call_value_1_8);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 57;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_8};

            tmp_call_result_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_19, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_kw_call_value_1_8);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_unicode_arg_11;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_32;
        PyObject *tmp_subscript_value_33;
        PyObject *tmp_subscript_value_34;
        CHECK_OBJECT(par_array);
        tmp_expression_value_54 = par_array;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_32 = var_i;
        tmp_expression_value_53 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_32);
        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_j == NULL) {
            Py_DECREF(tmp_expression_value_53);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_33 = var_j;
        tmp_unicode_arg_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_33);
        Py_DECREF(tmp_expression_value_53);
        if (tmp_unicode_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_52 = PyObject_Unicode(tmp_unicode_arg_11);
        Py_DECREF(tmp_unicode_arg_11);
        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[29]);
        Py_DECREF(tmp_expression_value_52);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 59;
        tmp_expression_value_51 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_20, mod_consts[30]);

        Py_DECREF(tmp_called_value_20);
        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_34 = mod_consts[32];
        tmp_cmp_expr_left_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_51, tmp_subscript_value_34, 1);
        Py_DECREF(tmp_expression_value_51);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_11 = mod_consts[43];
        tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
        assert(tmp_condition_result_11 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_kw_call_value_1_9;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_int_arg_17;
        PyObject *tmp_left_value_73;
        PyObject *tmp_left_value_74;
        PyObject *tmp_left_value_75;
        PyObject *tmp_right_value_73;
        PyObject *tmp_right_value_74;
        PyObject *tmp_right_value_75;
        PyObject *tmp_left_value_76;
        PyObject *tmp_right_value_76;
        if (var_canvas == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_55 = var_canvas;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[35]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_whitequeen == NULL) {
            Py_DECREF(tmp_called_value_21);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_kw_call_value_0_9 = var_whitequeen;
        if (var_SizeW == NULL) {
            Py_DECREF(tmp_called_value_21);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_75 = var_SizeW;
        tmp_right_value_73 = mod_consts[32];
        tmp_left_value_74 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_75, tmp_right_value_73);
        if (tmp_left_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 60;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_value_74 = mod_consts[25];
        tmp_left_value_73 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_74, tmp_right_value_74);
        Py_DECREF(tmp_left_value_74);
        if (tmp_left_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 60;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_drawx == NULL) {
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_left_value_73);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_76 = var_drawx;
        if (var_j == NULL) {
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_left_value_73);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_right_value_76 = var_j;
        tmp_right_value_75 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_76, tmp_right_value_76);
        if (tmp_right_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_left_value_73);

            exception_lineno = 60;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_int_arg_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_73, tmp_right_value_75);
        Py_DECREF(tmp_left_value_73);
        Py_DECREF(tmp_right_value_75);
        if (tmp_int_arg_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 60;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_11 = PyNumber_Int(tmp_int_arg_17);
        Py_DECREF(tmp_int_arg_17);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 60;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_value_1_9 = PyTuple_New(2);
        {
            PyObject *tmp_int_arg_18;
            PyObject *tmp_left_value_77;
            PyObject *tmp_left_value_78;
            PyObject *tmp_left_value_79;
            PyObject *tmp_right_value_77;
            PyObject *tmp_right_value_78;
            PyObject *tmp_right_value_79;
            PyObject *tmp_left_value_80;
            PyObject *tmp_right_value_80;
            PyTuple_SET_ITEM(tmp_kw_call_value_1_9, 0, tmp_tuple_element_11);
            if (var_SizeH == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 60;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_9;
            }

            tmp_left_value_79 = var_SizeH;
            tmp_right_value_77 = mod_consts[32];
            tmp_left_value_78 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_79, tmp_right_value_77);
            if (tmp_left_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            tmp_right_value_78 = mod_consts[25];
            tmp_left_value_77 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_78, tmp_right_value_78);
            Py_DECREF(tmp_left_value_78);
            if (tmp_left_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            if (var_drawy == NULL) {
                Py_DECREF(tmp_left_value_77);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 60;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_9;
            }

            tmp_left_value_80 = var_drawy;
            if (var_i == NULL) {
                Py_DECREF(tmp_left_value_77);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 60;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_9;
            }

            tmp_right_value_80 = var_i;
            tmp_right_value_79 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_80, tmp_right_value_80);
            if (tmp_right_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_value_77);

                exception_lineno = 60;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            tmp_int_arg_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_77, tmp_right_value_79);
            Py_DECREF(tmp_left_value_77);
            Py_DECREF(tmp_right_value_79);
            if (tmp_int_arg_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            tmp_tuple_element_11 = PyNumber_Int(tmp_int_arg_18);
            Py_DECREF(tmp_int_arg_18);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_kw_call_value_1_9, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_kw_call_value_1_9);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 60;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_9};

            tmp_call_result_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_21, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_kw_call_value_1_9);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_unicode_arg_12;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_35;
        PyObject *tmp_subscript_value_36;
        PyObject *tmp_subscript_value_37;
        CHECK_OBJECT(par_array);
        tmp_expression_value_59 = par_array;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_35 = var_i;
        tmp_expression_value_58 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_35);
        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_j == NULL) {
            Py_DECREF(tmp_expression_value_58);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_36 = var_j;
        tmp_unicode_arg_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_36);
        Py_DECREF(tmp_expression_value_58);
        if (tmp_unicode_arg_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_57 = PyObject_Unicode(tmp_unicode_arg_12);
        Py_DECREF(tmp_unicode_arg_12);
        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[29]);
        Py_DECREF(tmp_expression_value_57);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 62;
        tmp_expression_value_56 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_22, mod_consts[30]);

        Py_DECREF(tmp_called_value_22);
        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_37 = mod_consts[32];
        tmp_cmp_expr_left_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_56, tmp_subscript_value_37, 1);
        Py_DECREF(tmp_expression_value_56);
        if (tmp_cmp_expr_left_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_12 = mod_consts[45];
        tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        Py_DECREF(tmp_cmp_expr_left_12);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
        assert(tmp_condition_result_12 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_call_result_10;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_kw_call_value_1_10;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_int_arg_19;
        PyObject *tmp_left_value_81;
        PyObject *tmp_left_value_82;
        PyObject *tmp_left_value_83;
        PyObject *tmp_right_value_81;
        PyObject *tmp_right_value_82;
        PyObject *tmp_right_value_83;
        PyObject *tmp_left_value_84;
        PyObject *tmp_right_value_84;
        if (var_canvas == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_60 = var_canvas;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[35]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_whiteknight == NULL) {
            Py_DECREF(tmp_called_value_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_kw_call_value_0_10 = var_whiteknight;
        if (var_SizeW == NULL) {
            Py_DECREF(tmp_called_value_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_83 = var_SizeW;
        tmp_right_value_81 = mod_consts[32];
        tmp_left_value_82 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_83, tmp_right_value_81);
        if (tmp_left_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 63;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_value_82 = mod_consts[25];
        tmp_left_value_81 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_82, tmp_right_value_82);
        Py_DECREF(tmp_left_value_82);
        if (tmp_left_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 63;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_drawx == NULL) {
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_left_value_81);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_84 = var_drawx;
        if (var_j == NULL) {
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_left_value_81);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_right_value_84 = var_j;
        tmp_right_value_83 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_84, tmp_right_value_84);
        if (tmp_right_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_left_value_81);

            exception_lineno = 63;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_int_arg_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_81, tmp_right_value_83);
        Py_DECREF(tmp_left_value_81);
        Py_DECREF(tmp_right_value_83);
        if (tmp_int_arg_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 63;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_12 = PyNumber_Int(tmp_int_arg_19);
        Py_DECREF(tmp_int_arg_19);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 63;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_value_1_10 = PyTuple_New(2);
        {
            PyObject *tmp_int_arg_20;
            PyObject *tmp_left_value_85;
            PyObject *tmp_left_value_86;
            PyObject *tmp_left_value_87;
            PyObject *tmp_right_value_85;
            PyObject *tmp_right_value_86;
            PyObject *tmp_right_value_87;
            PyObject *tmp_left_value_88;
            PyObject *tmp_right_value_88;
            PyTuple_SET_ITEM(tmp_kw_call_value_1_10, 0, tmp_tuple_element_12);
            if (var_SizeH == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 63;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_10;
            }

            tmp_left_value_87 = var_SizeH;
            tmp_right_value_85 = mod_consts[32];
            tmp_left_value_86 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_87, tmp_right_value_85);
            if (tmp_left_value_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            tmp_right_value_86 = mod_consts[25];
            tmp_left_value_85 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_86, tmp_right_value_86);
            Py_DECREF(tmp_left_value_86);
            if (tmp_left_value_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            if (var_drawy == NULL) {
                Py_DECREF(tmp_left_value_85);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 63;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_10;
            }

            tmp_left_value_88 = var_drawy;
            if (var_i == NULL) {
                Py_DECREF(tmp_left_value_85);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 63;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_10;
            }

            tmp_right_value_88 = var_i;
            tmp_right_value_87 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_88, tmp_right_value_88);
            if (tmp_right_value_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_value_85);

                exception_lineno = 63;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            tmp_int_arg_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_85, tmp_right_value_87);
            Py_DECREF(tmp_left_value_85);
            Py_DECREF(tmp_right_value_87);
            if (tmp_int_arg_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            tmp_tuple_element_12 = PyNumber_Int(tmp_int_arg_20);
            Py_DECREF(tmp_int_arg_20);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_kw_call_value_1_10, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_kw_call_value_1_10);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 63;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_10};

            tmp_call_result_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_23, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_kw_call_value_1_10);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_unicode_arg_13;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_subscript_value_38;
        PyObject *tmp_subscript_value_39;
        PyObject *tmp_subscript_value_40;
        CHECK_OBJECT(par_array);
        tmp_expression_value_64 = par_array;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_38 = var_i;
        tmp_expression_value_63 = LOOKUP_SUBSCRIPT(tmp_expression_value_64, tmp_subscript_value_38);
        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_j == NULL) {
            Py_DECREF(tmp_expression_value_63);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_39 = var_j;
        tmp_unicode_arg_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_63, tmp_subscript_value_39);
        Py_DECREF(tmp_expression_value_63);
        if (tmp_unicode_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_62 = PyObject_Unicode(tmp_unicode_arg_13);
        Py_DECREF(tmp_unicode_arg_13);
        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[29]);
        Py_DECREF(tmp_expression_value_62);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 65;
        tmp_expression_value_61 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_24, mod_consts[30]);

        Py_DECREF(tmp_called_value_24);
        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_40 = mod_consts[32];
        tmp_cmp_expr_left_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_61, tmp_subscript_value_40, 1);
        Py_DECREF(tmp_expression_value_61);
        if (tmp_cmp_expr_left_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_13 = mod_consts[47];
        tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        Py_DECREF(tmp_cmp_expr_left_13);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
        assert(tmp_condition_result_13 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_call_result_11;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_kw_call_value_1_11;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_int_arg_21;
        PyObject *tmp_left_value_89;
        PyObject *tmp_left_value_90;
        PyObject *tmp_left_value_91;
        PyObject *tmp_right_value_89;
        PyObject *tmp_right_value_90;
        PyObject *tmp_right_value_91;
        PyObject *tmp_left_value_92;
        PyObject *tmp_right_value_92;
        if (var_canvas == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_65 = var_canvas;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[35]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_whitebishop == NULL) {
            Py_DECREF(tmp_called_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_kw_call_value_0_11 = var_whitebishop;
        if (var_SizeW == NULL) {
            Py_DECREF(tmp_called_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_91 = var_SizeW;
        tmp_right_value_89 = mod_consts[32];
        tmp_left_value_90 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_91, tmp_right_value_89);
        if (tmp_left_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 66;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_value_90 = mod_consts[25];
        tmp_left_value_89 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_90, tmp_right_value_90);
        Py_DECREF(tmp_left_value_90);
        if (tmp_left_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 66;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_drawx == NULL) {
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_left_value_89);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_92 = var_drawx;
        if (var_j == NULL) {
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_left_value_89);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_right_value_92 = var_j;
        tmp_right_value_91 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_92, tmp_right_value_92);
        if (tmp_right_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_left_value_89);

            exception_lineno = 66;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_int_arg_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_89, tmp_right_value_91);
        Py_DECREF(tmp_left_value_89);
        Py_DECREF(tmp_right_value_91);
        if (tmp_int_arg_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 66;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_13 = PyNumber_Int(tmp_int_arg_21);
        Py_DECREF(tmp_int_arg_21);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 66;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_value_1_11 = PyTuple_New(2);
        {
            PyObject *tmp_int_arg_22;
            PyObject *tmp_left_value_93;
            PyObject *tmp_left_value_94;
            PyObject *tmp_left_value_95;
            PyObject *tmp_right_value_93;
            PyObject *tmp_right_value_94;
            PyObject *tmp_right_value_95;
            PyObject *tmp_left_value_96;
            PyObject *tmp_right_value_96;
            PyTuple_SET_ITEM(tmp_kw_call_value_1_11, 0, tmp_tuple_element_13);
            if (var_SizeH == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 66;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_11;
            }

            tmp_left_value_95 = var_SizeH;
            tmp_right_value_93 = mod_consts[32];
            tmp_left_value_94 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_95, tmp_right_value_93);
            if (tmp_left_value_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_11;
            }
            tmp_right_value_94 = mod_consts[25];
            tmp_left_value_93 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_94, tmp_right_value_94);
            Py_DECREF(tmp_left_value_94);
            if (tmp_left_value_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_11;
            }
            if (var_drawy == NULL) {
                Py_DECREF(tmp_left_value_93);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 66;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_11;
            }

            tmp_left_value_96 = var_drawy;
            if (var_i == NULL) {
                Py_DECREF(tmp_left_value_93);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 66;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_11;
            }

            tmp_right_value_96 = var_i;
            tmp_right_value_95 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_96, tmp_right_value_96);
            if (tmp_right_value_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_value_93);

                exception_lineno = 66;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_11;
            }
            tmp_int_arg_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_93, tmp_right_value_95);
            Py_DECREF(tmp_left_value_93);
            Py_DECREF(tmp_right_value_95);
            if (tmp_int_arg_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_11;
            }
            tmp_tuple_element_13 = PyNumber_Int(tmp_int_arg_22);
            Py_DECREF(tmp_int_arg_22);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_kw_call_value_1_11, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_kw_call_value_1_11);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 66;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_11};

            tmp_call_result_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_25, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_kw_call_value_1_11);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_11);
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_unicode_arg_14;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_subscript_value_41;
        PyObject *tmp_subscript_value_42;
        PyObject *tmp_subscript_value_43;
        CHECK_OBJECT(par_array);
        tmp_expression_value_69 = par_array;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_41 = var_i;
        tmp_expression_value_68 = LOOKUP_SUBSCRIPT(tmp_expression_value_69, tmp_subscript_value_41);
        if (tmp_expression_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_j == NULL) {
            Py_DECREF(tmp_expression_value_68);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_42 = var_j;
        tmp_unicode_arg_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_68, tmp_subscript_value_42);
        Py_DECREF(tmp_expression_value_68);
        if (tmp_unicode_arg_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_67 = PyObject_Unicode(tmp_unicode_arg_14);
        Py_DECREF(tmp_unicode_arg_14);
        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[29]);
        Py_DECREF(tmp_expression_value_67);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 68;
        tmp_expression_value_66 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_26, mod_consts[30]);

        Py_DECREF(tmp_called_value_26);
        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_43 = mod_consts[32];
        tmp_cmp_expr_left_14 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_66, tmp_subscript_value_43, 1);
        Py_DECREF(tmp_expression_value_66);
        if (tmp_cmp_expr_left_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_14 = mod_consts[49];
        tmp_condition_result_14 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        Py_DECREF(tmp_cmp_expr_left_14);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
        assert(tmp_condition_result_14 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_call_result_12;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_kw_call_value_1_12;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_int_arg_23;
        PyObject *tmp_left_value_97;
        PyObject *tmp_left_value_98;
        PyObject *tmp_left_value_99;
        PyObject *tmp_right_value_97;
        PyObject *tmp_right_value_98;
        PyObject *tmp_right_value_99;
        PyObject *tmp_left_value_100;
        PyObject *tmp_right_value_100;
        if (var_canvas == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_70 = var_canvas;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[35]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_whiterook == NULL) {
            Py_DECREF(tmp_called_value_27);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_kw_call_value_0_12 = var_whiterook;
        if (var_SizeW == NULL) {
            Py_DECREF(tmp_called_value_27);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_99 = var_SizeW;
        tmp_right_value_97 = mod_consts[32];
        tmp_left_value_98 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_99, tmp_right_value_97);
        if (tmp_left_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 69;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_value_98 = mod_consts[25];
        tmp_left_value_97 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_98, tmp_right_value_98);
        Py_DECREF(tmp_left_value_98);
        if (tmp_left_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 69;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_drawx == NULL) {
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_left_value_97);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_100 = var_drawx;
        if (var_j == NULL) {
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_left_value_97);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_right_value_100 = var_j;
        tmp_right_value_99 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_100, tmp_right_value_100);
        if (tmp_right_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_left_value_97);

            exception_lineno = 69;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_int_arg_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_97, tmp_right_value_99);
        Py_DECREF(tmp_left_value_97);
        Py_DECREF(tmp_right_value_99);
        if (tmp_int_arg_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 69;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_14 = PyNumber_Int(tmp_int_arg_23);
        Py_DECREF(tmp_int_arg_23);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 69;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_value_1_12 = PyTuple_New(2);
        {
            PyObject *tmp_int_arg_24;
            PyObject *tmp_left_value_101;
            PyObject *tmp_left_value_102;
            PyObject *tmp_left_value_103;
            PyObject *tmp_right_value_101;
            PyObject *tmp_right_value_102;
            PyObject *tmp_right_value_103;
            PyObject *tmp_left_value_104;
            PyObject *tmp_right_value_104;
            PyTuple_SET_ITEM(tmp_kw_call_value_1_12, 0, tmp_tuple_element_14);
            if (var_SizeH == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 69;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_12;
            }

            tmp_left_value_103 = var_SizeH;
            tmp_right_value_101 = mod_consts[32];
            tmp_left_value_102 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_103, tmp_right_value_101);
            if (tmp_left_value_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_12;
            }
            tmp_right_value_102 = mod_consts[25];
            tmp_left_value_101 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_102, tmp_right_value_102);
            Py_DECREF(tmp_left_value_102);
            if (tmp_left_value_101 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_12;
            }
            if (var_drawy == NULL) {
                Py_DECREF(tmp_left_value_101);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 69;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_12;
            }

            tmp_left_value_104 = var_drawy;
            if (var_i == NULL) {
                Py_DECREF(tmp_left_value_101);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 69;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_12;
            }

            tmp_right_value_104 = var_i;
            tmp_right_value_103 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_104, tmp_right_value_104);
            if (tmp_right_value_103 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_value_101);

                exception_lineno = 69;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_12;
            }
            tmp_int_arg_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_101, tmp_right_value_103);
            Py_DECREF(tmp_left_value_101);
            Py_DECREF(tmp_right_value_103);
            if (tmp_int_arg_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_12;
            }
            tmp_tuple_element_14 = PyNumber_Int(tmp_int_arg_24);
            Py_DECREF(tmp_int_arg_24);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_kw_call_value_1_12, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_kw_call_value_1_12);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 69;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_12};

            tmp_call_result_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_27, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_kw_call_value_1_12);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_12);
    }
    branch_no_14:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_call_result_13;
        PyObject *tmp_kw_call_value_0_13;
        PyObject *tmp_kw_call_value_1_13;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_int_arg_25;
        PyObject *tmp_left_value_105;
        PyObject *tmp_left_value_106;
        PyObject *tmp_left_value_107;
        PyObject *tmp_right_value_105;
        PyObject *tmp_right_value_106;
        PyObject *tmp_right_value_107;
        PyObject *tmp_left_value_108;
        PyObject *tmp_right_value_108;
        if (var_canvas == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_71 = var_canvas;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[35]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_x == NULL) {
            Py_DECREF(tmp_called_value_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_kw_call_value_0_13 = var_x;
        if (var_SizeW == NULL) {
            Py_DECREF(tmp_called_value_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_left_value_107 = var_SizeW;
        tmp_right_value_105 = mod_consts[32];
        tmp_left_value_106 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_107, tmp_right_value_105);
        if (tmp_left_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 71;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_value_106 = mod_consts[25];
        tmp_left_value_105 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_106, tmp_right_value_106);
        Py_DECREF(tmp_left_value_106);
        if (tmp_left_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 71;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_drawx);
        tmp_left_value_108 = var_drawx;
        CHECK_OBJECT(var_j);
        tmp_right_value_108 = var_j;
        tmp_right_value_107 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_108, tmp_right_value_108);
        if (tmp_right_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_left_value_105);

            exception_lineno = 71;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_int_arg_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_105, tmp_right_value_107);
        Py_DECREF(tmp_left_value_105);
        Py_DECREF(tmp_right_value_107);
        if (tmp_int_arg_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 71;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_15 = PyNumber_Int(tmp_int_arg_25);
        Py_DECREF(tmp_int_arg_25);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 71;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_value_1_13 = PyTuple_New(2);
        {
            PyObject *tmp_int_arg_26;
            PyObject *tmp_left_value_109;
            PyObject *tmp_left_value_110;
            PyObject *tmp_left_value_111;
            PyObject *tmp_right_value_109;
            PyObject *tmp_right_value_110;
            PyObject *tmp_right_value_111;
            PyObject *tmp_left_value_112;
            PyObject *tmp_right_value_112;
            PyTuple_SET_ITEM(tmp_kw_call_value_1_13, 0, tmp_tuple_element_15);
            if (var_SizeH == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 71;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_13;
            }

            tmp_left_value_111 = var_SizeH;
            tmp_right_value_109 = mod_consts[32];
            tmp_left_value_110 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_111, tmp_right_value_109);
            if (tmp_left_value_110 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_13;
            }
            tmp_right_value_110 = mod_consts[25];
            tmp_left_value_109 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_110, tmp_right_value_110);
            Py_DECREF(tmp_left_value_110);
            if (tmp_left_value_109 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_13;
            }
            CHECK_OBJECT(var_drawy);
            tmp_left_value_112 = var_drawy;
            if (var_i == NULL) {
                Py_DECREF(tmp_left_value_109);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 71;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_13;
            }

            tmp_right_value_112 = var_i;
            tmp_right_value_111 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_112, tmp_right_value_112);
            if (tmp_right_value_111 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_value_109);

                exception_lineno = 71;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_13;
            }
            tmp_int_arg_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_109, tmp_right_value_111);
            Py_DECREF(tmp_left_value_109);
            Py_DECREF(tmp_right_value_111);
            if (tmp_int_arg_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_13;
            }
            tmp_tuple_element_15 = PyNumber_Int(tmp_int_arg_26);
            Py_DECREF(tmp_int_arg_26);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "oooNNoooooooooooooooooooo";
                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_kw_call_value_1_13, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_kw_call_value_1_13);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 71;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_13, tmp_kw_call_value_1_13};

            tmp_call_result_13 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_28, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_kw_call_value_1_13);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_13);
    }
    branch_end_8:;
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 30;
        type_description_1 = "oooNNoooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 29;
        type_description_1 = "oooNNoooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_27;
        PyObject *tmp_call_result_14;
        if (var_canvas == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 72;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_27 = var_canvas;
        frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame.f_lineno = 72;
        tmp_call_result_14 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_27,
            mod_consts[59],
            &PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooNNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_861575f2d36fd5080ae5f198fe9cb2ab);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_861575f2d36fd5080ae5f198fe9cb2ab);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_861575f2d36fd5080ae5f198fe9cb2ab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_861575f2d36fd5080ae5f198fe9cb2ab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_861575f2d36fd5080ae5f198fe9cb2ab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_861575f2d36fd5080ae5f198fe9cb2ab,
        type_description_1,
        par_array,
        var_width,
        var_height,
        NULL,
        NULL,
        var_SizeW,
        var_SizeH,
        var_canvas,
        var_blackqueen,
        var_blackking,
        var_blackknight,
        var_blackbishop,
        var_blackrook,
        var_blackpawn,
        var_whitequeen,
        var_whiteking,
        var_whiteknight,
        var_whitebishop,
        var_whiterook,
        var_whitepawn,
        var_x,
        var_i,
        var_j,
        var_drawx,
        var_drawy
    );


    // Release cached frame if used for exception.
    if (frame_861575f2d36fd5080ae5f198fe9cb2ab == cache_frame_861575f2d36fd5080ae5f198fe9cb2ab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_861575f2d36fd5080ae5f198fe9cb2ab);
        cache_frame_861575f2d36fd5080ae5f198fe9cb2ab = NULL;
    }

    assertFrameObject(frame_861575f2d36fd5080ae5f198fe9cb2ab);

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
    Py_XDECREF(var_width);
    var_width = NULL;
    Py_XDECREF(var_height);
    var_height = NULL;
    Py_XDECREF(var_SizeW);
    var_SizeW = NULL;
    Py_XDECREF(var_SizeH);
    var_SizeH = NULL;
    Py_XDECREF(var_canvas);
    var_canvas = NULL;
    Py_XDECREF(var_blackqueen);
    var_blackqueen = NULL;
    Py_XDECREF(var_blackking);
    var_blackking = NULL;
    Py_XDECREF(var_blackknight);
    var_blackknight = NULL;
    Py_XDECREF(var_blackbishop);
    var_blackbishop = NULL;
    Py_XDECREF(var_blackrook);
    var_blackrook = NULL;
    Py_XDECREF(var_blackpawn);
    var_blackpawn = NULL;
    Py_XDECREF(var_whitequeen);
    var_whitequeen = NULL;
    Py_XDECREF(var_whiteking);
    var_whiteking = NULL;
    Py_XDECREF(var_whiteknight);
    var_whiteknight = NULL;
    Py_XDECREF(var_whitebishop);
    var_whitebishop = NULL;
    Py_XDECREF(var_whiterook);
    var_whiterook = NULL;
    Py_XDECREF(var_whitepawn);
    var_whitepawn = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_drawx);
    var_drawx = NULL;
    Py_XDECREF(var_drawy);
    var_drawy = NULL;
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

    Py_XDECREF(var_width);
    var_width = NULL;
    Py_XDECREF(var_height);
    var_height = NULL;
    Py_XDECREF(var_SizeW);
    var_SizeW = NULL;
    Py_XDECREF(var_SizeH);
    var_SizeH = NULL;
    Py_XDECREF(var_canvas);
    var_canvas = NULL;
    Py_XDECREF(var_blackqueen);
    var_blackqueen = NULL;
    Py_XDECREF(var_blackking);
    var_blackking = NULL;
    Py_XDECREF(var_blackknight);
    var_blackknight = NULL;
    Py_XDECREF(var_blackbishop);
    var_blackbishop = NULL;
    Py_XDECREF(var_blackrook);
    var_blackrook = NULL;
    Py_XDECREF(var_blackpawn);
    var_blackpawn = NULL;
    Py_XDECREF(var_whitequeen);
    var_whitequeen = NULL;
    Py_XDECREF(var_whiteking);
    var_whiteking = NULL;
    Py_XDECREF(var_whiteknight);
    var_whiteknight = NULL;
    Py_XDECREF(var_whitebishop);
    var_whitebishop = NULL;
    Py_XDECREF(var_whiterook);
    var_whiterook = NULL;
    Py_XDECREF(var_whitepawn);
    var_whitepawn = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_drawx);
    var_drawx = NULL;
    Py_XDECREF(var_drawy);
    var_drawy = NULL;
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
    CHECK_OBJECT(par_array);
    Py_DECREF(par_array);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_array);
    Py_DECREF(par_array);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_chessvisualizer$$$function__1_visual() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chessvisualizer$$$function__1_visual,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_861575f2d36fd5080ae5f198fe9cb2ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_chessvisualizer,
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
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_chessvisualizer[] = {
    impl_chessvisualizer$$$function__1_visual,
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

    function_impl_code *current = functable_chessvisualizer;
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

    if (offset > sizeof(functable_chessvisualizer) || offset < 0) {
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
        functable_chessvisualizer[offset],
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
        module_chessvisualizer,
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

// Internal entry point for module code.
PyObject *modulecode_chessvisualizer(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("chessvisualizer");

    // Store the module for future use.
    module_chessvisualizer = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIternext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("chessvisualizer: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("chessvisualizer: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("chessvisualizer: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initchessvisualizer\n");

    moduledict_chessvisualizer = MODULE_DICT(module_chessvisualizer);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_chessvisualizer,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_chessvisualizer,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[75]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_chessvisualizer,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_chessvisualizer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_chessvisualizer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_chessvisualizer);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_chessvisualizer, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_chessvisualizer, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_chessvisualizer, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_chessvisualizer);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_chessvisualizer, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_12f44c372b22df16a6ebdca22419db0c;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_12f44c372b22df16a6ebdca22419db0c = MAKE_MODULE_FRAME(codeobj_12f44c372b22df16a6ebdca22419db0c, module_chessvisualizer);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_12f44c372b22df16a6ebdca22419db0c);
    assert(Py_REFCNT(frame_12f44c372b22df16a6ebdca22419db0c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[62];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[65], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[66], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[68];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_chessvisualizer;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[69];
        tmp_level_value_1 = mod_consts[0];
        frame_12f44c372b22df16a6ebdca22419db0c->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

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
                (PyObject *)moduledict_chessvisualizer,
                mod_consts[2],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[2]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_chessvisualizer,
                mod_consts[70],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[70]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_6);
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[71];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_chessvisualizer;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[0];
        frame_12f44c372b22df16a6ebdca22419db0c->m_frame.f_lineno = 3;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_7);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_12f44c372b22df16a6ebdca22419db0c);
#endif
    popFrameStack();

    assertFrameObject(frame_12f44c372b22df16a6ebdca22419db0c);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_12f44c372b22df16a6ebdca22419db0c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_12f44c372b22df16a6ebdca22419db0c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12f44c372b22df16a6ebdca22419db0c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12f44c372b22df16a6ebdca22419db0c, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_chessvisualizer$$$function__1_visual();

        UPDATE_STRING_DICT1(moduledict_chessvisualizer, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_8);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("chessvisualizer", false);

    return module_chessvisualizer;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chessvisualizer, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("chessvisualizer", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
