// Copyright (c) 2024 Devexperts LLC.
// SPDX-License-Identifier: MPL-2.0

#include <dxfg_api.h>

#if defined(__cplusplus)
extern "C" {
#endif

// graal_isolate

struct __graal_isolate_t {};
struct __graal_isolatethread_t {};

int graal_create_isolate(graal_create_isolate_params_t *, graal_isolate_t **, graal_isolatethread_t **) {
    return {};
}

int graal_attach_thread(graal_isolate_t *, graal_isolatethread_t **) {
    return {};
}

graal_isolatethread_t *graal_get_current_thread(graal_isolate_t *) {
    return {};
}

graal_isolate_t *graal_get_isolate(graal_isolatethread_t *) {
    return {};
}

int graal_detach_thread(graal_isolatethread_t *) {
    return {};
}

int graal_tear_down_isolate(graal_isolatethread_t *) {
    return {};
}

int graal_detach_all_threads_and_tear_down_isolate(graal_isolatethread_t *) {
    return {};
}

// dxfg_catch_exception

dxfg_exception_t *dxfg_get_and_clear_thread_exception_t(graal_isolatethread_t *) {
    return {};
}

void dxfg_Exception_release(graal_isolatethread_t *, dxfg_exception_t *) {
}

// dxfg_javac

int32_t dxfg_Object_finalize(graal_isolatethread_t *, dxfg_java_object_handler *, dxfg_finalize_function, void *) {
    return {};
}

int32_t dxfg_JavaObjectHandler_release(graal_isolatethread_t *, dxfg_java_object_handler *) {
    return {};
}

const char *dxfg_Object_toString(graal_isolatethread_t *, dxfg_java_object_handler *) {
    return {};
}

int32_t dxfg_Object_equals(graal_isolatethread_t *, dxfg_java_object_handler *, dxfg_java_object_handler *) {
    return {};
}

int32_t dxfg_Object_hashCode(graal_isolatethread_t *, dxfg_java_object_handler *) {
    return {};
}

int32_t dxfg_CList_JavaObjectHandler_release(graal_isolatethread_t *, dxfg_java_object_handler_list *) {
    return {};
}

int32_t dxfg_String_release(graal_isolatethread_t *, const char *) {
    return {};
}

int32_t dxfg_CList_String_release(graal_isolatethread_t *, dxfg_string_list *) {
    return {};
}

dxfg_executor_t *dxfg_Executors_newFixedThreadPool(graal_isolatethread_t *, int, const char *) {
    return {};
}

dxfg_executor_t *dxfg_Executors_newScheduledThreadPool(graal_isolatethread_t *, int, const char *) {
    return {};
}

dxfg_executor_t *dxfg_ExecutorBaseOnConcurrentLinkedQueue_new(graal_isolatethread_t *) {
    return {};
}

int32_t dxfg_ExecutorBaseOnConcurrentLinkedQueue_processAllPendingTasks(graal_isolatethread_t *, dxfg_executor_t *) {
    return {};
}

dxfg_input_stream_t *dxfg_ByteArrayInputStream_new(graal_isolatethread_t *, const char *, int32_t) {
    return {};
}

int32_t dxfg_gc(graal_isolatethread_t *) {
    return {};
}

dxfg_java_object_handler *dxfg_throw_exception(graal_isolatethread_t *) {
    return {};
}

dxfg_time_zone_t *dxfg_TimeZone_getTimeZone(graal_isolatethread_t *, const char *) {
    return {};
}

dxfg_time_zone_t *dxfg_TimeZone_getDefault(graal_isolatethread_t *) {
    return {};
}

const char *dxfg_TimeZone_getID(graal_isolatethread_t *, dxfg_time_zone_t *) {
    return {};
}

const char *dxfg_TimeZone_getDisplayName(graal_isolatethread_t *, dxfg_time_zone_t *) {
    return {};
}

const char *dxfg_TimeZone_getDisplayName2(graal_isolatethread_t *, dxfg_time_zone_t *, int32_t, int32_t) {
    return {};
}

int32_t dxfg_TimeZone_getDSTSavings(graal_isolatethread_t *, dxfg_time_zone_t *) {
    return {};
}

int32_t dxfg_TimeZone_useDaylightTime(graal_isolatethread_t *, dxfg_time_zone_t *) {
    return {};
}

int32_t dxfg_TimeZone_observesDaylightTime(graal_isolatethread_t *, dxfg_time_zone_t *) {
    return {};
}

int32_t dxfg_TimeZone_getOffset(graal_isolatethread_t *, dxfg_time_zone_t *, int64_t) {
    return {};
}

int32_t dxfg_TimeZone_getOffset2(graal_isolatethread_t *, dxfg_time_zone_t *timeZone, int32_t era, int32_t year,
                                 int32_t month, int32_t day, int32_t dayOfWeek, int32_t milliseconds) {
    return {};
}

int32_t dxfg_TimeZone_getRawOffset(graal_isolatethread_t *thread, dxfg_time_zone_t *timeZone) {
    return {};
}

int32_t dxfg_TimeZone_hasSameRules(graal_isolatethread_t *thread, dxfg_time_zone_t *timeZone, dxfg_time_zone_t *other) {
    return {};
}

int32_t dxfg_TimeZone_inDaylightTime(graal_isolatethread_t *thread, dxfg_time_zone_t *timeZone, int64_t date) {
    return {};
}

int32_t dxfg_TimeZone_setID(graal_isolatethread_t *thread, dxfg_time_zone_t *timeZone, const char *ID) {
    return {};
}

int32_t dxfg_TimeZone_setRawOffset(graal_isolatethread_t *thread, dxfg_time_zone_t *timeZone, int32_t offsetMillis) {
    return {};
}

dxfg_time_period_t *dxfg_TimePeriod_ZERO(graal_isolatethread_t *thread) {
    return {};
}

dxfg_time_period_t *dxfg_TimePeriod_UNLIMITED(graal_isolatethread_t *thread) {
    return {};
}

dxfg_time_period_t *dxfg_TimePeriod_valueOf(graal_isolatethread_t *thread, int64_t value) {
    return {};
}

dxfg_time_period_t *dxfg_TimePeriod_valueOf2(graal_isolatethread_t *thread, const char *value) {
    return {};
}

int64_t dxfg_TimePeriod_getTime(graal_isolatethread_t *thread, dxfg_time_period_t *timePeriod) {
    return {};
}

int32_t dxfg_TimePeriod_getSeconds(graal_isolatethread_t *thread, dxfg_time_period_t *timePeriod) {
    return {};
}

int64_t dxfg_TimePeriod_getNanos(graal_isolatethread_t *thread, dxfg_time_period_t *timePeriod) {
    return {};
}

dxfg_time_format_t *dxfg_TimeFormat_DEFAULT(graal_isolatethread_t *thread) {
    return {};
}

dxfg_time_format_t *dxfg_TimeFormat_GMT(graal_isolatethread_t *thread) {
    return {};
}

dxfg_time_format_t *dxfg_TimeFormat_getInstance(graal_isolatethread_t *thread, dxfg_time_zone_t *timeZone) {
    return {};
}

dxfg_time_format_t *dxfg_TimeFormat_withTimeZone(graal_isolatethread_t *thread, dxfg_time_format_t *timeFormat) {
    return {};
}

dxfg_time_format_t *dxfg_TimeFormat_withMillis(graal_isolatethread_t *thread, dxfg_time_format_t *timeFormat) {
    return {};
}

dxfg_time_format_t *dxfg_TimeFormat_asFullIso(graal_isolatethread_t *thread, dxfg_time_format_t *timeFormat) {
    return {};
}

int64_t dxfg_TimeFormat_parse(graal_isolatethread_t *thread, dxfg_time_format_t *timeFormat, const char *value) {
    return {};
}

const char *dxfg_TimeFormat_format(graal_isolatethread_t *thread, dxfg_time_format_t *timeFormat, int64_t value) {
    return {};
}

dxfg_time_zone_t *dxfg_TimeFormat_getTimeZone(graal_isolatethread_t *thread, dxfg_time_format_t *timeFormat) {
    return {};
}

dxfg_auth_token_t *dxfg_AuthToken_valueOf(graal_isolatethread_t *thread, const char *string) {
    return {};
}

dxfg_auth_token_t *dxfg_AuthToken_createBasicToken(graal_isolatethread_t *thread, const char *userPassword) {
    return {};
}

dxfg_auth_token_t *dxfg_AuthToken_createBasicToken2(graal_isolatethread_t *thread, const char *user,
                                                    const char *password) {
    return {};
}

dxfg_auth_token_t *dxfg_AuthToken_createBasicTokenOrNull(graal_isolatethread_t *thread, const char *user,
                                                         const char *password) {
    return {};
}

dxfg_auth_token_t *dxfg_AuthToken_createBearerToken(graal_isolatethread_t *thread, const char *token) {
    return {};
}

dxfg_auth_token_t *dxfg_AuthToken_createBearerTokenOrNull(graal_isolatethread_t *thread, const char *token) {
    return {};
}

dxfg_auth_token_t *dxfg_AuthToken_createCustomToken(graal_isolatethread_t *thread, const char *scheme,
                                                    const char *value) {
    return {};
}

const char *dxfg_AuthToken_getHttpAuthorization(graal_isolatethread_t *thread, dxfg_auth_token_t *authToken) {
    return {};
}

const char *dxfg_AuthToken_getUser(graal_isolatethread_t *thread, dxfg_auth_token_t *authToken) {
    return {};
}

const char *dxfg_AuthToken_getPassword(graal_isolatethread_t *thread, dxfg_auth_token_t *authToken) {
    return {};
}

const char *dxfg_AuthToken_getScheme(graal_isolatethread_t *thread, dxfg_auth_token_t *authToken) {
    return {};
}

const char *dxfg_AuthToken_getValue(graal_isolatethread_t *thread, dxfg_auth_token_t *authToken) {
    return {};
}

// dxfg_endpoint

dxfg_endpoint_builder_t *dxfg_DXEndpoint_newBuilder(graal_isolatethread_t *thread) {
    return {};
}

int32_t dxfg_DXEndpoint_Builder_withRole(graal_isolatethread_t *thread, dxfg_endpoint_builder_t *builder,
                                         dxfg_endpoint_role_t role) {
    return {};
}

int32_t dxfg_DXEndpoint_Builder_withName(graal_isolatethread_t *thread, dxfg_endpoint_builder_t *builder,
                                         const char *name) {
    return {};
}

int32_t dxfg_DXEndpoint_Builder_withProperty(graal_isolatethread_t *thread, dxfg_endpoint_builder_t *builder,
                                             const char *key, const char *value) {
    return {};
}

int32_t dxfg_DXEndpoint_Builder_withProperties(graal_isolatethread_t *thread, dxfg_endpoint_builder_t *builder,
                                               const char *file_path) {
    return {};
}

int32_t dxfg_DXEndpoint_Builder_supportsProperty(graal_isolatethread_t *thread, dxfg_endpoint_builder_t *builder,
                                                 const char *key) {
    return {};
}

dxfg_endpoint_t *dxfg_DXEndpoint_Builder_build(graal_isolatethread_t *thread, dxfg_endpoint_builder_t *builder) {
    return {};
}

dxfg_endpoint_t *dxfg_DXEndpoint_getInstance(graal_isolatethread_t *thread) {
    return {};
}
dxfg_endpoint_t *dxfg_DXEndpoint_getInstance2(graal_isolatethread_t *thread, dxfg_endpoint_role_t role) {
    return {};
}

dxfg_endpoint_t *dxfg_DXEndpoint_create(graal_isolatethread_t *thread) {
    return {};
}

dxfg_endpoint_t *dxfg_DXEndpoint_create2(graal_isolatethread_t *thread, dxfg_endpoint_role_t role) {
    return {};
}

int32_t dxfg_DXEndpoint_close(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return {};
}

int32_t dxfg_DXEndpoint_closeAndAwaitTermination(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return {};
}

dxfg_endpoint_role_t dxfg_DXEndpoint_getRole(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return {};
}

int32_t dxfg_DXEndpoint_user(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint, const char *user) {
    return {};
}

int32_t dxfg_DXEndpoint_password(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint, const char *password) {
    return {};
}

int32_t dxfg_DXEndpoint_connect(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint, const char *address) {
    return {};
}

int32_t dxfg_DXEndpoint_reconnect(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return {};
}

int32_t dxfg_DXEndpoint_disconnect(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return {};
}

int32_t dxfg_DXEndpoint_disconnectAndClear(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return {};
}

int32_t dxfg_DXEndpoint_awaitProcessed(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return {};
}

int32_t dxfg_DXEndpoint_awaitNotConnected(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return {};
}

dxfg_endpoint_state_t dxfg_DXEndpoint_getState(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return {};
}

int32_t dxfg_DXEndpoint_addStateChangeListener(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint,
                                               dxfg_endpoint_state_change_listener_t *listener) {
    return {};
}

int32_t dxfg_DXEndpoint_removeStateChangeListener(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint,
                                                  dxfg_endpoint_state_change_listener_t *listener) {
    return {};
}

dxfg_feed_t *dxfg_DXEndpoint_getFeed(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return {};
}

dxfg_publisher_t *dxfg_DXEndpoint_getPublisher(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return {};
}

int32_t dxfg_DXEndpoint_executor(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint, dxfg_executor_t *executor) {
    return {};
}

dxfg_event_clazz_list_t *dxfg_DXEndpoint_getEventTypes(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return {};
}

dxfg_endpoint_state_change_listener_t *
dxfg_PropertyChangeListener_new(graal_isolatethread_t *thread, dxfg_endpoint_state_change_listener_func user_func,
                                void *user_data) {
    return {};
}

// dxfg_events

dxfg_symbol_t *dxfg_Symbol_new(graal_isolatethread_t *thread, const char *symbol, dxfg_symbol_type_t symbolType) {
    return {};
}

int32_t dxfg_Symbol_release(graal_isolatethread_t *thread, dxfg_symbol_t *symbol) {
    return {};
}

dxfg_event_type_t *dxfg_EventType_new(graal_isolatethread_t *thread, const char *symbolName, dxfg_event_clazz_t clazz) {
    return {};
}

int32_t dxfg_EventType_release(graal_isolatethread_t *thread, dxfg_event_type_t *eventType) {
    return {};
}

int32_t dxfg_CList_EventType_release(graal_isolatethread_t *thread, dxfg_event_type_list *eventTypes) {
    return {};
}

int32_t dxfg_CList_EventClazz_release(graal_isolatethread_t *thread, dxfg_event_clazz_list_t *eventClazzes) {
    return {};
}

int32_t dxfg_CList_symbol_release(graal_isolatethread_t *thread, dxfg_symbol_list *) {
    return {};
}

dxfg_indexed_event_source_t *dxfg_IndexedEvent_getSource(graal_isolatethread_t *thread, dxfg_event_type_t *eventType) {
    return {};
}

dxfg_indexed_event_source_t *dxfg_IndexedEventSource_new(graal_isolatethread_t *thread, const char *source) {
    return {};
}

int32_t dxfg_IndexedEventSource_release(graal_isolatethread_t *thread, dxfg_indexed_event_source_t *source) {
    return {};
}

dxfg_observable_subscription_change_listener_t *dxfg_ObservableSubscriptionChangeListener_new(
    graal_isolatethread_t *thread,
    dxfg_ObservableSubscriptionChangeListener_function_symbolsAdded function_symbolsAdded,
    dxfg_ObservableSubscriptionChangeListener_function_symbolsRemoved function_symbolsRemoved,
    dxfg_ObservableSubscriptionChangeListener_function_subscriptionClosed function_subscriptionClosed,
    void *user_data) {
    return {};
}

// dxfg_feed

dxfg_feed_t *dxfg_DXFeed_getInstance(graal_isolatethread_t *thread) {
    return {};
}

dxfg_subscription_t *dxfg_DXFeed_createSubscription(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                    dxfg_event_clazz_t eventClazz) {
    return {};
}

dxfg_subscription_t *dxfg_DXFeed_createSubscription2(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                     dxfg_event_clazz_list_t *eventClazzes) {
    return {};
}

dxfg_time_series_subscription_t *dxfg_DXFeed_createTimeSeriesSubscription(graal_isolatethread_t *thread,
                                                                          dxfg_feed_t *feed,
                                                                          dxfg_event_clazz_t eventClazz) {
    return {};
}

dxfg_time_series_subscription_t *dxfg_DXFeed_createTimeSeriesSubscription2(graal_isolatethread_t *thread,
                                                                           dxfg_feed_t *feed,
                                                                           dxfg_event_clazz_list_t *eventClazzes) {
    return {};
}

int32_t dxfg_DXFeed_attachSubscription(graal_isolatethread_t *thread, dxfg_feed_t *feed, dxfg_subscription_t *sub) {
    return {};
}

int32_t dxfg_DXFeed_detachSubscription(graal_isolatethread_t *thread, dxfg_feed_t *feed, dxfg_subscription_t *sub) {
    return {};
}

int32_t dxfg_DXFeed_detachSubscriptionAndClear(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                               dxfg_subscription_t *sub) {
    return {};
}

dxfg_event_type_t *dxfg_DXFeed_getLastEventIfSubscribed(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                        dxfg_event_clazz_t eventClazz, dxfg_symbol_t *symbol) {
    return {};
}

dxfg_event_type_list *dxfg_DXFeed_getIndexedEventsIfSubscribed(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                               dxfg_event_clazz_t eventClazz, dxfg_symbol_t *symbol,
                                                               const char *source) {
    return {};
}

dxfg_event_type_list *dxfg_DXFeed_getTimeSeriesIfSubscribed(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                            dxfg_event_clazz_t eventClazz, dxfg_symbol_t *symbol,
                                                            int64_t from_time, int64_t to_time) {
    return {};
}

int32_t dxfg_DXFeed_getLastEvent(graal_isolatethread_t *thread, dxfg_feed_t *feed, dxfg_event_type_t *event) {
    return {};
}

int32_t dxfg_DXFeed_getLastEvents(graal_isolatethread_t *thread, dxfg_feed_t *feed, dxfg_event_type_list *events) {
    return {};
}

dxfg_promise_event_t *dxfg_DXFeed_getLastEventPromise(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                      dxfg_event_clazz_t eventClazz, dxfg_symbol_t *symbol) {
    return {};
}

dxfg_promise_list *dxfg_DXFeed_getLastEventsPromises(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                     dxfg_event_clazz_t eventClazz, dxfg_symbol_list *symbols) {
    return {};
}

dxfg_promise_events_t *dxfg_DXFeed_getIndexedEventsPromise(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                           dxfg_event_clazz_t eventClazz, dxfg_symbol_t *symbol,
                                                           dxfg_indexed_event_source_t *source) {
    return {};
}

dxfg_promise_events_t *dxfg_DXFeed_getTimeSeriesPromise(graal_isolatethread_t *thread, dxfg_feed_t *feed,
                                                        dxfg_event_clazz_t clazz, dxfg_symbol_t *symbol,
                                                        int64_t fromTime, int64_t toTime) {
    return {};
}

int32_t dxfg_DXFeedTimeSeriesSubscription_setFromTime(graal_isolatethread_t *thread,
                                                      dxfg_time_series_subscription_t *sub, int64_t fromTime) {
    return {};
}

int32_t dxfg_Promise_isDone(graal_isolatethread_t *thread, dxfg_promise_t *promise) {
    return {};
}

int32_t dxfg_Promise_hasResult(graal_isolatethread_t *thread, dxfg_promise_t *promise) {
    return {};
}

int32_t dxfg_Promise_hasException(graal_isolatethread_t *thread, dxfg_promise_t *promise) {
    return {};
}

int32_t dxfg_Promise_isCancelled(graal_isolatethread_t *thread, dxfg_promise_t *promise) {
    return {};
}

dxfg_event_type_t *dxfg_Promise_EventType_getResult(graal_isolatethread_t *thread, dxfg_promise_event_t *promise) {
    return {};
}

dxfg_event_type_list *dxfg_Promise_List_EventType_getResult(graal_isolatethread_t *thread,
                                                            dxfg_promise_events_t *promise) {
    return {};
}

dxfg_exception_t *dxfg_Promise_getException(graal_isolatethread_t *thread, dxfg_promise_t *promise) {
    return {};
}

int32_t dxfg_Promise_await(graal_isolatethread_t *thread, dxfg_promise_t *promise) {
    return {};
}

int32_t dxfg_Promise_await2(graal_isolatethread_t *thread, dxfg_promise_t *promise, int32_t timeoutInMilliseconds) {
    return {};
}

int32_t dxfg_Promise_awaitWithoutException(graal_isolatethread_t *thread, dxfg_promise_t *promise,
                                           int32_t timeoutInMilliseconds) {
    return {};
}

int32_t dxfg_Promise_cancel(graal_isolatethread_t *thread, dxfg_promise_t *promise) {
    return {};
}

int32_t dxfg_Promise_List_EventType_complete(graal_isolatethread_t *thread, dxfg_promise_t *promise,
                                             dxfg_event_type_list *events) {
    return {};
}

int32_t dxfg_Promise_EventType_complete(graal_isolatethread_t *thread, dxfg_promise_t *promise,
                                        dxfg_event_type_t *event) {
    return {};
}

int32_t dxfg_Promise_completeExceptionally(graal_isolatethread_t *thread, dxfg_promise_t *promise,
                                           dxfg_exception_t *exception) {
    return {};
}

int32_t dxfg_Promise_whenDone(graal_isolatethread_t *thread, dxfg_promise_t *promise,
                              dxfg_promise_handler_function promise_handler_function, void *user_data) {
    return {};
}

int32_t dxfg_Promise_whenDoneAsync(graal_isolatethread_t *thread, dxfg_promise_t *promise,
                                   dxfg_promise_handler_function promise_handler_function, void *user_data,
                                   dxfg_executor_t *executor) {
    return {};
}

dxfg_promise_t *dxfg_Promise_completed(graal_isolatethread_t *thread, dxfg_promise_t *promise,
                                       dxfg_java_object_handler *handler) {
    return {};
}

dxfg_promise_t *dxfg_Promise_failed(graal_isolatethread_t *thread, dxfg_promise_t *promise,
                                    dxfg_exception_t *exception) {
    return {};
}

dxfg_promise_t *dxfg_Promises_allOf(graal_isolatethread_t *thread, dxfg_promise_list *promises) {
    return {};
}

// dxfg_publisher

dxfg_publisher_t *dxfg_DXPublisher_getInstance(graal_isolatethread_t *thread) {
    return {};
}

int32_t dxfg_DXPublisher_publishEvents(graal_isolatethread_t *thread, dxfg_publisher_t *publisher,
                                       dxfg_event_type_list *events) {
    return {};
}

dxfg_observable_subscription_t *dxfg_DXPublisher_getSubscription(graal_isolatethread_t *thread,
                                                                 dxfg_publisher_t *publisher,
                                                                 dxfg_event_clazz_t eventClazz) {
    return {};
}

int32_t dxfg_ObservableSubscription_isClosed(graal_isolatethread_t *thread, dxfg_observable_subscription_t *sub) {
    return {};
}

dxfg_event_clazz_list_t *dxfg_ObservableSubscription_getEventTypes(graal_isolatethread_t *thread,
                                                                   dxfg_observable_subscription_t *sub) {
    return {};
}

int32_t dxfg_ObservableSubscription_containsEventType(graal_isolatethread_t *thread,
                                                      dxfg_observable_subscription_t *sub,
                                                      dxfg_event_clazz_t eventClazz) {
    return {};
}

int32_t dxfg_ObservableSubscription_addChangeListener(graal_isolatethread_t *thread,
                                                      dxfg_observable_subscription_t *sub,
                                                      dxfg_observable_subscription_change_listener_t *listener) {
    return {};
}

int32_t dxfg_ObservableSubscription_removeChangeListener(graal_isolatethread_t *thread,
                                                         dxfg_observable_subscription_t *sub,
                                                         dxfg_observable_subscription_change_listener_t *listener) {
    return {};
}

// dxfg_subscription

dxfg_feed_event_listener_t *dxfg_DXFeedEventListener_new(graal_isolatethread_t *thread,
                                                         dxfg_feed_event_listener_function user_func, void *user_data) {
    return {};
}

dxfg_subscription_t *dxfg_DXFeedSubscription_new(graal_isolatethread_t *thread, dxfg_event_clazz_t eventClazz) {
    return {};
}

dxfg_subscription_t *dxfg_DXFeedSubscription_new2(graal_isolatethread_t *thread,
                                                  dxfg_event_clazz_list_t *eventClazzes) {
    return {};
}

int32_t dxfg_DXFeedSubscription_close(graal_isolatethread_t *thread, dxfg_subscription_t *sub) {
    return {};
}

int32_t dxfg_DXFeedSubscription_addEventListener(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                                 dxfg_feed_event_listener_t *listener) {
    return {};
}

int32_t dxfg_DXFeedSubscription_removeEventListener(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                                    dxfg_feed_event_listener_t *listener) {
    return {};
}

int32_t dxfg_DXFeedSubscription_addSymbol(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                          dxfg_symbol_t *symbol) {
    return {};
}

int32_t dxfg_DXFeedSubscription_addSymbols(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                           dxfg_symbol_list *symbols) {
    return {};
}

int32_t dxfg_DXFeedSubscription_removeSymbol(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                             dxfg_symbol_t *symbol) {
    return {};
}

int32_t dxfg_DXFeedSubscription_removeSymbols(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                              dxfg_symbol_list *symbols) {
    return {};
}

int32_t dxfg_DXFeedSubscription_clear(graal_isolatethread_t *thread, dxfg_subscription_t *sub) {
    return {};
}

int32_t dxfg_DXFeedSubscription_attach(graal_isolatethread_t *thread, dxfg_subscription_t *sub, dxfg_feed_t *feed) {
    return {};
}

int32_t dxfg_DXFeedSubscription_detach(graal_isolatethread_t *thread, dxfg_subscription_t *sub, dxfg_feed_t *feed) {
    return {};
}

int32_t dxfg_DXFeedSubscription_isClosed(graal_isolatethread_t *thread, dxfg_subscription_t *sub) {
    return {};
}

dxfg_event_clazz_list_t *dxfg_DXFeedSubscription_getEventTypes(graal_isolatethread_t *thread,
                                                               dxfg_subscription_t *sub) {
    return {};
}

int32_t dxfg_DXFeedSubscription_containsEventType(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                                  dxfg_event_clazz_t eventClazz) {
    return {};
}

dxfg_symbol_list *dxfg_DXFeedSubscription_getSymbols(graal_isolatethread_t *thread, dxfg_subscription_t *sub) {
    return {};
}

int32_t dxfg_DXFeedSubscription_setSymbol(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                          dxfg_symbol_t *symbol) {
    return {};
}

int32_t dxfg_DXFeedSubscription_setSymbols(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                           dxfg_symbol_list *symbols) {
    return {};
}

dxfg_symbol_list *dxfg_DXFeedSubscription_getDecoratedSymbols(graal_isolatethread_t *thread, dxfg_subscription_t *sub) {
    return {};
}

dxfg_executor_t *dxfg_DXFeedSubscription_getExecutor(graal_isolatethread_t *thread, dxfg_subscription_t *sub) {
    return {};
}

int32_t dxfg_DXFeedSubscription_setExecutor(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                            dxfg_executor_t *executor) {
    return {};
}

dxfg_time_period_t *dxfg_DXFeedSubscription_getAggregationPeriod(graal_isolatethread_t *thread,
                                                                 dxfg_subscription_t *sub) {
    return {};
}

int32_t dxfg_DXFeedSubscription_setAggregationPeriod(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                                     dxfg_time_period_t *period) {
    return {};
}

int32_t dxfg_DXFeedSubscription_getEventsBatchLimit(graal_isolatethread_t *thread, dxfg_subscription_t *sub) {
    return {};
}

int32_t dxfg_DXFeedSubscription_setEventsBatchLimit(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                                    int32_t eventsBatchLimit) {
    return {};
}

int32_t dxfg_DXFeedSubscription_addChangeListener(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                                  dxfg_observable_subscription_change_listener_t *listener) {
    return {};
}

int32_t dxfg_DXFeedSubscription_removeChangeListener(graal_isolatethread_t *thread, dxfg_subscription_t *sub,
                                                     dxfg_observable_subscription_change_listener_t *listener) {
    return {};
}

// dxfg_system

int32_t dxfg_system_set_property(graal_isolatethread_t *thread, const char *key, const char *value) {
    return {};
}

const char *dxfg_system_get_property(graal_isolatethread_t *thread, const char *key) {
    return {};
}

int32_t dxfg_system_release_property(graal_isolatethread_t *thread, const char *value) {
    return {};
}

// dxfg_qds

dxfg_string_list *dxfg_Tools_parseSymbols(graal_isolatethread_t *thread, const char *symbolList) {
    return {};
}

int32_t dxfg_Tools_main(graal_isolatethread_t *thread, dxfg_string_list *args) {
    return {};
}

// dxfg_event_model

dxfg_order_book_model_t *dxfg_OrderBookModel_new(graal_isolatethread_t *thread) {
    return {};
}

dxfg_indexed_event_model_t *dxfg_IndexedEventModel_new(graal_isolatethread_t *thread, dxfg_event_clazz_t clazz) {
    return {};
}

dxfg_time_series_event_model_t *dxfg_TimeSeriesEventModel_new(graal_isolatethread_t *thread, dxfg_event_clazz_t clazz) {
    return {};
}

int32_t dxfg_OrderBookModel_attach(graal_isolatethread_t *thread, dxfg_order_book_model_t *model, dxfg_feed_t *feed) {
    return {};
}

int32_t dxfg_OrderBookModel_detach(graal_isolatethread_t *thread, dxfg_order_book_model_t *model, dxfg_feed_t *feed) {
    return {};
}

int32_t dxfg_OrderBookModel_close(graal_isolatethread_t *thread, dxfg_order_book_model_t *model) {
    return {};
}

dxfg_executor_t *dxfg_OrderBookModel_getExecutor(graal_isolatethread_t *thread, dxfg_order_book_model_t *model) {
    return {};
}

int32_t dxfg_OrderBookModel_setExecutor(graal_isolatethread_t *thread, dxfg_order_book_model_t *model,
                                        dxfg_executor_t *executor) {
    return {};
}

int32_t dxfg_OrderBookModel_clear(graal_isolatethread_t *thread, dxfg_order_book_model_t *model) {
    return {};
}

int32_t dxfg_IndexedEventModel_attach(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model,
                                      dxfg_feed_t *feed) {
    return {};
}

int32_t dxfg_IndexedEventModel_detach(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model,
                                      dxfg_feed_t *feed) {
    return {};
}

int32_t dxfg_IndexedEventModel_close(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model) {
    return {};
}

dxfg_executor_t *dxfg_IndexedEventModel_getExecutor(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model) {
    return {};
}

int32_t dxfg_IndexedEventModel_setExecutor(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model,
                                           dxfg_executor_t *executor) {
    return {};
}

int32_t dxfg_IndexedEventModel_clear(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model) {
    return {};
}

int32_t dxfg_TimeSeriesEventModel_attach(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model,
                                         dxfg_feed_t *feed) {
    return {};
}

int32_t dxfg_TimeSeriesEventModel_detach(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model,
                                         dxfg_feed_t *feed) {
    return {};
}

int32_t dxfg_TimeSeriesEventModel_close(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model) {
    return {};
}

dxfg_executor_t *dxfg_TimeSeriesEventModel_getExecutor(graal_isolatethread_t *thread,
                                                       dxfg_time_series_event_model_t *model) {
    return {};
}

int32_t dxfg_TimeSeriesEventModel_setExecutor(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model,
                                              dxfg_executor_t *executor) {
    return {};
}

int32_t dxfg_TimeSeriesEventModel_clear(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model) {
    return {};
}

int32_t dxfg_OrderBookModel_getFilter(graal_isolatethread_t *thread, dxfg_order_book_model_t *model) {
    return {};
}

int32_t dxfg_OrderBookModel_setFilter(graal_isolatethread_t *thread, dxfg_order_book_model_t *model,
                                      dxfg_order_book_model_filter_t filter) {
    return {};
}

const char *dxfg_OrderBookModel_getSymbol(graal_isolatethread_t *thread, dxfg_order_book_model_t *model) {
    return {};
}

int32_t dxfg_OrderBookModel_setSymbol(graal_isolatethread_t *thread, dxfg_order_book_model_t *model,
                                      const char *symbol) {
    return {};
}

dxfg_symbol_t *dxfg_IndexedEventModel_getSymbol(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model) {
    return {};
}

int32_t dxfg_IndexedEventModel_setSymbol(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model,
                                         dxfg_symbol_t *symbol) {
    return {};
}

dxfg_symbol_t *dxfg_TimeSeriesEventModel_getSymbol(graal_isolatethread_t *thread,
                                                   dxfg_time_series_event_model_t *model) {
    return {};
}

int32_t dxfg_TimeSeriesEventModel_setSymbol(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model,
                                            dxfg_symbol_t *symbol) {
    return {};
}

int32_t dxfg_OrderBookModel_getLotSize(graal_isolatethread_t *thread, dxfg_order_book_model_t *model) {
    return {};
}

int32_t dxfg_OrderBookModel_setLotSize(graal_isolatethread_t *thread, dxfg_order_book_model_t *model, int32_t lotSize) {
    return {};
}

int32_t dxfg_IndexedEventModel_getSizeLimit(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model) {
    return {};
}

int32_t dxfg_IndexedEventModel_setSizeLimit(graal_isolatethread_t *thread, dxfg_indexed_event_model_t *model,
                                            int32_t sizeLimit) {
    return {};
}

int32_t dxfg_TimeSeriesEventModel_getSizeLimit(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model) {
    return {};
}

int32_t dxfg_TimeSeriesEventModel_setSizeLimit(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model,
                                               int32_t sizeLimit) {
    return {};
}

int64_t dxfg_TimeSeriesEventModel_getFromTime(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model) {
    return {};
}

int32_t dxfg_TimeSeriesEventModel_setFromTime(graal_isolatethread_t *thread, dxfg_time_series_event_model_t *model,
                                              int64_t fromTime) {
    return {};
}

dxfg_observable_list_model_t *dxfg_OrderBookModel_getBuyOrders(graal_isolatethread_t *thread,
                                                               dxfg_order_book_model_t *model) {
    return {};
}

dxfg_observable_list_model_t *dxfg_OrderBookModel_getSellOrders(graal_isolatethread_t *thread,
                                                                dxfg_order_book_model_t *model) {
    return {};
}

dxfg_observable_list_model_t *dxfg_IndexedEventModel_getEventsList(graal_isolatethread_t *thread,
                                                                   dxfg_indexed_event_model_t *model) {
    return {};
}

dxfg_observable_list_model_t *dxfg_TimeSeriesEventModel_getEventsList(graal_isolatethread_t *thread,
                                                                      dxfg_time_series_event_model_t *model) {
    return {};
}

dxfg_observable_list_model_listener_t *
dxfg_ObservableListModelListener_new(graal_isolatethread_t *thread,
                                     dxfg_observable_list_model_listener_function user_func, void *user_data) {
    return {};
}

int32_t dxfg_ObservableListModel_addListener(graal_isolatethread_t *thread, dxfg_observable_list_model_t *list,
                                             dxfg_observable_list_model_listener_t *listener) {
    return {};
}

int32_t dxfg_ObservableListModel_removeListener(graal_isolatethread_t *thread, dxfg_observable_list_model_t *list,
                                                dxfg_observable_list_model_listener_t *listener) {
    return {};
}

dxfg_order_book_model_listener_t *dxfg_OrderBookModelListener_new(graal_isolatethread_t *thread,
                                                                  dxfg_order_book_model_listener_function user_func,
                                                                  void *user_data) {
    return {};
}

int32_t dxfg_OrderBookModel_addListener(graal_isolatethread_t *thread, dxfg_order_book_model_t *model,
                                        dxfg_order_book_model_listener_t *listener) {
    return {};
}

int32_t dxfg_OrderBookModel_removeListener(graal_isolatethread_t *thread, dxfg_order_book_model_t *model,
                                           dxfg_order_book_model_listener_t *listener) {
    return {};
}

dxfg_event_type_list *dxfg_ObservableListModel_toArray(graal_isolatethread_t *thread,
                                                       dxfg_observable_list_model_t *list) {
    return {};
}

// dxfg_ipf

dxfg_ipf_connection_t *dxfg_InstrumentProfileConnection_createConnection(graal_isolatethread_t *thread,
                                                                         const char *address,
                                                                         dxfg_ipf_collector_t *collector) {
    return {};
}

const char *dxfg_InstrumentProfileConnection_getAddress(graal_isolatethread_t *thread,
                                                        dxfg_ipf_connection_t *connection) {
    return {};
}

int64_t dxfg_InstrumentProfileConnection_getUpdatePeriod(graal_isolatethread_t *thread,
                                                         dxfg_ipf_connection_t *connection) {
    return {};
}

int32_t dxfg_InstrumentProfileConnection_setUpdatePeriod(graal_isolatethread_t *thread,
                                                         dxfg_ipf_connection_t *connection, int64_t newValue) {
    return {};
}

dxfg_ipf_connection_state_t dxfg_InstrumentProfileConnection_getState(graal_isolatethread_t *thread,
                                                                      dxfg_ipf_connection_t *connection) {
    return {};
}

int64_t dxfg_InstrumentProfileConnection_getLastModified(graal_isolatethread_t *thread,
                                                         dxfg_ipf_connection_t *connection) {
    return {};
}

int32_t dxfg_InstrumentProfileConnection_start(graal_isolatethread_t *thread, dxfg_ipf_connection_t *connection) {
    return {};
}

int32_t dxfg_InstrumentProfileConnection_close(graal_isolatethread_t *thread, dxfg_ipf_connection_t *connection) {
    return {};
}

dxfg_ipf_connection_state_change_listener_t *
dxfg_IpfPropertyChangeListener_new(graal_isolatethread_t *thread,
                                   dxfg_ipf_connection_state_change_listener_func user_func, void *user_data) {
    return {};
}

int32_t dxfg_InstrumentProfileConnection_addStateChangeListener(graal_isolatethread_t *thread,
                                                                dxfg_ipf_connection_t *connection,
                                                                dxfg_ipf_connection_state_change_listener_t *listener) {
    return {};
}

int32_t
dxfg_InstrumentProfileConnection_removeStateChangeListener(graal_isolatethread_t *thread,
                                                           dxfg_ipf_connection_t *connection,
                                                           dxfg_ipf_connection_state_change_listener_t *listener) {
    return {};
}

int32_t dxfg_InstrumentProfileConnection_waitUntilCompleted(graal_isolatethread_t *thread,
                                                            dxfg_ipf_connection_t *connection, int64_t timeoutInMs) {
    return {};
}

int32_t dxfg_CList_InstrumentProfile_release(graal_isolatethread_t *thread, dxfg_instrument_profile_list *ips) {
    return {};
}

dxfg_ipf_collector_t *dxfg_InstrumentProfileCollector_new(graal_isolatethread_t *thread) {
    return {};
}

int64_t dxfg_InstrumentProfileCollector_getLastUpdateTime(graal_isolatethread_t *thread,
                                                          dxfg_ipf_collector_t *collector) {
    return {};
}

int32_t dxfg_InstrumentProfileCollector_updateInstrumentProfile(graal_isolatethread_t *thread,
                                                                dxfg_ipf_collector_t *collector,
                                                                dxfg_instrument_profile_t *ip) {
    return {};
}

int32_t dxfg_InstrumentProfileCollector_updateInstrumentProfiles(graal_isolatethread_t *thread,
                                                                 dxfg_ipf_collector_t *collector,
                                                                 dxfg_instrument_profile_list *ips,
                                                                 dxfg_java_object_handler *generation) {
    return {};
}

int32_t dxfg_InstrumentProfileCollector_removeGenerations(graal_isolatethread_t *thread,
                                                          dxfg_ipf_collector_t *collector,
                                                          dxfg_java_object_handler_list *generations) {
    return {};
}

dxfg_iterable_ip_t *dxfg_InstrumentProfileCollector_view(graal_isolatethread_t *thread,
                                                         dxfg_ipf_collector_t *collector) {
    return {};
}

dxfg_executor_t *dxfg_InstrumentProfileCollector_getExecutor(graal_isolatethread_t *thread,
                                                             dxfg_ipf_collector_t *collector) {
    return {};
}

int32_t dxfg_InstrumentProfileCollector_setExecutor(graal_isolatethread_t *thread, dxfg_ipf_collector_t *collector,
                                                    dxfg_executor_t *executor) {
    return {};
}

int32_t dxfg_InstrumentProfileCollector_addUpdateListener(graal_isolatethread_t *thread,
                                                          dxfg_ipf_collector_t *collector,
                                                          dxfg_ipf_update_listener_t *listener) {
    return {};
}
int32_t dxfg_InstrumentProfileCollector_removeUpdateListener(graal_isolatethread_t *thread,
                                                             dxfg_ipf_collector_t *collector,
                                                             dxfg_ipf_update_listener_t *listener) {
    return {};
}

int32_t dxfg_Iterable_InstrumentProfile_hasNext(graal_isolatethread_t *thread, dxfg_iterable_ip_t *iterable_ip) {
    return {};
}

dxfg_instrument_profile_t *dxfg_Iterable_InstrumentProfile_next(graal_isolatethread_t *thread,
                                                                dxfg_iterable_ip_t *iterable_ip) {
    return {};
}

dxfg_ipf_update_listener_t *dxfg_InstrumentProfileUpdateListener_new(graal_isolatethread_t *thread,
                                                                     dxfg_ipf_update_listener_function user_func,
                                                                     void *user_data) {
    return {};
}

dxfg_instrument_profile_reader_t *dxfg_InstrumentProfileReader_new(graal_isolatethread_t *thread) {
    return {};
}

int64_t dxfg_InstrumentProfileReader_getLastModified(graal_isolatethread_t *thread,
                                                     dxfg_instrument_profile_reader_t *reader) {
    return {};
}

int32_t dxfg_InstrumentProfileReader_wasComplete(graal_isolatethread_t *thread,
                                                 dxfg_instrument_profile_reader_t *reader) {
    return {};
}

dxfg_instrument_profile_list *dxfg_InstrumentProfileReader_readFromFile(graal_isolatethread_t *thread,
                                                                        dxfg_instrument_profile_reader_t *reader,
                                                                        const char *address) {
    return {};
}

dxfg_instrument_profile_list *dxfg_InstrumentProfileReader_readFromFile2(graal_isolatethread_t *thread,
                                                                         dxfg_instrument_profile_reader_t *reader,
                                                                         const char *address, const char *user,
                                                                         const char *password) {
    return {};
}

dxfg_instrument_profile_list *dxfg_InstrumentProfileReader_readFromFile3(graal_isolatethread_t *thread,
                                                                         dxfg_instrument_profile_reader_t *reader,
                                                                         const char *address,
                                                                         dxfg_auth_token_t *token) {
    return {};
}

const char *dxfg_InstrumentProfileReader_resolveSourceURL(graal_isolatethread_t *thread, const char *address) {
    return {};
}

dxfg_instrument_profile_list *dxfg_InstrumentProfileReader_read2(graal_isolatethread_t *thread,
                                                                 dxfg_instrument_profile_reader_t *reader,
                                                                 dxfg_input_stream_t *is, const char *address) {
    return {};
}

dxfg_instrument_profile_list *dxfg_InstrumentProfileReader_readCompressed(graal_isolatethread_t *thread,
                                                                          dxfg_instrument_profile_reader_t *reader,
                                                                          dxfg_input_stream_t *is) {
    return {};
}

dxfg_instrument_profile_list *dxfg_InstrumentProfileReader_read(graal_isolatethread_t *thread,
                                                                dxfg_instrument_profile_reader_t *reader,
                                                                dxfg_input_stream_t *is) {
    return {};
}

int32_t dxfg_InstrumentProfile_release(graal_isolatethread_t *thread, dxfg_instrument_profile_t *ip) {
    return {};
}

// dxfg_ondemand

dxfg_on_demand_service_t *dxfg_OnDemandService_getInstance(graal_isolatethread_t *thread) {
    return {};
}

dxfg_on_demand_service_t *dxfg_OnDemandService_getInstance2(graal_isolatethread_t *thread, dxfg_endpoint_t *endpoint) {
    return {};
}

dxfg_endpoint_t *dxfg_OnDemandService_getEndpoint(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return {};
}

int32_t dxfg_OnDemandService_isReplaySupported(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return {};
}

int32_t dxfg_OnDemandService_isReplay(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return {};
}

int32_t dxfg_OnDemandService_isClear(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return {};
}

int64_t dxfg_OnDemandService_getTime(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return {};
}

double dxfg_OnDemandService_getSpeed(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return {};
}

int32_t dxfg_OnDemandService_replay(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service, int64_t time) {
    return {};
}

int32_t dxfg_OnDemandService_replay2(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service, int64_t time,
                                     double speed) {
    return {};
}

int32_t dxfg_OnDemandService_pause(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return {};
}

int32_t dxfg_OnDemandService_stopAndResume(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return {};
}

int32_t dxfg_OnDemandService_stopAndClear(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service) {
    return {};
}

int32_t dxfg_OnDemandService_setSpeed(graal_isolatethread_t *thread, dxfg_on_demand_service_t *service, double speed) {
    return {};
}

// dxfg_schedule

dxfg_session_filter_t *dxfg_SessionFilter_new(graal_isolatethread_t *thread, dxfg_session_filter_function filter) {
    return {};
}

dxfg_session_filter_t *dxfg_SessionFilter_getInstance(graal_isolatethread_t *thread,
                                                      dxfg_session_filter_prepare_t filter) {
    return {};
}

dxfg_day_filter_t *dxfg_DayFilter_new(graal_isolatethread_t *thread, dxfg_day_filter_function filter) {
    return {};
}

dxfg_day_filter_t *dxfg_DayFilter_getInstance(graal_isolatethread_t *thread, dxfg_day_filter_prepare_t filter) {
    return {};
}

dxfg_schedule_t *dxfg_Schedule_getInstance(graal_isolatethread_t *thread,
                                           dxfg_instrument_profile_t *instrumentProfile) {
    return {};
}

dxfg_schedule_t *dxfg_Schedule_getInstance2(graal_isolatethread_t *thread, const char *scheduleDefinition) {
    return {};
}

dxfg_schedule_t *dxfg_Schedule_getInstance3(graal_isolatethread_t *thread, dxfg_instrument_profile_t *instrumentProfile,
                                            const char *venue) {
    return {};
}

dxfg_string_list *dxfg_Schedule_getTradingVenues(graal_isolatethread_t *thread,
                                                 dxfg_instrument_profile_t *instrumentProfile) {
    return {};
}

int32_t dxfg_Schedule_downloadDefaults(graal_isolatethread_t *thread, const char *downloadConfig) {
    return {};
}

int32_t dxfg_Schedule_setDefaults(graal_isolatethread_t *thread, const char *data, int32_t size) {
    return {};
}

dxfg_session_t *dxfg_Schedule_getSessionByTime(graal_isolatethread_t *thread, dxfg_schedule_t *schedule, int64_t time) {
    return {};
}

dxfg_day_t *dxfg_Schedule_getDayByTime(graal_isolatethread_t *thread, dxfg_schedule_t *schedule, int64_t time) {
    return {};
}

dxfg_day_t *dxfg_Schedule_getDayById(graal_isolatethread_t *thread, dxfg_schedule_t *schedule, int32_t dayId) {
    return {};
}

dxfg_day_t *dxfg_Schedule_getDayByYearMonthDay(graal_isolatethread_t *thread, dxfg_schedule_t *schedule,
                                               int32_t yearMonthDay) {
    return {};
}

dxfg_session_t *dxfg_Schedule_getNearestSessionByTime(graal_isolatethread_t *thread, dxfg_schedule_t *schedule,
                                                      int64_t time, dxfg_session_filter_t *filter) {
    return {};
}

dxfg_session_t *dxfg_Schedule_findNearestSessionByTime(graal_isolatethread_t *thread, dxfg_schedule_t *schedule,
                                                       int64_t time, dxfg_session_filter_t *filter) {
    return {};
}

const char *dxfg_Schedule_getName(graal_isolatethread_t *thread, dxfg_schedule_t *schedule) {
    return {};
}

const char *dxfg_Schedule_getTimeZone(graal_isolatethread_t *thread, dxfg_schedule_t *schedule) {
    return {};
}

const char *dxfg_Schedule_getTimeZone_getID(graal_isolatethread_t *thread, dxfg_schedule_t *schedule) {
    return {};
}

dxfg_day_t *dxfg_Session_getDay(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return {};
}

int32_t dxfg_Session_getType(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return {};
}

int32_t dxfg_Session_isTrading(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return {};
}

int32_t dxfg_Session_isEmpty(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return {};
}

int64_t dxfg_Session_getStartTime(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return {};
}

int64_t dxfg_Session_getEndTime(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return {};
}

int32_t dxfg_Session_containsTime(graal_isolatethread_t *thread, dxfg_session_t *session, int64_t time) {
    return {};
}

dxfg_session_t *dxfg_Session_getPrevSession(graal_isolatethread_t *thread, dxfg_session_t *session,
                                            dxfg_session_filter_t *filter) {
    return {};
}

dxfg_session_t *dxfg_Session_getNextSession(graal_isolatethread_t *thread, dxfg_session_t *session,
                                            dxfg_session_filter_t *filter) {
    return {};
}

dxfg_session_t *dxfg_Session_findPrevSession(graal_isolatethread_t *thread, dxfg_session_t *session,
                                             dxfg_session_filter_t *filter) {
    return {};
}

dxfg_session_t *dxfg_Session_findNextSession(graal_isolatethread_t *thread, dxfg_session_t *session,
                                             dxfg_session_filter_t *filter) {
    return {};
}

int32_t dxfg_Session_hashCode(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return {};
}

int32_t dxfg_Session_equals(graal_isolatethread_t *thread, dxfg_session_t *session, dxfg_session_t *otherSession) {
    return {};
}

const char *dxfg_Session_toString(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return {};
}

dxfg_schedule_t *dxfg_Day_getSchedule(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return {};
}

int32_t dxfg_Day_getDayId(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return {};
}

int32_t dxfg_Day_getYearMonthDay(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return {};
}

int32_t dxfg_Day_getYear(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return {};
}

int32_t dxfg_Day_getMonthOfYear(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return {};
}

int32_t dxfg_Day_getDayOfMonth(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return {};
}

int32_t dxfg_Day_getDayOfWeek(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return {};
}

int32_t dxfg_Day_isHoliday(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return {};
}

int32_t dxfg_Day_isShortDay(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return {};
}

int32_t dxfg_Day_isTrading(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return {};
}

int64_t dxfg_Day_getStartTime(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return {};
}

int64_t dxfg_Day_getEndTime(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return {};
}

int32_t dxfg_Day_containsTime(graal_isolatethread_t *thread, dxfg_day_t *day, int64_t time) {
    return {};
}

int64_t dxfg_Day_getResetTime(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return {};
}

dxfg_session_list *dxfg_Day_getSessions(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return {};
}

dxfg_session_t *dxfg_Day_getSessionByTime(graal_isolatethread_t *thread, dxfg_day_t *day, int64_t time) {
    return {};
}

dxfg_session_t *dxfg_Day_getFirstSession(graal_isolatethread_t *thread, dxfg_day_t *day,
                                         dxfg_session_filter_t *filter) {
    return {};
}

dxfg_session_t *dxfg_Day_getLastSession(graal_isolatethread_t *thread, dxfg_day_t *day, dxfg_session_filter_t *filter) {
    return {};
}

dxfg_session_t *dxfg_Day_findFirstSession(graal_isolatethread_t *thread, dxfg_day_t *day,
                                          dxfg_session_filter_t *filter) {
    return {};
}

dxfg_session_t *dxfg_Day_findLastSession(graal_isolatethread_t *thread, dxfg_day_t *day,
                                         dxfg_session_filter_t *filter) {
    return {};
}

dxfg_day_t *dxfg_Day_getPrevDay(graal_isolatethread_t *thread, dxfg_day_t *day, dxfg_day_filter_t *filter) {
    return {};
}

dxfg_day_t *dxfg_Day_getNextDay(graal_isolatethread_t *thread, dxfg_day_t *day, dxfg_day_filter_t *filter) {
    return {};
}

dxfg_day_t *dxfg_Day_findPrevDay(graal_isolatethread_t *thread, dxfg_day_t *day, dxfg_day_filter_t *filter) {
    return {};
}

dxfg_day_t *dxfg_Day_findNextDay(graal_isolatethread_t *thread, dxfg_day_t *day, dxfg_day_filter_t *filter) {
    return {};
}

int32_t dxfg_Day_hashCode(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return {};
}

int32_t dxfg_Day_equals(graal_isolatethread_t *thread, dxfg_day_t *day, dxfg_day_t *otherDay) {
    return {};
}

const char *dxfg_Day_toString(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return {};
}

int32_t dxfg_Day_release(graal_isolatethread_t *thread, dxfg_day_t *day) {
    return {};
}

int32_t dxfg_Session_release(graal_isolatethread_t *thread, dxfg_session_t *session) {
    return {};
}

int32_t dxfg_SessionList_wrapper_release(graal_isolatethread_t *thread, dxfg_session_list *sessions) {
    return {};
}

#ifdef __cplusplus
}
#endif
