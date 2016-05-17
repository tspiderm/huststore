////////////////////////////////////////////////////////////////////////////////
// NOTE : Generated by libevhtp.py. It is NOT supposed to modify this file.
////////////////////////////////////////////////////////////////////////////////
#ifndef __hustdb_handler_def_20160511102115_h__
#define __hustdb_handler_def_20160511102115_h__

#include "hustdb_network_utils.h"

struct hustdb_exist_ctx_t
{
    evhtp::c_str_t key;

    bool has_key;

    hustdb_exist_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_get_ctx_t
{
    evhtp::c_str_t key;

    bool has_key;

    hustdb_get_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_put_ctx_t
{
    evhtp::c_str_t key;
    evhtp::c_str_t val;
    uint32_t ttl;
    uint32_t ver;
    bool is_dup;

    bool has_key;
    bool has_val;
    bool has_ttl;
    bool has_ver;
    bool has_is_dup;

    hustdb_put_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_del_ctx_t
{
    evhtp::c_str_t key;
    uint32_t ver;
    bool is_dup;

    bool has_key;
    bool has_ver;
    bool has_is_dup;

    hustdb_del_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_keys_ctx_t
{
    int32_t offset;
    int32_t size;
    int32_t file;
    int32_t start;
    int32_t end;
    bool noval;
    bool async;

    bool has_offset;
    bool has_size;
    bool has_file;
    bool has_start;
    bool has_end;
    bool has_noval;
    bool has_async;

    hustdb_keys_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_stat_ctx_t
{
    evhtp::c_str_t tb;

    bool has_tb;

    hustdb_stat_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_hexist_ctx_t
{
    evhtp::c_str_t tb;
    evhtp::c_str_t key;

    bool has_tb;
    bool has_key;

    hustdb_hexist_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_hget_ctx_t
{
    evhtp::c_str_t tb;
    evhtp::c_str_t key;

    bool has_tb;
    bool has_key;

    hustdb_hget_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_hset_ctx_t
{
    evhtp::c_str_t tb;
    evhtp::c_str_t key;
    evhtp::c_str_t val;
    uint32_t ttl;
    uint32_t ver;
    bool is_dup;

    bool has_tb;
    bool has_key;
    bool has_val;
    bool has_ttl;
    bool has_ver;
    bool has_is_dup;

    hustdb_hset_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_hdel_ctx_t
{
    evhtp::c_str_t tb;
    evhtp::c_str_t key;
    uint32_t ver;
    bool is_dup;

    bool has_tb;
    bool has_key;
    bool has_ver;
    bool has_is_dup;

    hustdb_hdel_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_hkeys_ctx_t
{
    evhtp::c_str_t tb;
    int32_t offset;
    int32_t size;
    int32_t start;
    int32_t end;
    bool noval;
    bool async;

    bool has_tb;
    bool has_offset;
    bool has_size;
    bool has_start;
    bool has_end;
    bool has_noval;
    bool has_async;

    hustdb_hkeys_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_sismember_ctx_t
{
    evhtp::c_str_t tb;
    evhtp::c_str_t key;

    bool has_tb;
    bool has_key;

    hustdb_sismember_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_sadd_ctx_t
{
    evhtp::c_str_t tb;
    evhtp::c_str_t key;
    uint32_t ver;
    bool is_dup;

    bool has_tb;
    bool has_key;
    bool has_ver;
    bool has_is_dup;

    hustdb_sadd_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_srem_ctx_t
{
    evhtp::c_str_t tb;
    evhtp::c_str_t key;
    uint32_t ver;
    bool is_dup;

    bool has_tb;
    bool has_key;
    bool has_ver;
    bool has_is_dup;

    hustdb_srem_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_smembers_ctx_t
{
    evhtp::c_str_t tb;
    int32_t offset;
    int32_t size;
    int32_t start;
    int32_t end;
    bool noval;
    bool async;

    bool has_tb;
    bool has_offset;
    bool has_size;
    bool has_start;
    bool has_end;
    bool has_noval;
    bool has_async;

    hustdb_smembers_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_export_ctx_t
{
    evhtp::c_str_t tb;
    int32_t file;
    int32_t start;
    int32_t end;
    int32_t offset;
    int32_t size;
    bool noval;
    bool cover;

    bool has_tb;
    bool has_file;
    bool has_start;
    bool has_end;
    bool has_offset;
    bool has_size;
    bool has_noval;
    bool has_cover;

    hustdb_export_ctx_t(evhtp_query_t * htp_query);
};

struct hustmq_put_ctx_t
{
    evhtp::c_str_t queue;
    evhtp::c_str_t item;
    uint32_t priori;

    bool has_queue;
    bool has_item;
    bool has_priori;

    hustmq_put_ctx_t(evhtp_query_t * htp_query);
};

struct hustmq_get_ctx_t
{
    evhtp::c_str_t queue;
    evhtp::c_str_t worker;

    bool has_queue;
    bool has_worker;

    hustmq_get_ctx_t(evhtp_query_t * htp_query);
};

struct hustmq_worker_ctx_t
{
    evhtp::c_str_t queue;

    bool has_queue;

    hustmq_worker_ctx_t(evhtp_query_t * htp_query);
};

struct hustmq_stat_ctx_t
{
    evhtp::c_str_t queue;

    bool has_queue;

    hustmq_stat_ctx_t(evhtp_query_t * htp_query);
};

struct hustmq_max_ctx_t
{
    evhtp::c_str_t queue;
    uint32_t num;

    bool has_queue;
    bool has_num;

    hustmq_max_ctx_t(evhtp_query_t * htp_query);
};

struct hustmq_lock_ctx_t
{
    evhtp::c_str_t queue;
    bool on;

    bool has_queue;
    bool has_on;

    hustmq_lock_ctx_t(evhtp_query_t * htp_query);
};

struct hustmq_purge_ctx_t
{
    evhtp::c_str_t queue;
    uint32_t priori;

    bool has_queue;
    bool has_priori;

    hustmq_purge_ctx_t(evhtp_query_t * htp_query);
};

struct hustmq_pub_ctx_t
{
    evhtp::c_str_t queue;
    evhtp::c_str_t item;
    uint32_t idx;
    uint32_t ttl;

    bool has_queue;
    bool has_item;
    bool has_idx;
    bool has_ttl;

    hustmq_pub_ctx_t(evhtp_query_t * htp_query);
};

struct hustmq_sub_ctx_t
{
    evhtp::c_str_t queue;
    uint32_t idx;

    bool has_queue;
    bool has_idx;

    hustmq_sub_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_task_status_ctx_t
{
    evhtp::c_str_t token;

    bool has_token;

    hustdb_task_status_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_zismember_ctx_t
{
    evhtp::c_str_t tb;
    evhtp::c_str_t key;

    bool has_tb;
    bool has_key;

    hustdb_zismember_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_zscore_ctx_t
{
    evhtp::c_str_t tb;
    evhtp::c_str_t key;

    bool has_tb;
    bool has_key;

    hustdb_zscore_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_zadd_ctx_t
{
    evhtp::c_str_t tb;
    uint64_t score;
    int32_t opt;
    evhtp::c_str_t key;
    uint32_t ver;
    bool is_dup;

    bool has_tb;
    bool has_score;
    bool has_opt;
    bool has_key;
    bool has_ver;
    bool has_is_dup;

    hustdb_zadd_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_zrem_ctx_t
{
    evhtp::c_str_t tb;
    evhtp::c_str_t key;
    uint32_t ver;
    bool is_dup;

    bool has_tb;
    bool has_key;
    bool has_ver;
    bool has_is_dup;

    hustdb_zrem_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_zrangebyrank_ctx_t
{
    evhtp::c_str_t tb;
    int32_t offset;
    int32_t size;
    int32_t start;
    int32_t end;
    bool noval;
    bool async;

    bool has_tb;
    bool has_offset;
    bool has_size;
    bool has_start;
    bool has_end;
    bool has_noval;
    bool has_async;

    hustdb_zrangebyrank_ctx_t(evhtp_query_t * htp_query);
};

struct hustdb_zrangebyscore_ctx_t
{
    evhtp::c_str_t tb;
    uint64_t min;
    uint64_t max;
    int32_t offset;
    int32_t size;
    int32_t start;
    int32_t end;
    bool noval;

    bool has_tb;
    bool has_min;
    bool has_max;
    bool has_offset;
    bool has_size;
    bool has_start;
    bool has_end;
    bool has_noval;

    hustdb_zrangebyscore_ctx_t(evhtp_query_t * htp_query);
};

#endif // __hustdb_handler_def_20160511102115_h__