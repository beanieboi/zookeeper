/*

Autogenerated boilerplate wrappers around zoo_* function calls necessary for using
rb_thread_blocking_region to release the GIL when calling native code.

generated by ext/generate_gvl_code.rb

*/

#include "ruby.h"
#include "zkrb_wrapper.h"
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static VALUE zkrb_gvl_zoo_recv_timeout(void *data) {
  zkrb_zoo_recv_timeout_args_t *a = (zkrb_zoo_recv_timeout_args_t *)data;
  a->rc = zoo_recv_timeout(a->zh);
  return Qnil;
}

// wrapper that calls zoo_recv_timeout via zkrb_gvl_zoo_recv_timeout inside rb_thread_blocking_region
int zkrb_call_zoo_recv_timeout(zhandle_t *zh) {
  zkrb_zoo_recv_timeout_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_recv_timeout, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_state(void *data) {
  zkrb_zoo_state_args_t *a = (zkrb_zoo_state_args_t *)data;
  a->rc = zoo_state(a->zh);
  return Qnil;
}

// wrapper that calls zoo_state via zkrb_gvl_zoo_state inside rb_thread_blocking_region
int zkrb_call_zoo_state(zhandle_t *zh) {
  zkrb_zoo_state_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_state, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_acreate(void *data) {
  zkrb_zoo_acreate_args_t *a = (zkrb_zoo_acreate_args_t *)data;
  a->rc = zoo_acreate(a->zh, a->path, a->value, a->valuelen, a->acl, a->flags, a->completion, a->data);
  return Qnil;
}

// wrapper that calls zoo_acreate via zkrb_gvl_zoo_acreate inside rb_thread_blocking_region
int zkrb_call_zoo_acreate(zhandle_t *zh, const char *path, const char *value, int valuelen, const struct ACL_vector *acl, int flags, string_completion_t completion, const void *data) {
  zkrb_zoo_acreate_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .value = value,
    .valuelen = valuelen,
    .acl = acl,
    .flags = flags,
    .completion = completion,
    .data = data
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_acreate, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_adelete(void *data) {
  zkrb_zoo_adelete_args_t *a = (zkrb_zoo_adelete_args_t *)data;
  a->rc = zoo_adelete(a->zh, a->path, a->version, a->completion, a->data);
  return Qnil;
}

// wrapper that calls zoo_adelete via zkrb_gvl_zoo_adelete inside rb_thread_blocking_region
int zkrb_call_zoo_adelete(zhandle_t *zh, const char *path, int version, void_completion_t completion, const void *data) {
  zkrb_zoo_adelete_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .version = version,
    .completion = completion,
    .data = data
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_adelete, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_aexists(void *data) {
  zkrb_zoo_aexists_args_t *a = (zkrb_zoo_aexists_args_t *)data;
  a->rc = zoo_aexists(a->zh, a->path, a->watch, a->completion, a->data);
  return Qnil;
}

// wrapper that calls zoo_aexists via zkrb_gvl_zoo_aexists inside rb_thread_blocking_region
int zkrb_call_zoo_aexists(zhandle_t *zh, const char *path, int watch, stat_completion_t completion, const void *data) {
  zkrb_zoo_aexists_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .watch = watch,
    .completion = completion,
    .data = data
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_aexists, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_awexists(void *data) {
  zkrb_zoo_awexists_args_t *a = (zkrb_zoo_awexists_args_t *)data;
  a->rc = zoo_awexists(a->zh, a->path, a->watcher, a->watcherCtx, a->completion, a->data);
  return Qnil;
}

// wrapper that calls zoo_awexists via zkrb_gvl_zoo_awexists inside rb_thread_blocking_region
int zkrb_call_zoo_awexists(zhandle_t *zh, const char *path, watcher_fn watcher, void* watcherCtx, stat_completion_t completion, const void *data) {
  zkrb_zoo_awexists_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .watcher = watcher,
    .watcherCtx = watcherCtx,
    .completion = completion,
    .data = data
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_awexists, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_aget(void *data) {
  zkrb_zoo_aget_args_t *a = (zkrb_zoo_aget_args_t *)data;
  a->rc = zoo_aget(a->zh, a->path, a->watch, a->completion, a->data);
  return Qnil;
}

// wrapper that calls zoo_aget via zkrb_gvl_zoo_aget inside rb_thread_blocking_region
int zkrb_call_zoo_aget(zhandle_t *zh, const char *path, int watch, data_completion_t completion, const void *data) {
  zkrb_zoo_aget_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .watch = watch,
    .completion = completion,
    .data = data
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_aget, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_awget(void *data) {
  zkrb_zoo_awget_args_t *a = (zkrb_zoo_awget_args_t *)data;
  a->rc = zoo_awget(a->zh, a->path, a->watcher, a->watcherCtx, a->completion, a->data);
  return Qnil;
}

// wrapper that calls zoo_awget via zkrb_gvl_zoo_awget inside rb_thread_blocking_region
int zkrb_call_zoo_awget(zhandle_t *zh, const char *path, watcher_fn watcher, void* watcherCtx, data_completion_t completion, const void *data) {
  zkrb_zoo_awget_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .watcher = watcher,
    .watcherCtx = watcherCtx,
    .completion = completion,
    .data = data
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_awget, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_aset(void *data) {
  zkrb_zoo_aset_args_t *a = (zkrb_zoo_aset_args_t *)data;
  a->rc = zoo_aset(a->zh, a->path, a->buffer, a->buflen, a->version, a->completion, a->data);
  return Qnil;
}

// wrapper that calls zoo_aset via zkrb_gvl_zoo_aset inside rb_thread_blocking_region
int zkrb_call_zoo_aset(zhandle_t *zh, const char *path, const char *buffer, int buflen, int version, stat_completion_t completion, const void *data) {
  zkrb_zoo_aset_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .buffer = buffer,
    .buflen = buflen,
    .version = version,
    .completion = completion,
    .data = data
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_aset, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_aget_children(void *data) {
  zkrb_zoo_aget_children_args_t *a = (zkrb_zoo_aget_children_args_t *)data;
  a->rc = zoo_aget_children(a->zh, a->path, a->watch, a->completion, a->data);
  return Qnil;
}

// wrapper that calls zoo_aget_children via zkrb_gvl_zoo_aget_children inside rb_thread_blocking_region
int zkrb_call_zoo_aget_children(zhandle_t *zh, const char *path, int watch, strings_completion_t completion, const void *data) {
  zkrb_zoo_aget_children_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .watch = watch,
    .completion = completion,
    .data = data
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_aget_children, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_awget_children(void *data) {
  zkrb_zoo_awget_children_args_t *a = (zkrb_zoo_awget_children_args_t *)data;
  a->rc = zoo_awget_children(a->zh, a->path, a->watcher, a->watcherCtx, a->completion, a->data);
  return Qnil;
}

// wrapper that calls zoo_awget_children via zkrb_gvl_zoo_awget_children inside rb_thread_blocking_region
int zkrb_call_zoo_awget_children(zhandle_t *zh, const char *path, watcher_fn watcher, void* watcherCtx, strings_completion_t completion, const void *data) {
  zkrb_zoo_awget_children_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .watcher = watcher,
    .watcherCtx = watcherCtx,
    .completion = completion,
    .data = data
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_awget_children, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_aget_children2(void *data) {
  zkrb_zoo_aget_children2_args_t *a = (zkrb_zoo_aget_children2_args_t *)data;
  a->rc = zoo_aget_children2(a->zh, a->path, a->watch, a->completion, a->data);
  return Qnil;
}

// wrapper that calls zoo_aget_children2 via zkrb_gvl_zoo_aget_children2 inside rb_thread_blocking_region
int zkrb_call_zoo_aget_children2(zhandle_t *zh, const char *path, int watch, strings_stat_completion_t completion, const void *data) {
  zkrb_zoo_aget_children2_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .watch = watch,
    .completion = completion,
    .data = data
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_aget_children2, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_awget_children2(void *data) {
  zkrb_zoo_awget_children2_args_t *a = (zkrb_zoo_awget_children2_args_t *)data;
  a->rc = zoo_awget_children2(a->zh, a->path, a->watcher, a->watcherCtx, a->completion, a->data);
  return Qnil;
}

// wrapper that calls zoo_awget_children2 via zkrb_gvl_zoo_awget_children2 inside rb_thread_blocking_region
int zkrb_call_zoo_awget_children2(zhandle_t *zh, const char *path, watcher_fn watcher, void* watcherCtx, strings_stat_completion_t completion, const void *data) {
  zkrb_zoo_awget_children2_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .watcher = watcher,
    .watcherCtx = watcherCtx,
    .completion = completion,
    .data = data
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_awget_children2, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_async(void *data) {
  zkrb_zoo_async_args_t *a = (zkrb_zoo_async_args_t *)data;
  a->rc = zoo_async(a->zh, a->path, a->completion, a->data);
  return Qnil;
}

// wrapper that calls zoo_async via zkrb_gvl_zoo_async inside rb_thread_blocking_region
int zkrb_call_zoo_async(zhandle_t *zh, const char *path, string_completion_t completion, const void *data) {
  zkrb_zoo_async_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .completion = completion,
    .data = data
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_async, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_aget_acl(void *data) {
  zkrb_zoo_aget_acl_args_t *a = (zkrb_zoo_aget_acl_args_t *)data;
  a->rc = zoo_aget_acl(a->zh, a->path, a->completion, a->data);
  return Qnil;
}

// wrapper that calls zoo_aget_acl via zkrb_gvl_zoo_aget_acl inside rb_thread_blocking_region
int zkrb_call_zoo_aget_acl(zhandle_t *zh, const char *path, acl_completion_t completion, const void *data) {
  zkrb_zoo_aget_acl_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .completion = completion,
    .data = data
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_aget_acl, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_aset_acl(void *data) {
  zkrb_zoo_aset_acl_args_t *a = (zkrb_zoo_aset_acl_args_t *)data;
  a->rc = zoo_aset_acl(a->zh, a->path, a->version, a->acl, a->completion, a->data);
  return Qnil;
}

// wrapper that calls zoo_aset_acl via zkrb_gvl_zoo_aset_acl inside rb_thread_blocking_region
int zkrb_call_zoo_aset_acl(zhandle_t *zh, const char *path, int version, struct ACL_vector *acl, void_completion_t completion, const void *data) {
  zkrb_zoo_aset_acl_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .version = version,
    .acl = acl,
    .completion = completion,
    .data = data
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_aset_acl, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_amulti(void *data) {
  zkrb_zoo_amulti_args_t *a = (zkrb_zoo_amulti_args_t *)data;
  a->rc = zoo_amulti(a->zh, a->count, a->ops, a->results, a->void_completion_t, a->data);
  return Qnil;
}

// wrapper that calls zoo_amulti via zkrb_gvl_zoo_amulti inside rb_thread_blocking_region
int zkrb_call_zoo_amulti(zhandle_t *zh, int count, const zoo_op_t *ops, zoo_op_result_t *results, void_completion_t, const void *data) {
  zkrb_zoo_amulti_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .count = count,
    .ops = ops,
    .results = results,
    .void_completion_t = void_completion_t,
    .data = data
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_amulti, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_add_auth(void *data) {
  zkrb_zoo_add_auth_args_t *a = (zkrb_zoo_add_auth_args_t *)data;
  a->rc = zoo_add_auth(a->zh, a->scheme, a->cert, a->certLen, a->completion, a->data);
  return Qnil;
}

// wrapper that calls zoo_add_auth via zkrb_gvl_zoo_add_auth inside rb_thread_blocking_region
int zkrb_call_zoo_add_auth(zhandle_t *zh, const char* scheme, const char* cert, int certLen, void_completion_t completion, const void *data) {
  zkrb_zoo_add_auth_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .scheme = scheme,
    .cert = cert,
    .certLen = certLen,
    .completion = completion,
    .data = data
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_add_auth, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_create(void *data) {
  zkrb_zoo_create_args_t *a = (zkrb_zoo_create_args_t *)data;
  a->rc = zoo_create(a->zh, a->path, a->value, a->valuelen, a->acl, a->flags, a->path_buffer, a->path_buffer_len);
  return Qnil;
}

// wrapper that calls zoo_create via zkrb_gvl_zoo_create inside rb_thread_blocking_region
int zkrb_call_zoo_create(zhandle_t *zh, const char *path, const char *value, int valuelen, const struct ACL_vector *acl, int flags, char *path_buffer, int path_buffer_len) {
  zkrb_zoo_create_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .value = value,
    .valuelen = valuelen,
    .acl = acl,
    .flags = flags,
    .path_buffer = path_buffer,
    .path_buffer_len = path_buffer_len
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_create, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_delete(void *data) {
  zkrb_zoo_delete_args_t *a = (zkrb_zoo_delete_args_t *)data;
  a->rc = zoo_delete(a->zh, a->path, a->version);
  return Qnil;
}

// wrapper that calls zoo_delete via zkrb_gvl_zoo_delete inside rb_thread_blocking_region
int zkrb_call_zoo_delete(zhandle_t *zh, const char *path, int version) {
  zkrb_zoo_delete_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .version = version
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_delete, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_exists(void *data) {
  zkrb_zoo_exists_args_t *a = (zkrb_zoo_exists_args_t *)data;
  a->rc = zoo_exists(a->zh, a->path, a->watch, a->stat);
  return Qnil;
}

// wrapper that calls zoo_exists via zkrb_gvl_zoo_exists inside rb_thread_blocking_region
int zkrb_call_zoo_exists(zhandle_t *zh, const char *path, int watch, struct Stat *stat) {
  zkrb_zoo_exists_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .watch = watch,
    .stat = stat
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_exists, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_wexists(void *data) {
  zkrb_zoo_wexists_args_t *a = (zkrb_zoo_wexists_args_t *)data;
  a->rc = zoo_wexists(a->zh, a->path, a->watcher, a->watcherCtx, a->stat);
  return Qnil;
}

// wrapper that calls zoo_wexists via zkrb_gvl_zoo_wexists inside rb_thread_blocking_region
int zkrb_call_zoo_wexists(zhandle_t *zh, const char *path, watcher_fn watcher, void* watcherCtx, struct Stat *stat) {
  zkrb_zoo_wexists_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .watcher = watcher,
    .watcherCtx = watcherCtx,
    .stat = stat
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_wexists, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_get(void *data) {
  zkrb_zoo_get_args_t *a = (zkrb_zoo_get_args_t *)data;
  a->rc = zoo_get(a->zh, a->path, a->watch, a->buffer, a->buffer_len, a->stat);
  return Qnil;
}

// wrapper that calls zoo_get via zkrb_gvl_zoo_get inside rb_thread_blocking_region
int zkrb_call_zoo_get(zhandle_t *zh, const char *path, int watch, char *buffer, int* buffer_len, struct Stat *stat) {
  zkrb_zoo_get_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .watch = watch,
    .buffer = buffer,
    .buffer_len = buffer_len,
    .stat = stat
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_get, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_wget(void *data) {
  zkrb_zoo_wget_args_t *a = (zkrb_zoo_wget_args_t *)data;
  a->rc = zoo_wget(a->zh, a->path, a->watcher, a->watcherCtx, a->buffer, a->buffer_len, a->stat);
  return Qnil;
}

// wrapper that calls zoo_wget via zkrb_gvl_zoo_wget inside rb_thread_blocking_region
int zkrb_call_zoo_wget(zhandle_t *zh, const char *path, watcher_fn watcher, void* watcherCtx, char *buffer, int* buffer_len, struct Stat *stat) {
  zkrb_zoo_wget_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .watcher = watcher,
    .watcherCtx = watcherCtx,
    .buffer = buffer,
    .buffer_len = buffer_len,
    .stat = stat
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_wget, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_set(void *data) {
  zkrb_zoo_set_args_t *a = (zkrb_zoo_set_args_t *)data;
  a->rc = zoo_set(a->zh, a->path, a->buffer, a->buflen, a->version);
  return Qnil;
}

// wrapper that calls zoo_set via zkrb_gvl_zoo_set inside rb_thread_blocking_region
int zkrb_call_zoo_set(zhandle_t *zh, const char *path, const char *buffer, int buflen, int version) {
  zkrb_zoo_set_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .buffer = buffer,
    .buflen = buflen,
    .version = version
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_set, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_set2(void *data) {
  zkrb_zoo_set2_args_t *a = (zkrb_zoo_set2_args_t *)data;
  a->rc = zoo_set2(a->zh, a->path, a->buffer, a->buflen, a->version, a->stat);
  return Qnil;
}

// wrapper that calls zoo_set2 via zkrb_gvl_zoo_set2 inside rb_thread_blocking_region
int zkrb_call_zoo_set2(zhandle_t *zh, const char *path, const char *buffer, int buflen, int version, struct Stat *stat) {
  zkrb_zoo_set2_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .buffer = buffer,
    .buflen = buflen,
    .version = version,
    .stat = stat
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_set2, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_get_children(void *data) {
  zkrb_zoo_get_children_args_t *a = (zkrb_zoo_get_children_args_t *)data;
  a->rc = zoo_get_children(a->zh, a->path, a->watch, a->strings);
  return Qnil;
}

// wrapper that calls zoo_get_children via zkrb_gvl_zoo_get_children inside rb_thread_blocking_region
int zkrb_call_zoo_get_children(zhandle_t *zh, const char *path, int watch, struct String_vector *strings) {
  zkrb_zoo_get_children_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .watch = watch,
    .strings = strings
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_get_children, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_wget_children(void *data) {
  zkrb_zoo_wget_children_args_t *a = (zkrb_zoo_wget_children_args_t *)data;
  a->rc = zoo_wget_children(a->zh, a->path, a->watcher, a->watcherCtx, a->strings);
  return Qnil;
}

// wrapper that calls zoo_wget_children via zkrb_gvl_zoo_wget_children inside rb_thread_blocking_region
int zkrb_call_zoo_wget_children(zhandle_t *zh, const char *path, watcher_fn watcher, void* watcherCtx, struct String_vector *strings) {
  zkrb_zoo_wget_children_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .watcher = watcher,
    .watcherCtx = watcherCtx,
    .strings = strings
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_wget_children, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_get_children2(void *data) {
  zkrb_zoo_get_children2_args_t *a = (zkrb_zoo_get_children2_args_t *)data;
  a->rc = zoo_get_children2(a->zh, a->path, a->watch, a->strings, a->stat);
  return Qnil;
}

// wrapper that calls zoo_get_children2 via zkrb_gvl_zoo_get_children2 inside rb_thread_blocking_region
int zkrb_call_zoo_get_children2(zhandle_t *zh, const char *path, int watch, struct String_vector *strings, struct Stat *stat) {
  zkrb_zoo_get_children2_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .watch = watch,
    .strings = strings,
    .stat = stat
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_get_children2, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_wget_children2(void *data) {
  zkrb_zoo_wget_children2_args_t *a = (zkrb_zoo_wget_children2_args_t *)data;
  a->rc = zoo_wget_children2(a->zh, a->path, a->watcher, a->watcherCtx, a->strings, a->stat);
  return Qnil;
}

// wrapper that calls zoo_wget_children2 via zkrb_gvl_zoo_wget_children2 inside rb_thread_blocking_region
int zkrb_call_zoo_wget_children2(zhandle_t *zh, const char *path, watcher_fn watcher, void* watcherCtx, struct String_vector *strings, struct Stat *stat) {
  zkrb_zoo_wget_children2_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .watcher = watcher,
    .watcherCtx = watcherCtx,
    .strings = strings,
    .stat = stat
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_wget_children2, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_get_acl(void *data) {
  zkrb_zoo_get_acl_args_t *a = (zkrb_zoo_get_acl_args_t *)data;
  a->rc = zoo_get_acl(a->zh, a->path, a->acl, a->stat);
  return Qnil;
}

// wrapper that calls zoo_get_acl via zkrb_gvl_zoo_get_acl inside rb_thread_blocking_region
int zkrb_call_zoo_get_acl(zhandle_t *zh, const char *path, struct ACL_vector *acl, struct Stat *stat) {
  zkrb_zoo_get_acl_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .acl = acl,
    .stat = stat
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_get_acl, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_set_acl(void *data) {
  zkrb_zoo_set_acl_args_t *a = (zkrb_zoo_set_acl_args_t *)data;
  a->rc = zoo_set_acl(a->zh, a->path, a->version, a->acl);
  return Qnil;
}

// wrapper that calls zoo_set_acl via zkrb_gvl_zoo_set_acl inside rb_thread_blocking_region
int zkrb_call_zoo_set_acl(zhandle_t *zh, const char *path, int version, const struct ACL_vector *acl) {
  zkrb_zoo_set_acl_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .path = path,
    .version = version,
    .acl = acl
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_set_acl, (void *)&args);

  return args.rc;
}


static VALUE zkrb_gvl_zoo_multi(void *data) {
  zkrb_zoo_multi_args_t *a = (zkrb_zoo_multi_args_t *)data;
  a->rc = zoo_multi(a->zh, a->count, a->ops, a->results);
  return Qnil;
}

// wrapper that calls zoo_multi via zkrb_gvl_zoo_multi inside rb_thread_blocking_region
int zkrb_call_zoo_multi(zhandle_t *zh, int count, const zoo_op_t *ops, zoo_op_result_t *results) {
  zkrb_zoo_multi_args_t args = {
    .rc = ZKRB_FAIL,
    .zh = zh,
    .count = count,
    .ops = ops,
    .results = results
  };

  zkrb_thread_blocking_region(zkrb_gvl_zoo_multi, (void *)&args);

  return args.rc;
}
