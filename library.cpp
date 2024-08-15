// Copyright (c) 2024 Devexperts LLC.
// SPDX-License-Identifier: MPL-2.0

#include <dxfg_api.h>
#include <limits>

#if defined(__cplusplus)
extern "C" {
#endif

// graal_isolate

struct __graal_isolate_t {};
struct __graal_isolatethread_t {};

#ifdef _WIN32
#    ifndef NOMINMAX
#        define NOMINMAX
#    endif
#endif

#define INVALID_INT_RESULT_MINUS_ONE (-1)
#define INVALID_INT_RESULT_MINUS_MIN (-std::numeric_limits<std::int32_t>::min())
#define INVALID_PTR_RESULT_NULLPTR (nullptr)
#define INVALID_DOUBLE_RESULT_NEG_INF (-std::numeric_limits<double>::infinity())

int graal_create_isolate(graal_create_isolate_params_t *, graal_isolate_t **, graal_isolatethread_t **) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int graal_attach_thread(graal_isolate_t *, graal_isolatethread_t **) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

graal_isolatethread_t *graal_get_current_thread(graal_isolate_t *) {
    return INVALID_PTR_RESULT_NULLPTR;
}

graal_isolate_t *graal_get_isolate(graal_isolatethread_t *) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int graal_detach_thread(graal_isolatethread_t *) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int graal_tear_down_isolate(graal_isolatethread_t *) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int graal_detach_all_threads_and_tear_down_isolate(graal_isolatethread_t *) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

// dxfg_catch_exception

dxfg_exception_t *dxfg_get_and_clear_thread_exception_t(graal_isolatethread_t *) {
    return INVALID_PTR_RESULT_NULLPTR;
}

void dxfg_Exception_release(graal_isolatethread_t *, dxfg_exception_t *) {
}

// dxfg_javac

int32_t dxfg_Object_finalize(graal_isolatethread_t *, dxfg_java_object_handler *, dxfg_finalize_function, void *) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_JavaObjectHandler_release(graal_isolatethread_t *, dxfg_java_object_handler *) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_Object_toString(graal_isolatethread_t *, dxfg_java_object_handler *) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_Object_equals(graal_isolatethread_t *, dxfg_java_object_handler *, dxfg_java_object_handler *) {
    return INVALID_INT_RESULT_MINUS_MIN;
}

int32_t dxfg_Object_hashCode(graal_isolatethread_t *, dxfg_java_object_handler *) {
    return INVALID_INT_RESULT_MINUS_MIN;
}

int32_t dxfg_Comparable_compareTo(graal_isolatethread_t *thread, dxfg_java_object_handler *object,
                                  dxfg_java_object_handler *other) {
    return INVALID_INT_RESULT_MINUS_MIN;
}

int32_t dxfg_CList_JavaObjectHandler_release(graal_isolatethread_t *, dxfg_java_object_handler_list *) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_String_release(graal_isolatethread_t *, const char *) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_CList_String_release(graal_isolatethread_t *, dxfg_string_list *) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_executor_t *dxfg_Executors_newFixedThreadPool(graal_isolatethread_t *, int, const char *) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_executor_t *dxfg_Executors_newScheduledThreadPool(graal_isolatethread_t *, int, const char *) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_executor_t *dxfg_ExecutorBaseOnConcurrentLinkedQueue_new(graal_isolatethread_t *) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_ExecutorBaseOnConcurrentLinkedQueue_processAllPendingTasks(graal_isolatethread_t *, dxfg_executor_t *) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_input_stream_t *dxfg_ByteArrayInputStream_new(graal_isolatethread_t *, const char *, int32_t) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_gc(graal_isolatethread_t *) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_java_object_handler *dxfg_throw_exception(graal_isolatethread_t *) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_time_zone_t *dxfg_TimeZone_getTimeZone(graal_isolatethread_t *, const char *) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_time_zone_t *dxfg_TimeZone_getDefault(graal_isolatethread_t *) {
    return INVALID_PTR_RESULT_NULLPTR;
}

const char *dxfg_TimeZone_getID(graal_isolatethread_t *, dxfg_time_zone_t *) {
    return INVALID_PTR_RESULT_NULLPTR;
}

const char *dxfg_TimeZone_getDisplayName(graal_isolatethread_t *, dxfg_time_zone_t *) {
    return INVALID_PTR_RESULT_NULLPTR;
}

const char *dxfg_TimeZone_getDisplayName2(graal_isolatethread_t *, dxfg_time_zone_t *, int32_t, int32_t) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_TimeZone_getDSTSavings(graal_isolatethread_t *, dxfg_time_zone_t *) {
    return INVALID_INT_RESULT_MINUS_MIN;
}

int32_t dxfg_TimeZone_useDaylightTime(graal_isolatethread_t *, dxfg_time_zone_t *) {
    return INVALID_INT_RESULT_MINUS_MIN;
}

int32_t dxfg_TimeZone_observesDaylightTime(graal_isolatethread_t *, dxfg_time_zone_t *) {
    return INVALID_INT_RESULT_MINUS_MIN;
}

int32_t dxfg_TimeZone_getOffset(graal_isolatethread_t *, dxfg_time_zone_t *, int64_t) {
    return INVALID_INT_RESULT_MINUS_MIN;
}

int32_t dxfg_TimeZone_getOffset2(graal_isolatethread_t *, dxfg_time_zone_t *timeZone, int32_t era, int32_t year,
                                 int32_t month, int32_t day, int32_t dayOfWeek, int32_t milliseconds) {
    return INVALID_INT_RESULT_MINUS_MIN;
}

int32_t dxfg_TimeZone_getRawOffset(graal_isolatethread_t *thread, dxfg_time_zone_t *timeZone) {
    return INVALID_INT_RESULT_MINUS_MIN;
}

int32_t dxfg_TimeZone_hasSameRules(graal_isolatethread_t *thread, dxfg_time_zone_t *timeZone, dxfg_time_zone_t *other) {
    return INVALID_INT_RESULT_MINUS_MIN;
}

int32_t dxfg_TimeZone_inDaylightTime(graal_isolatethread_t *thread, dxfg_time_zone_t *timeZone, int64_t date) {
    return INVALID_INT_RESULT_MINUS_MIN;
}

int32_t dxfg_TimeZone_setID(graal_isolatethread_t *thread, dxfg_time_zone_t *timeZone, const char *ID) {
    return INVALID_INT_RESULT_MINUS_MIN;
}

int32_t dxfg_TimeZone_setRawOffset(graal_isolatethread_t *thread, dxfg_time_zone_t *timeZone, int32_t offsetMillis) {
    return INVALID_INT_RESULT_MINUS_MIN;
}

dxfg_time_period_t *dxfg_TimePeriod_ZERO(graal_isolatethread_t *thread) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_time_period_t *dxfg_TimePeriod_UNLIMITED(graal_isolatethread_t *thread) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_time_period_t *dxfg_TimePeriod_valueOf(graal_isolatethread_t *thread, int64_t value) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_time_period_t *dxfg_TimePeriod_valueOf2(graal_isolatethread_t *thread, const char *value) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int64_t dxfg_TimePeriod_getTime(graal_isolatethread_t *thread, dxfg_time_period_t *timePeriod) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_TimePeriod_getSeconds(graal_isolatethread_t *thread, dxfg_time_period_t *timePeriod) {
    return INVALID_INT_RESULT_MINUS_MIN;
}

int64_t dxfg_TimePeriod_getNanos(graal_isolatethread_t *thread, dxfg_time_period_t *timePeriod) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_time_format_t *dxfg_TimeFormat_DEFAULT(graal_isolatethread_t *thread) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_time_format_t *dxfg_TimeFormat_GMT(graal_isolatethread_t *thread) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_time_format_t *dxfg_TimeFormat_getInstance(graal_isolatethread_t *thread, dxfg_time_zone_t *timeZone) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_time_format_t *dxfg_TimeFormat_withTimeZone(graal_isolatethread_t *thread, dxfg_time_format_t *timeFormat) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_time_format_t *dxfg_TimeFormat_withMillis(graal_isolatethread_t *thread, dxfg_time_format_t *timeFormat) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_time_format_t *dxfg_TimeFormat_asFullIso(graal_isolatethread_t *thread, dxfg_time_format_t *timeFormat) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int64_t dxfg_TimeFormat_parse(graal_isolatethread_t *thread, dxfg_time_format_t *timeFormat, const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_TimeFormat_format(graal_isolatethread_t *thread, dxfg_time_format_t *timeFormat, int64_t value) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_time_zone_t *dxfg_TimeFormat_getTimeZone(graal_isolatethread_t *thread, dxfg_time_format_t *timeFormat) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_auth_token_t *dxfg_AuthToken_valueOf(graal_isolatethread_t *thread, const char *string) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_auth_token_t *dxfg_AuthToken_createBasicToken(graal_isolatethread_t *thread, const char *userPassword) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_auth_token_t *dxfg_AuthToken_createBasicToken2(graal_isolatethread_t *thread, const char *user,
                                                    const char *password) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_auth_token_t *dxfg_AuthToken_createBasicTokenOrNull(graal_isolatethread_t *thread, const char *user,
                                                         const char *password) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_auth_token_t *dxfg_AuthToken_createBearerToken(graal_isolatethread_t *thread, const char *token) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_auth_token_t *dxfg_AuthToken_createBearerTokenOrNull(graal_isolatethread_t *thread, const char *token) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_auth_token_t *dxfg_AuthToken_createCustomToken(graal_isolatethread_t *thread, const char *scheme,
                                                    const char *value) {
    return INVALID_PTR_RESULT_NULLPTR;
}

const char *dxfg_AuthToken_getHttpAuthorization(graal_isolatethread_t *thread, dxfg_auth_token_t *authToken) {
    return INVALID_PTR_RESULT_NULLPTR;
}

const char *dxfg_AuthToken_getUser(graal_isolatethread_t *thread, dxfg_auth_token_t *authToken) {
    return INVALID_PTR_RESULT_NULLPTR;
}

const char *dxfg_AuthToken_getPassword(graal_isolatethread_t *thread, dxfg_auth_token_t *authToken) {
    return INVALID_PTR_RESULT_NULLPTR;
}

const char *dxfg_AuthToken_getScheme(graal_isolatethread_t *thread, dxfg_auth_token_t *authToken) {
    return INVALID_PTR_RESULT_NULLPTR;
}

const char *dxfg_AuthToken_getValue(graal_isolatethread_t *thread, dxfg_auth_token_t *authToken) {
    return INVALID_PTR_RESULT_NULLPTR;
}

// dxfg_endpoint

dxfg_endpoint_builder_t *dxfg_DXEndpoint_newBuilder(graal_isolatethread_t *thread) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_DXEndpoint_Builder_withRole(graal_isolatethread_t *thread, dxfg_endpoint_builder_t *builder,
                                         dxfg_endpoint_role_t role) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXEndpoint_Builder_withName(graal_isolatethread_t *thread, dxfg_endpoint_builder_t *builder,
                                         const char *name) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXEndpoint_Builder_withProperty(graal_isolatethread_t *thread, dxfg_endpoint_builder_t *builder,
                                             const char *key, const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXEndpoint_Builder_withProperties(graal_isolatethread_t *thread, dxfg_endpoint_builder_t *builder,
                                               const char *file_path) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXEndpoint_Builder_supportsProperty(graal_isolatethread_t *thread, dxfg_endpoint_builder_t *builder,
                                                 const char *key) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_endpoint_t *dxfg_DXEndpoint_Builder_build(graal_isolatethread_t *thread, dxfg_endpoint_builder_t *builder) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_endpoint_t *dxfg_DXEndpoint_getInstance(graal_isolatethread_t *thread) {
    return INVALID_PTR_RESULT_NULLPTR;
}
dxfg_endpoint_t *dxfg_DXEndpoint_getInstance2(graal_isolatethread_t *thread, dxfg_endpoint_role_t role) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_endpoint_t *dxfg_DXEndpoint_create(graal_isolatethread_t *thread) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_endpoint_t *dxfg_DXEndpoint_create2(graal_isolatethread_t *thread, dxfg_endpoint_role_t role) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_DXEndpoint_close(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXEndpoint_closeAndAwaitTermination(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_endpoint_role_t dxfg_DXEndpoint_getRole(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return static_cast<dxfg_endpoint_role_t>(INVALID_INT_RESULT_MINUS_ONE);
}

int32_t dxfg_DXEndpoint_user(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint, const char *user) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXEndpoint_password(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint, const char *password) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXEndpoint_connect(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint, const char *address) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXEndpoint_reconnect(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXEndpoint_disconnect(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXEndpoint_disconnectAndClear(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXEndpoint_awaitProcessed(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXEndpoint_awaitNotConnected(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_endpoint_state_t dxfg_DXEndpoint_getState(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return static_cast<dxfg_endpoint_state_t>(INVALID_INT_RESULT_MINUS_ONE);
}

int32_t dxfg_DXEndpoint_addStateChangeListener(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint,
                                               dxfg_endpoint_state_change_listener_t *listener) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXEndpoint_removeStateChangeListener(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint,
                                                  dxfg_endpoint_state_change_listener_t *listener) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_feed_t *dxfg_DXEndpoint_getFeed(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_publisher_t *dxfg_DXEndpoint_getPublisher(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_DXEndpoint_executor(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint, dxfg_executor_t *executor) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_event_clazz_list_t *dxfg_DXEndpoint_getEventTypes(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_endpoint_state_change_listener_t *
dxfg_PropertyChangeListener_new(graal_isolatethread_t *thread, dxfg_endpoint_state_change_listener_func user_func,
                                void *user_data) {
    return INVALID_PTR_RESULT_NULLPTR;
}

// dxfg_events

dxfg_symbol_t *dxfg_Symbol_new(graal_isolatethread_t *thread, const char *symbol, dxfg_symbol_type_t symbolType) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_Symbol_release(graal_isolatethread_t *thread, dxfg_symbol_t *symbol) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_event_type_t *dxfg_EventType_new(graal_isolatethread_t *thread, const char *symbolName, dxfg_event_clazz_t clazz) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_EventType_release(graal_isolatethread_t *thread, dxfg_event_type_t *eventType) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_CList_EventType_release(graal_isolatethread_t *thread, dxfg_event_type_list *eventTypes) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_CList_EventClazz_release(graal_isolatethread_t *thread, dxfg_event_clazz_list_t *eventClazzes) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_CList_symbol_release(graal_isolatethread_t *thread, dxfg_symbol_list *) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_indexed_event_source_t *dxfg_IndexedEvent_getSource(graal_isolatethread_t *thread, dxfg_event_type_t *eventType) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_indexed_event_source_t *dxfg_IndexedEventSource_new(graal_isolatethread_t *thread, const char *source) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_IndexedEventSource_release(graal_isolatethread_t *thread, dxfg_indexed_event_source_t *source) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_observable_subscription_change_listener_t *dxfg_ObservableSubscriptionChangeListener_new(
    graal_isolatethread_t *thread,
    dxfg_ObservableSubscriptionChangeListener_function_symbolsAdded function_symbolsAdded,
    dxfg_ObservableSubscriptionChangeListener_function_symbolsRemoved function_symbolsRemoved,
    dxfg_ObservableSubscriptionChangeListener_function_subscriptionClosed function_subscriptionClosed,
    void *user_data) {
    return INVALID_PTR_RESULT_NULLPTR;
}

// dxfg_feed

dxfg_feed_t *dxfg_DXFeed_getInstance(graal_isolatethread_t *thread) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_subscription_t *dxfg_DXFeed_createSubscription(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                    dxfg_event_clazz_t eventClazz) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_subscription_t *dxfg_DXFeed_createSubscription2(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                     dxfg_event_clazz_list_t *eventClazzes) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_time_series_subscription_t *dxfg_DXFeed_createTimeSeriesSubscription(graal_isolatethread_t *thread,
                                                                          dxfg_feed_t *feed,
                                                                          dxfg_event_clazz_t eventClazz) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_time_series_subscription_t *dxfg_DXFeed_createTimeSeriesSubscription2(graal_isolatethread_t *thread,
                                                                           dxfg_feed_t *feed,
                                                                           dxfg_event_clazz_list_t *eventClazzes) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_DXFeed_attachSubscription(graal_isolatethread_t *thread, dxfg_feed_t *feed, dxfg_subscription_t *sub) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeed_detachSubscription(graal_isolatethread_t *thread, dxfg_feed_t *feed, dxfg_subscription_t *sub) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeed_detachSubscriptionAndClear(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                               dxfg_subscription_t *sub) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_event_type_t *dxfg_DXFeed_getLastEventIfSubscribed(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                        dxfg_event_clazz_t eventClazz, dxfg_symbol_t *symbol) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_event_type_list *dxfg_DXFeed_getIndexedEventsIfSubscribed(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                               dxfg_event_clazz_t eventClazz, dxfg_symbol_t *symbol,
                                                               const char *source) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_event_type_list *dxfg_DXFeed_getTimeSeriesIfSubscribed(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                            dxfg_event_clazz_t eventClazz, dxfg_symbol_t *symbol,
                                                            int64_t from_time, int64_t to_time) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_DXFeed_getLastEvent(graal_isolatethread_t *thread, dxfg_feed_t *feed, dxfg_event_type_t *event) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeed_getLastEvents(graal_isolatethread_t *thread, dxfg_feed_t *feed, dxfg_event_type_list *events) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_promise_event_t *dxfg_DXFeed_getLastEventPromise(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                      dxfg_event_clazz_t eventClazz, dxfg_symbol_t *symbol) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_promise_list *dxfg_DXFeed_getLastEventsPromises(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                     dxfg_event_clazz_t eventClazz, dxfg_symbol_list *symbols) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_promise_events_t *dxfg_DXFeed_getIndexedEventsPromise(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                           dxfg_event_clazz_t eventClazz, dxfg_symbol_t *symbol,
                                                           dxfg_indexed_event_source_t *source) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_promise_events_t *dxfg_DXFeed_getTimeSeriesPromise(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                        dxfg_event_clazz_t clazz, dxfg_symbol_t *symbol,
                                                        int64_t fromTime, int64_t toTime) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_DXFeedTimeSeriesSubscription_setFromTime(graal_isolatethread_t *thread,
                                                      dxfg_time_series_subscription_t *sub, int64_t fromTime) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Promise_isDone(graal_isolatethread_t *thread, dxfg_promise_t *promise) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Promise_hasResult(graal_isolatethread_t *thread, dxfg_promise_t *promise) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Promise_hasException(graal_isolatethread_t *thread, dxfg_promise_t *promise) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Promise_isCancelled(graal_isolatethread_t *thread, dxfg_promise_t *promise) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_event_type_t *dxfg_Promise_EventType_getResult(graal_isolatethread_t *thread, dxfg_promise_event_t *promise) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_event_type_list *dxfg_Promise_List_EventType_getResult(graal_isolatethread_t *thread,
                                                            dxfg_promise_events_t *promise) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_exception_t *dxfg_Promise_getException(graal_isolatethread_t *thread, dxfg_promise_t *promise) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_Promise_await(graal_isolatethread_t *thread, dxfg_promise_t *promise) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Promise_await2(graal_isolatethread_t *thread, dxfg_promise_t *promise, int32_t timeoutInMilliseconds) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Promise_awaitWithoutException(graal_isolatethread_t *thread, dxfg_promise_t *promise,
                                           int32_t timeoutInMilliseconds) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Promise_cancel(graal_isolatethread_t *thread, dxfg_promise_t *promise) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Promise_List_EventType_complete(graal_isolatethread_t *thread, dxfg_promise_t *promise,
                                             dxfg_event_type_list *events) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Promise_EventType_complete(graal_isolatethread_t *thread, dxfg_promise_t *promise,
                                        dxfg_event_type_t *event) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Promise_completeExceptionally(graal_isolatethread_t *thread, dxfg_promise_t *promise,
                                           dxfg_exception_t *exception) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Promise_whenDone(graal_isolatethread_t *thread, dxfg_promise_t *promise,
                              dxfg_promise_handler_function promise_handler_function, void *user_data) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Promise_whenDoneAsync(graal_isolatethread_t *thread, dxfg_promise_t *promise,
                                   dxfg_promise_handler_function promise_handler_function, void *user_data,
                                   dxfg_executor_t *executor) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_promise_t *dxfg_Promise_completed(graal_isolatethread_t *thread, dxfg_promise_t *promise,
                                       dxfg_java_object_handler *handler) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_promise_t *dxfg_Promise_failed(graal_isolatethread_t *thread, dxfg_promise_t *promise,
                                    dxfg_exception_t *exception) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_promise_t *dxfg_Promises_allOf(graal_isolatethread_t *thread, dxfg_promise_list *promises) {
    return INVALID_PTR_RESULT_NULLPTR;
}

// dxfg_publisher

dxfg_publisher_t *dxfg_DXPublisher_getInstance(graal_isolatethread_t *thread) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_DXPublisher_publishEvents(graal_isolatethread_t *thread, dxfg_publisher_t *publisher,
                                       dxfg_event_type_list *events) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_observable_subscription_t *dxfg_DXPublisher_getSubscription(graal_isolatethread_t *thread,
                                                                 dxfg_publisher_t *publisher,
                                                                 dxfg_event_clazz_t eventClazz) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_ObservableSubscription_isClosed(graal_isolatethread_t *thread, dxfg_observable_subscription_t *sub) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_event_clazz_list_t *dxfg_ObservableSubscription_getEventTypes(graal_isolatethread_t *thread,
                                                                   dxfg_observable_subscription_t *sub) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_ObservableSubscription_containsEventType(graal_isolatethread_t *thread,
                                                      dxfg_observable_subscription_t *sub,
                                                      dxfg_event_clazz_t eventClazz) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_ObservableSubscription_addChangeListener(graal_isolatethread_t *thread,
                                                      dxfg_observable_subscription_t *sub,
                                                      dxfg_observable_subscription_change_listener_t *listener) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_ObservableSubscription_removeChangeListener(graal_isolatethread_t *thread,
                                                         dxfg_observable_subscription_t *sub,
                                                         dxfg_observable_subscription_change_listener_t *listener) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

// dxfg_subscription

dxfg_feed_event_listener_t *dxfg_DXFeedEventListener_new(graal_isolatethread_t *thread,
                                                         dxfg_feed_event_listener_function user_func, void *user_data) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_subscription_t *dxfg_DXFeedSubscription_new(graal_isolatethread_t *thread, dxfg_event_clazz_t eventClazz) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_subscription_t *dxfg_DXFeedSubscription_new2(graal_isolatethread_t *thread,
                                                  dxfg_event_clazz_list_t *eventClazzes) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_DXFeedSubscription_close(graal_isolatethread_t *thread, dxfg_subscription_t *sub) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeedSubscription_addEventListener(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                                 dxfg_feed_event_listener_t *listener) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeedSubscription_removeEventListener(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                                    dxfg_feed_event_listener_t *listener) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeedSubscription_addSymbol(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                          dxfg_symbol_t *symbol) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeedSubscription_addSymbols(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                           dxfg_symbol_list *symbols) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeedSubscription_removeSymbol(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                             dxfg_symbol_t *symbol) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeedSubscription_removeSymbols(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                              dxfg_symbol_list *symbols) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeedSubscription_clear(graal_isolatethread_t *thread, dxfg_subscription_t *sub) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeedSubscription_attach(graal_isolatethread_t *thread, dxfg_subscription_t *sub, dxfg_feed_t *feed) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeedSubscription_detach(graal_isolatethread_t *thread, dxfg_subscription_t *sub, dxfg_feed_t *feed) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeedSubscription_isClosed(graal_isolatethread_t *thread, dxfg_subscription_t *sub) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_event_clazz_list_t *dxfg_DXFeedSubscription_getEventTypes(graal_isolatethread_t *thread,
                                                               dxfg_subscription_t *sub) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_DXFeedSubscription_containsEventType(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                                  dxfg_event_clazz_t eventClazz) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_symbol_list *dxfg_DXFeedSubscription_getSymbols(graal_isolatethread_t *thread, dxfg_subscription_t *sub) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_DXFeedSubscription_setSymbol(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                          dxfg_symbol_t *symbol) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeedSubscription_setSymbols(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                           dxfg_symbol_list *symbols) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_symbol_list *dxfg_DXFeedSubscription_getDecoratedSymbols(graal_isolatethread_t *thread, dxfg_subscription_t *sub) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_executor_t *dxfg_DXFeedSubscription_getExecutor(graal_isolatethread_t *thread, dxfg_subscription_t *sub) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_DXFeedSubscription_setExecutor(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                            dxfg_executor_t *executor) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_time_period_t *dxfg_DXFeedSubscription_getAggregationPeriod(graal_isolatethread_t *thread,
                                                                 dxfg_subscription_t *sub) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_DXFeedSubscription_setAggregationPeriod(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                                     dxfg_time_period_t *period) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeedSubscription_getEventsBatchLimit(graal_isolatethread_t *thread, dxfg_subscription_t *sub) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeedSubscription_setEventsBatchLimit(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                                    int32_t eventsBatchLimit) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeedSubscription_addChangeListener(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                                  dxfg_observable_subscription_change_listener_t *listener) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_DXFeedSubscription_removeChangeListener(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                                     dxfg_observable_subscription_change_listener_t *listener) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

// dxfg_system

int32_t dxfg_system_set_property(graal_isolatethread_t *thread, const char *key, const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_system_get_property(graal_isolatethread_t *thread, const char *key) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_system_release_property(graal_isolatethread_t *thread, const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

// dxfg_qds

dxfg_string_list *dxfg_Tools_parseSymbols(graal_isolatethread_t *thread, const char *symbolList) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_Tools_main(graal_isolatethread_t *thread, dxfg_string_list *args) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

// dxfg_event_model

dxfg_order_book_model_t *dxfg_OrderBookModel_new(graal_isolatethread_t *thread) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_indexed_event_model_t *dxfg_IndexedEventModel_new(graal_isolatethread_t *thread, dxfg_event_clazz_t clazz) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_time_series_event_model_t *dxfg_TimeSeriesEventModel_new(graal_isolatethread_t *thread, dxfg_event_clazz_t clazz) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_OrderBookModel_attach(graal_isolatethread_t *thread, dxfg_order_book_model_t *model, dxfg_feed_t *feed) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_OrderBookModel_detach(graal_isolatethread_t *thread, dxfg_order_book_model_t *model, dxfg_feed_t *feed) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_OrderBookModel_close(graal_isolatethread_t *thread, dxfg_order_book_model_t *model) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_executor_t *dxfg_OrderBookModel_getExecutor(graal_isolatethread_t *thread, dxfg_order_book_model_t *model) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_OrderBookModel_setExecutor(graal_isolatethread_t *thread, dxfg_order_book_model_t *model,
                                        dxfg_executor_t *executor) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_OrderBookModel_clear(graal_isolatethread_t *thread, dxfg_order_book_model_t *model) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_IndexedEventModel_attach(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model,
                                      dxfg_feed_t *feed) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_IndexedEventModel_detach(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model,
                                      dxfg_feed_t *feed) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_IndexedEventModel_close(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_executor_t *dxfg_IndexedEventModel_getExecutor(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_IndexedEventModel_setExecutor(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model,
                                           dxfg_executor_t *executor) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_IndexedEventModel_clear(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_TimeSeriesEventModel_attach(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model,
                                         dxfg_feed_t *feed) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_TimeSeriesEventModel_detach(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model,
                                         dxfg_feed_t *feed) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_TimeSeriesEventModel_close(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_executor_t *dxfg_TimeSeriesEventModel_getExecutor(graal_isolatethread_t *thread,
                                                       dxfg_time_series_event_model_t *model) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_TimeSeriesEventModel_setExecutor(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model,
                                              dxfg_executor_t *executor) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_TimeSeriesEventModel_clear(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_OrderBookModel_getFilter(graal_isolatethread_t *thread, dxfg_order_book_model_t *model) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_OrderBookModel_setFilter(graal_isolatethread_t *thread, dxfg_order_book_model_t *model,
                                      dxfg_order_book_model_filter_t filter) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_OrderBookModel_getSymbol(graal_isolatethread_t *thread, dxfg_order_book_model_t *model) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_OrderBookModel_setSymbol(graal_isolatethread_t *thread, dxfg_order_book_model_t *model,
                                      const char *symbol) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_symbol_t *dxfg_IndexedEventModel_getSymbol(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_IndexedEventModel_setSymbol(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model,
                                         dxfg_symbol_t *symbol) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_symbol_t *dxfg_TimeSeriesEventModel_getSymbol(graal_isolatethread_t *thread,
                                                   dxfg_time_series_event_model_t *model) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_TimeSeriesEventModel_setSymbol(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model,
                                            dxfg_symbol_t *symbol) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_OrderBookModel_getLotSize(graal_isolatethread_t *thread, dxfg_order_book_model_t *model) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_OrderBookModel_setLotSize(graal_isolatethread_t *thread, dxfg_order_book_model_t *model, int32_t lotSize) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_IndexedEventModel_getSizeLimit(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_IndexedEventModel_setSizeLimit(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model,
                                            int32_t sizeLimit) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_TimeSeriesEventModel_getSizeLimit(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_TimeSeriesEventModel_setSizeLimit(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model,
                                               int32_t sizeLimit) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int64_t dxfg_TimeSeriesEventModel_getFromTime(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_TimeSeriesEventModel_setFromTime(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model,
                                              int64_t fromTime) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_observable_list_model_t *dxfg_OrderBookModel_getBuyOrders(graal_isolatethread_t *thread,
                                                               dxfg_order_book_model_t *model) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_observable_list_model_t *dxfg_OrderBookModel_getSellOrders(graal_isolatethread_t *thread,
                                                                dxfg_order_book_model_t *model) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_observable_list_model_t *dxfg_IndexedEventModel_getEventsList(graal_isolatethread_t *thread,
                                                                   dxfg_indexed_event_model_t *model) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_observable_list_model_t *dxfg_TimeSeriesEventModel_getEventsList(graal_isolatethread_t *thread,
                                                                      dxfg_time_series_event_model_t *model) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_observable_list_model_listener_t *
dxfg_ObservableListModelListener_new(graal_isolatethread_t *thread,
                                     dxfg_observable_list_model_listener_function user_func, void *user_data) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_ObservableListModel_addListener(graal_isolatethread_t *thread, dxfg_observable_list_model_t *list,
                                             dxfg_observable_list_model_listener_t *listener) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_ObservableListModel_removeListener(graal_isolatethread_t *thread, dxfg_observable_list_model_t *list,
                                                dxfg_observable_list_model_listener_t *listener) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_order_book_model_listener_t *dxfg_OrderBookModelListener_new(graal_isolatethread_t *thread,
                                                                  dxfg_order_book_model_listener_function user_func,
                                                                  void *user_data) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_OrderBookModel_addListener(graal_isolatethread_t *thread, dxfg_order_book_model_t *model,
                                        dxfg_order_book_model_listener_t *listener) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_OrderBookModel_removeListener(graal_isolatethread_t *thread, dxfg_order_book_model_t *model,
                                           dxfg_order_book_model_listener_t *listener) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_event_type_list *dxfg_ObservableListModel_toArray(graal_isolatethread_t *thread,
                                                       dxfg_observable_list_model_t *list) {
    return INVALID_PTR_RESULT_NULLPTR;
}

// dxfg_ipf

dxfg_ipf_connection_t *dxfg_InstrumentProfileConnection_createConnection(graal_isolatethread_t *thread,
                                                                         const char *address,
                                                                         dxfg_ipf_collector_t *collector) {
    return INVALID_PTR_RESULT_NULLPTR;
}

const char *dxfg_InstrumentProfileConnection_getAddress(graal_isolatethread_t *thread,
                                                        dxfg_ipf_connection_t *connection) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int64_t dxfg_InstrumentProfileConnection_getUpdatePeriod(graal_isolatethread_t *thread,
                                                         dxfg_ipf_connection_t *connection) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfileConnection_setUpdatePeriod(graal_isolatethread_t *thread,
                                                         dxfg_ipf_connection_t *connection, int64_t newValue) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_ipf_connection_state_t dxfg_InstrumentProfileConnection_getState(graal_isolatethread_t *thread,
                                                                      dxfg_ipf_connection_t *connection) {
    return static_cast<dxfg_ipf_connection_state_t>(INVALID_INT_RESULT_MINUS_ONE);
}

int64_t dxfg_InstrumentProfileConnection_getLastModified(graal_isolatethread_t *thread,
                                                         dxfg_ipf_connection_t *connection) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfileConnection_start(graal_isolatethread_t *thread, dxfg_ipf_connection_t *connection) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfileConnection_close(graal_isolatethread_t *thread, dxfg_ipf_connection_t *connection) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_ipf_connection_state_change_listener_t *
dxfg_IpfPropertyChangeListener_new(graal_isolatethread_t *thread,
                                   dxfg_ipf_connection_state_change_listener_func user_func, void *user_data) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfileConnection_addStateChangeListener(graal_isolatethread_t *thread,
                                                                dxfg_ipf_connection_t *connection,
                                                                dxfg_ipf_connection_state_change_listener_t *listener) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t
dxfg_InstrumentProfileConnection_removeStateChangeListener(graal_isolatethread_t *thread,
                                                           dxfg_ipf_connection_t *connection,
                                                           dxfg_ipf_connection_state_change_listener_t *listener) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfileConnection_waitUntilCompleted(graal_isolatethread_t *thread,
                                                            dxfg_ipf_connection_t *connection, int64_t timeoutInMs) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_CList_InstrumentProfile_wrapper_release(graal_isolatethread_t *thread, dxfg_instrument_profile_list *ips) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_CList_InstrumentProfile_release(graal_isolatethread_t *thread, dxfg_instrument_profile_list *ips) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_ipf_collector_t *dxfg_InstrumentProfileCollector_new(graal_isolatethread_t *thread) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int64_t dxfg_InstrumentProfileCollector_getLastUpdateTime(graal_isolatethread_t *thread,
                                                          dxfg_ipf_collector_t *collector) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfileCollector_updateInstrumentProfile(graal_isolatethread_t *thread,
                                                                dxfg_ipf_collector_t *collector,
                                                                dxfg_instrument_profile_t *ip) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfileCollector_updateInstrumentProfiles(graal_isolatethread_t *thread,
                                                                 dxfg_ipf_collector_t *collector,
                                                                 dxfg_instrument_profile_list *ips,
                                                                 dxfg_java_object_handler *generation) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfileCollector_removeGenerations(graal_isolatethread_t *thread,
                                                          dxfg_ipf_collector_t *collector,
                                                          dxfg_java_object_handler_list *generations) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_iterable_ip_t *dxfg_InstrumentProfileCollector_view(graal_isolatethread_t *thread,
                                                         dxfg_ipf_collector_t *collector) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_executor_t *dxfg_InstrumentProfileCollector_getExecutor(graal_isolatethread_t *thread,
                                                             dxfg_ipf_collector_t *collector) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfileCollector_setExecutor(graal_isolatethread_t *thread, dxfg_ipf_collector_t *collector,
                                                    dxfg_executor_t *executor) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfileCollector_addUpdateListener(graal_isolatethread_t *thread,
                                                          dxfg_ipf_collector_t *collector,
                                                          dxfg_ipf_update_listener_t *listener) {
    return INVALID_INT_RESULT_MINUS_ONE;
}
int32_t dxfg_InstrumentProfileCollector_removeUpdateListener(graal_isolatethread_t *thread,
                                                             dxfg_ipf_collector_t *collector,
                                                             dxfg_ipf_update_listener_t *listener) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Iterable_InstrumentProfile_hasNext(graal_isolatethread_t *thread, dxfg_iterable_ip_t *iterable_ip) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_instrument_profile_t *dxfg_Iterable_InstrumentProfile_next(graal_isolatethread_t *thread,
                                                                dxfg_iterable_ip_t *iterable_ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_ipf_update_listener_t *dxfg_InstrumentProfileUpdateListener_new(graal_isolatethread_t *thread,
                                                                     dxfg_ipf_update_listener_function user_func,
                                                                     void *user_data) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_instrument_profile_reader_t *dxfg_InstrumentProfileReader_new(graal_isolatethread_t *thread) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int64_t dxfg_InstrumentProfileReader_getLastModified(graal_isolatethread_t *thread,
                                                     dxfg_instrument_profile_reader_t *reader) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfileReader_wasComplete(graal_isolatethread_t *thread,
                                                 dxfg_instrument_profile_reader_t *reader) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_instrument_profile_list *dxfg_InstrumentProfileReader_readFromFile(graal_isolatethread_t *thread,
                                                                        dxfg_instrument_profile_reader_t *reader,
                                                                        const char *address) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_instrument_profile_list *dxfg_InstrumentProfileReader_readFromFile2(graal_isolatethread_t *thread,
                                                                         dxfg_instrument_profile_reader_t *reader,
                                                                         const char *address, const char *user,
                                                                         const char *password) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_instrument_profile_list *dxfg_InstrumentProfileReader_readFromFile3(graal_isolatethread_t *thread,
                                                                         dxfg_instrument_profile_reader_t *reader,
                                                                         const char *address,
                                                                         dxfg_auth_token_t *token) {
    return INVALID_PTR_RESULT_NULLPTR;
}

const char *dxfg_InstrumentProfileReader_resolveSourceURL(graal_isolatethread_t *thread, const char *address) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_instrument_profile_list *dxfg_InstrumentProfileReader_read2(graal_isolatethread_t *thread,
                                                                 dxfg_instrument_profile_reader_t *reader,
                                                                 dxfg_input_stream_t *is, const char *address) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_instrument_profile_list *dxfg_InstrumentProfileReader_readCompressed(graal_isolatethread_t *thread,
                                                                          dxfg_instrument_profile_reader_t *reader,
                                                                          dxfg_input_stream_t *is) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_instrument_profile_list *dxfg_InstrumentProfileReader_read(graal_isolatethread_t *thread,
                                                                dxfg_instrument_profile_reader_t *reader,
                                                                dxfg_input_stream_t *is) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_instrument_profile_t *dxfg_InstrumentProfile_new(graal_isolatethread_t *thread) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_instrument_profile_t *dxfg_InstrumentProfile_new2(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

const char *dxfg_InstrumentProfile_getType(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setType(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                       const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getSymbol(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setSymbol(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                         const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getDescription(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setDescription(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                              const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getLocalSymbol(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setLocalSymbol(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                              const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getLocalDescription(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setLocalDescription(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                                   const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getCountry(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setCountry(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                          const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getOPOL(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setOPOL(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                       const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getExchangeData(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setExchangeData(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                               const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getExchanges(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setExchanges(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                            const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getCurrency(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setCurrency(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                           const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getBaseCurrency(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setBaseCurrency(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                               const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getCFI(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setCFI(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip, const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getISIN(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setISIN(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                       const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getSEDOL(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setSEDOL(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                        const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getCUSIP(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setCUSIP(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                        const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfile_getICB(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfile_setICB(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip, int32_t value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfile_getSIC(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfile_setSIC(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip, int32_t value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

double dxfg_InstrumentProfile_getMultiplier(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_DOUBLE_RESULT_NEG_INF;
}

int32_t dxfg_InstrumentProfile_setMultiplier(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                             double value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getProduct(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setProduct(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                          const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getUnderlying(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setUnderlying(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                             const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

double dxfg_InstrumentProfile_getSPC(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_DOUBLE_RESULT_NEG_INF;
}

int32_t dxfg_InstrumentProfile_setSPC(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip, double value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getAdditionalUnderlyings(graal_isolatethread_t *thread,
                                                            dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setAdditionalUnderlyings(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                                        const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getMMY(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setMMY(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip, const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfile_getExpiration(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfile_setExpiration(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                             int32_t value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfile_getLastTrade(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfile_setLastTrade(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                            int32_t value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

double dxfg_InstrumentProfile_getStrike(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_DOUBLE_RESULT_NEG_INF;
}

int32_t dxfg_InstrumentProfile_setStrike(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip, double value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getOptionType(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setOptionType(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                             const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getExpirationStyle(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setExpirationStyle(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                                  const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getSettlementStyle(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setSettlementStyle(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                                  const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getPriceIncrements(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setPriceIncrements(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                                  const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getTradingHours(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setTradingHours(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                               const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_InstrumentProfile_getField(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                            const char *name) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_setField(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip, const char *name,
                                        const char *value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

double dxfg_InstrumentProfile_getNumericField(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                              const char *name) {
    return INVALID_DOUBLE_RESULT_NEG_INF;
}

int32_t dxfg_InstrumentProfile_setNumericField(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                               const char *name, double value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfile_getDateField(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                            const char *name) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_InstrumentProfile_setDateField(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip,
                                            const char *name, int32_t value) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_string_list *dxfg_InstrumentProfile_getNonEmptyCustomFieldNames(graal_isolatethread_t *thread,
                                                                     dxfg_instrument_profile_t *ip) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_InstrumentProfile_release(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

// dxfg_ondemand

dxfg_on_demand_service_t *dxfg_OnDemandService_getInstance(graal_isolatethread_t *thread) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_on_demand_service_t *dxfg_OnDemandService_getInstance2(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_endpoint_t *dxfg_OnDemandService_getEndpoint(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_OnDemandService_isReplaySupported(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_OnDemandService_isReplay(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_OnDemandService_isClear(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int64_t dxfg_OnDemandService_getTime(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

double dxfg_OnDemandService_getSpeed(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return INVALID_DOUBLE_RESULT_NEG_INF;
}

int32_t dxfg_OnDemandService_replay(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service, int64_t time) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_OnDemandService_replay2(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service, int64_t time,
                                     double speed) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_OnDemandService_pause(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_OnDemandService_stopAndResume(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_OnDemandService_stopAndClear(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_OnDemandService_setSpeed(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service, double speed) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

// dxfg_schedule

dxfg_session_filter_t *dxfg_SessionFilter_new(graal_isolatethread_t *thread, dxfg_session_filter_function filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_session_filter_t *dxfg_SessionFilter_getInstance(graal_isolatethread_t *thread,
                                                      dxfg_session_filter_prepare_t filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_day_filter_t *dxfg_DayFilter_new(graal_isolatethread_t *thread, dxfg_day_filter_function filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_day_filter_t *dxfg_DayFilter_getInstance(graal_isolatethread_t *thread, dxfg_day_filter_prepare_t filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_schedule_t *dxfg_Schedule_getInstance(graal_isolatethread_t *thread,
                                           dxfg_instrument_profile_t *instrumentProfile) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_schedule_t *dxfg_Schedule_getInstance2(graal_isolatethread_t *thread, const char *scheduleDefinition) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_schedule_t *dxfg_Schedule_getInstance3(graal_isolatethread_t *thread, dxfg_instrument_profile_t *instrumentProfile,
                                            const char *venue) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_string_list *dxfg_Schedule_getTradingVenues(graal_isolatethread_t *thread,
                                                 dxfg_instrument_profile_t *instrumentProfile) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_Schedule_downloadDefaults(graal_isolatethread_t *thread, const char *downloadConfig) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Schedule_setDefaults(graal_isolatethread_t *thread, const char *data, int32_t size) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_session_t *dxfg_Schedule_getSessionByTime(graal_isolatethread_t *thread, dxfg_schedule_t *schedule, int64_t time) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_day_t *dxfg_Schedule_getDayByTime(graal_isolatethread_t *thread, dxfg_schedule_t *schedule, int64_t time) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_day_t *dxfg_Schedule_getDayById(graal_isolatethread_t *thread, dxfg_schedule_t *schedule, int32_t dayId) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_day_t *dxfg_Schedule_getDayByYearMonthDay(graal_isolatethread_t *thread, dxfg_schedule_t *schedule,
                                               int32_t yearMonthDay) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_session_t *dxfg_Schedule_getNearestSessionByTime(graal_isolatethread_t *thread, dxfg_schedule_t *schedule,
                                                      int64_t time, dxfg_session_filter_t *filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_session_t *dxfg_Schedule_findNearestSessionByTime(graal_isolatethread_t *thread, dxfg_schedule_t *schedule,
                                                       int64_t time, dxfg_session_filter_t *filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

const char *dxfg_Schedule_getName(graal_isolatethread_t *thread, dxfg_schedule_t *schedule) {
    return INVALID_PTR_RESULT_NULLPTR;
}

const char *dxfg_Schedule_getTimeZone(graal_isolatethread_t *thread, dxfg_schedule_t *schedule) {
    return INVALID_PTR_RESULT_NULLPTR;
}

const char *dxfg_Schedule_getTimeZone_getID(graal_isolatethread_t *thread, dxfg_schedule_t *schedule) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_day_t *dxfg_Session_getDay(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_Session_getType(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Session_isTrading(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Session_isEmpty(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int64_t dxfg_Session_getStartTime(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int64_t dxfg_Session_getEndTime(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Session_containsTime(graal_isolatethread_t *thread, dxfg_session_t *session, int64_t time) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_session_t *dxfg_Session_getPrevSession(graal_isolatethread_t *thread, dxfg_session_t *session,
                                            dxfg_session_filter_t *filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_session_t *dxfg_Session_getNextSession(graal_isolatethread_t *thread, dxfg_session_t *session,
                                            dxfg_session_filter_t *filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_session_t *dxfg_Session_findPrevSession(graal_isolatethread_t *thread, dxfg_session_t *session,
                                             dxfg_session_filter_t *filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_session_t *dxfg_Session_findNextSession(graal_isolatethread_t *thread, dxfg_session_t *session,
                                             dxfg_session_filter_t *filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_Session_hashCode(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Session_equals(graal_isolatethread_t *thread, dxfg_session_t *session, dxfg_session_t *otherSession) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_Session_toString(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_schedule_t *dxfg_Day_getSchedule(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_Day_getDayId(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Day_getYearMonthDay(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Day_getYear(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Day_getMonthOfYear(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Day_getDayOfMonth(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Day_getDayOfWeek(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Day_isHoliday(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Day_isShortDay(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Day_isTrading(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int64_t dxfg_Day_getStartTime(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int64_t dxfg_Day_getEndTime(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Day_containsTime(graal_isolatethread_t *thread, dxfg_day_t *day, int64_t time) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int64_t dxfg_Day_getResetTime(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

dxfg_session_list *dxfg_Day_getSessions(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_session_t *dxfg_Day_getSessionByTime(graal_isolatethread_t *thread, dxfg_day_t *day, int64_t time) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_session_t *dxfg_Day_getFirstSession(graal_isolatethread_t *thread, dxfg_day_t *day,
                                         dxfg_session_filter_t *filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_session_t *dxfg_Day_getLastSession(graal_isolatethread_t *thread, dxfg_day_t *day, dxfg_session_filter_t *filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_session_t *dxfg_Day_findFirstSession(graal_isolatethread_t *thread, dxfg_day_t *day,
                                          dxfg_session_filter_t *filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_session_t *dxfg_Day_findLastSession(graal_isolatethread_t *thread, dxfg_day_t *day,
                                         dxfg_session_filter_t *filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_day_t *dxfg_Day_getPrevDay(graal_isolatethread_t *thread, dxfg_day_t *day, dxfg_day_filter_t *filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_day_t *dxfg_Day_getNextDay(graal_isolatethread_t *thread, dxfg_day_t *day, dxfg_day_filter_t *filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_day_t *dxfg_Day_findPrevDay(graal_isolatethread_t *thread, dxfg_day_t *day, dxfg_day_filter_t *filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

dxfg_day_t *dxfg_Day_findNextDay(graal_isolatethread_t *thread, dxfg_day_t *day, dxfg_day_filter_t *filter) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_Day_hashCode(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Day_equals(graal_isolatethread_t *thread, dxfg_day_t *day, dxfg_day_t *otherDay) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

const char *dxfg_Day_toString(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return INVALID_PTR_RESULT_NULLPTR;
}

int32_t dxfg_Day_release(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_Session_release(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

int32_t dxfg_SessionList_wrapper_release(graal_isolatethread_t *thread, dxfg_session_list *sessions) {
    return INVALID_INT_RESULT_MINUS_ONE;
}

#ifdef __cplusplus
}
#endif
