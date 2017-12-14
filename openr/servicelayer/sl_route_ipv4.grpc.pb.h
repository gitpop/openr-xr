// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: sl_route_ipv4.proto
#ifndef GRPC_sl_5froute_5fipv4_2eproto__INCLUDED
#define GRPC_sl_5froute_5fipv4_2eproto__INCLUDED

#include "sl_route_ipv4.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace service_layer {

class SLRoutev4Oper GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status SLRoutev4GlobalsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalsGetMsg& request, ::service_layer::SLRouteGlobalsGetMsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRouteGlobalsGetMsgRsp>> AsyncSLRoutev4GlobalsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalsGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRouteGlobalsGetMsgRsp>>(AsyncSLRoutev4GlobalsGetRaw(context, request, cq));
    }
    virtual ::grpc::Status SLRoutev4GlobalStatsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg& request, ::service_layer::SLRouteGlobalStatsGetMsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRouteGlobalStatsGetMsgRsp>> AsyncSLRoutev4GlobalStatsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRouteGlobalStatsGetMsgRsp>>(AsyncSLRoutev4GlobalStatsGetRaw(context, request, cq));
    }
    virtual ::grpc::Status SLRoutev4VrfRegOp(::grpc::ClientContext* context, const ::service_layer::SLVrfRegMsg& request, ::service_layer::SLVrfRegMsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVrfRegMsgRsp>> AsyncSLRoutev4VrfRegOp(::grpc::ClientContext* context, const ::service_layer::SLVrfRegMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVrfRegMsgRsp>>(AsyncSLRoutev4VrfRegOpRaw(context, request, cq));
    }
    virtual ::grpc::Status SLRoutev4VrfRegGet(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::service_layer::SLVrfRegGetMsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVrfRegGetMsgRsp>> AsyncSLRoutev4VrfRegGet(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVrfRegGetMsgRsp>>(AsyncSLRoutev4VrfRegGetRaw(context, request, cq));
    }
    virtual ::grpc::Status SLRoutev4VrfGetStats(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::service_layer::SLVRFGetStatsMsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVRFGetStatsMsgRsp>> AsyncSLRoutev4VrfGetStats(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVRFGetStatsMsgRsp>>(AsyncSLRoutev4VrfGetStatsRaw(context, request, cq));
    }
    virtual ::grpc::Status SLRoutev4Op(::grpc::ClientContext* context, const ::service_layer::SLRoutev4Msg& request, ::service_layer::SLRoutev4MsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRoutev4MsgRsp>> AsyncSLRoutev4Op(::grpc::ClientContext* context, const ::service_layer::SLRoutev4Msg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRoutev4MsgRsp>>(AsyncSLRoutev4OpRaw(context, request, cq));
    }
    virtual ::grpc::Status SLRoutev4Get(::grpc::ClientContext* context, const ::service_layer::SLRoutev4GetMsg& request, ::service_layer::SLRoutev4GetMsgRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRoutev4GetMsgRsp>> AsyncSLRoutev4Get(::grpc::ClientContext* context, const ::service_layer::SLRoutev4GetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRoutev4GetMsgRsp>>(AsyncSLRoutev4GetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::service_layer::SLRoutev4Msg, ::service_layer::SLRoutev4MsgRsp>> SLRoutev4OpStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::service_layer::SLRoutev4Msg, ::service_layer::SLRoutev4MsgRsp>>(SLRoutev4OpStreamRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::service_layer::SLRoutev4Msg, ::service_layer::SLRoutev4MsgRsp>> AsyncSLRoutev4OpStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::service_layer::SLRoutev4Msg, ::service_layer::SLRoutev4MsgRsp>>(AsyncSLRoutev4OpStreamRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::service_layer::SLRoutev4GetMsg, ::service_layer::SLRoutev4GetMsgRsp>> SLRoutev4GetStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::service_layer::SLRoutev4GetMsg, ::service_layer::SLRoutev4GetMsgRsp>>(SLRoutev4GetStreamRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::service_layer::SLRoutev4GetMsg, ::service_layer::SLRoutev4GetMsgRsp>> AsyncSLRoutev4GetStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::service_layer::SLRoutev4GetMsg, ::service_layer::SLRoutev4GetMsgRsp>>(AsyncSLRoutev4GetStreamRaw(context, cq, tag));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRouteGlobalsGetMsgRsp>* AsyncSLRoutev4GlobalsGetRaw(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalsGetMsg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRouteGlobalStatsGetMsgRsp>* AsyncSLRoutev4GlobalStatsGetRaw(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVrfRegMsgRsp>* AsyncSLRoutev4VrfRegOpRaw(::grpc::ClientContext* context, const ::service_layer::SLVrfRegMsg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVrfRegGetMsgRsp>* AsyncSLRoutev4VrfRegGetRaw(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLVRFGetStatsMsgRsp>* AsyncSLRoutev4VrfGetStatsRaw(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRoutev4MsgRsp>* AsyncSLRoutev4OpRaw(::grpc::ClientContext* context, const ::service_layer::SLRoutev4Msg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::service_layer::SLRoutev4GetMsgRsp>* AsyncSLRoutev4GetRaw(::grpc::ClientContext* context, const ::service_layer::SLRoutev4GetMsg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::service_layer::SLRoutev4Msg, ::service_layer::SLRoutev4MsgRsp>* SLRoutev4OpStreamRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::service_layer::SLRoutev4Msg, ::service_layer::SLRoutev4MsgRsp>* AsyncSLRoutev4OpStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::service_layer::SLRoutev4GetMsg, ::service_layer::SLRoutev4GetMsgRsp>* SLRoutev4GetStreamRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::service_layer::SLRoutev4GetMsg, ::service_layer::SLRoutev4GetMsgRsp>* AsyncSLRoutev4GetStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SLRoutev4GlobalsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalsGetMsg& request, ::service_layer::SLRouteGlobalsGetMsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLRouteGlobalsGetMsgRsp>> AsyncSLRoutev4GlobalsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalsGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLRouteGlobalsGetMsgRsp>>(AsyncSLRoutev4GlobalsGetRaw(context, request, cq));
    }
    ::grpc::Status SLRoutev4GlobalStatsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg& request, ::service_layer::SLRouteGlobalStatsGetMsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLRouteGlobalStatsGetMsgRsp>> AsyncSLRoutev4GlobalStatsGet(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLRouteGlobalStatsGetMsgRsp>>(AsyncSLRoutev4GlobalStatsGetRaw(context, request, cq));
    }
    ::grpc::Status SLRoutev4VrfRegOp(::grpc::ClientContext* context, const ::service_layer::SLVrfRegMsg& request, ::service_layer::SLVrfRegMsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLVrfRegMsgRsp>> AsyncSLRoutev4VrfRegOp(::grpc::ClientContext* context, const ::service_layer::SLVrfRegMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLVrfRegMsgRsp>>(AsyncSLRoutev4VrfRegOpRaw(context, request, cq));
    }
    ::grpc::Status SLRoutev4VrfRegGet(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::service_layer::SLVrfRegGetMsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLVrfRegGetMsgRsp>> AsyncSLRoutev4VrfRegGet(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLVrfRegGetMsgRsp>>(AsyncSLRoutev4VrfRegGetRaw(context, request, cq));
    }
    ::grpc::Status SLRoutev4VrfGetStats(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::service_layer::SLVRFGetStatsMsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLVRFGetStatsMsgRsp>> AsyncSLRoutev4VrfGetStats(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLVRFGetStatsMsgRsp>>(AsyncSLRoutev4VrfGetStatsRaw(context, request, cq));
    }
    ::grpc::Status SLRoutev4Op(::grpc::ClientContext* context, const ::service_layer::SLRoutev4Msg& request, ::service_layer::SLRoutev4MsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLRoutev4MsgRsp>> AsyncSLRoutev4Op(::grpc::ClientContext* context, const ::service_layer::SLRoutev4Msg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLRoutev4MsgRsp>>(AsyncSLRoutev4OpRaw(context, request, cq));
    }
    ::grpc::Status SLRoutev4Get(::grpc::ClientContext* context, const ::service_layer::SLRoutev4GetMsg& request, ::service_layer::SLRoutev4GetMsgRsp* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLRoutev4GetMsgRsp>> AsyncSLRoutev4Get(::grpc::ClientContext* context, const ::service_layer::SLRoutev4GetMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::service_layer::SLRoutev4GetMsgRsp>>(AsyncSLRoutev4GetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::service_layer::SLRoutev4Msg, ::service_layer::SLRoutev4MsgRsp>> SLRoutev4OpStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::service_layer::SLRoutev4Msg, ::service_layer::SLRoutev4MsgRsp>>(SLRoutev4OpStreamRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::service_layer::SLRoutev4Msg, ::service_layer::SLRoutev4MsgRsp>> AsyncSLRoutev4OpStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::service_layer::SLRoutev4Msg, ::service_layer::SLRoutev4MsgRsp>>(AsyncSLRoutev4OpStreamRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::service_layer::SLRoutev4GetMsg, ::service_layer::SLRoutev4GetMsgRsp>> SLRoutev4GetStream(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::service_layer::SLRoutev4GetMsg, ::service_layer::SLRoutev4GetMsgRsp>>(SLRoutev4GetStreamRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::service_layer::SLRoutev4GetMsg, ::service_layer::SLRoutev4GetMsgRsp>> AsyncSLRoutev4GetStream(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::service_layer::SLRoutev4GetMsg, ::service_layer::SLRoutev4GetMsgRsp>>(AsyncSLRoutev4GetStreamRaw(context, cq, tag));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLRouteGlobalsGetMsgRsp>* AsyncSLRoutev4GlobalsGetRaw(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalsGetMsg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLRouteGlobalStatsGetMsgRsp>* AsyncSLRoutev4GlobalStatsGetRaw(::grpc::ClientContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLVrfRegMsgRsp>* AsyncSLRoutev4VrfRegOpRaw(::grpc::ClientContext* context, const ::service_layer::SLVrfRegMsg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLVrfRegGetMsgRsp>* AsyncSLRoutev4VrfRegGetRaw(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLVRFGetStatsMsgRsp>* AsyncSLRoutev4VrfGetStatsRaw(::grpc::ClientContext* context, const ::service_layer::SLVrfRegGetMsg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLRoutev4MsgRsp>* AsyncSLRoutev4OpRaw(::grpc::ClientContext* context, const ::service_layer::SLRoutev4Msg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::service_layer::SLRoutev4GetMsgRsp>* AsyncSLRoutev4GetRaw(::grpc::ClientContext* context, const ::service_layer::SLRoutev4GetMsg& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientReaderWriter< ::service_layer::SLRoutev4Msg, ::service_layer::SLRoutev4MsgRsp>* SLRoutev4OpStreamRaw(::grpc::ClientContext* context) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReaderWriter< ::service_layer::SLRoutev4Msg, ::service_layer::SLRoutev4MsgRsp>* AsyncSLRoutev4OpStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    ::grpc::ClientReaderWriter< ::service_layer::SLRoutev4GetMsg, ::service_layer::SLRoutev4GetMsgRsp>* SLRoutev4GetStreamRaw(::grpc::ClientContext* context) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReaderWriter< ::service_layer::SLRoutev4GetMsg, ::service_layer::SLRoutev4GetMsgRsp>* AsyncSLRoutev4GetStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_SLRoutev4GlobalsGet_;
    const ::grpc::RpcMethod rpcmethod_SLRoutev4GlobalStatsGet_;
    const ::grpc::RpcMethod rpcmethod_SLRoutev4VrfRegOp_;
    const ::grpc::RpcMethod rpcmethod_SLRoutev4VrfRegGet_;
    const ::grpc::RpcMethod rpcmethod_SLRoutev4VrfGetStats_;
    const ::grpc::RpcMethod rpcmethod_SLRoutev4Op_;
    const ::grpc::RpcMethod rpcmethod_SLRoutev4Get_;
    const ::grpc::RpcMethod rpcmethod_SLRoutev4OpStream_;
    const ::grpc::RpcMethod rpcmethod_SLRoutev4GetStream_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SLRoutev4GlobalsGet(::grpc::ServerContext* context, const ::service_layer::SLRouteGlobalsGetMsg* request, ::service_layer::SLRouteGlobalsGetMsgRsp* response);
    virtual ::grpc::Status SLRoutev4GlobalStatsGet(::grpc::ServerContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg* request, ::service_layer::SLRouteGlobalStatsGetMsgRsp* response);
    virtual ::grpc::Status SLRoutev4VrfRegOp(::grpc::ServerContext* context, const ::service_layer::SLVrfRegMsg* request, ::service_layer::SLVrfRegMsgRsp* response);
    virtual ::grpc::Status SLRoutev4VrfRegGet(::grpc::ServerContext* context, const ::service_layer::SLVrfRegGetMsg* request, ::service_layer::SLVrfRegGetMsgRsp* response);
    virtual ::grpc::Status SLRoutev4VrfGetStats(::grpc::ServerContext* context, const ::service_layer::SLVrfRegGetMsg* request, ::service_layer::SLVRFGetStatsMsgRsp* response);
    virtual ::grpc::Status SLRoutev4Op(::grpc::ServerContext* context, const ::service_layer::SLRoutev4Msg* request, ::service_layer::SLRoutev4MsgRsp* response);
    virtual ::grpc::Status SLRoutev4Get(::grpc::ServerContext* context, const ::service_layer::SLRoutev4GetMsg* request, ::service_layer::SLRoutev4GetMsgRsp* response);
    virtual ::grpc::Status SLRoutev4OpStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::service_layer::SLRoutev4MsgRsp, ::service_layer::SLRoutev4Msg>* stream);
    virtual ::grpc::Status SLRoutev4GetStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::service_layer::SLRoutev4GetMsgRsp, ::service_layer::SLRoutev4GetMsg>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev4GlobalsGet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev4GlobalsGet() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SLRoutev4GlobalsGet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4GlobalsGet(::grpc::ServerContext* context, const ::service_layer::SLRouteGlobalsGetMsg* request, ::service_layer::SLRouteGlobalsGetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev4GlobalsGet(::grpc::ServerContext* context, ::service_layer::SLRouteGlobalsGetMsg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLRouteGlobalsGetMsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev4GlobalStatsGet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev4GlobalStatsGet() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_SLRoutev4GlobalStatsGet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4GlobalStatsGet(::grpc::ServerContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg* request, ::service_layer::SLRouteGlobalStatsGetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev4GlobalStatsGet(::grpc::ServerContext* context, ::service_layer::SLRouteGlobalStatsGetMsg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLRouteGlobalStatsGetMsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev4VrfRegOp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev4VrfRegOp() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_SLRoutev4VrfRegOp() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4VrfRegOp(::grpc::ServerContext* context, const ::service_layer::SLVrfRegMsg* request, ::service_layer::SLVrfRegMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev4VrfRegOp(::grpc::ServerContext* context, ::service_layer::SLVrfRegMsg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLVrfRegMsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev4VrfRegGet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev4VrfRegGet() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_SLRoutev4VrfRegGet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4VrfRegGet(::grpc::ServerContext* context, const ::service_layer::SLVrfRegGetMsg* request, ::service_layer::SLVrfRegGetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev4VrfRegGet(::grpc::ServerContext* context, ::service_layer::SLVrfRegGetMsg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLVrfRegGetMsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev4VrfGetStats : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev4VrfGetStats() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_SLRoutev4VrfGetStats() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4VrfGetStats(::grpc::ServerContext* context, const ::service_layer::SLVrfRegGetMsg* request, ::service_layer::SLVRFGetStatsMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev4VrfGetStats(::grpc::ServerContext* context, ::service_layer::SLVrfRegGetMsg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLVRFGetStatsMsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(4, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev4Op : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev4Op() {
      ::grpc::Service::MarkMethodAsync(5);
    }
    ~WithAsyncMethod_SLRoutev4Op() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4Op(::grpc::ServerContext* context, const ::service_layer::SLRoutev4Msg* request, ::service_layer::SLRoutev4MsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev4Op(::grpc::ServerContext* context, ::service_layer::SLRoutev4Msg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLRoutev4MsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(5, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev4Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev4Get() {
      ::grpc::Service::MarkMethodAsync(6);
    }
    ~WithAsyncMethod_SLRoutev4Get() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4Get(::grpc::ServerContext* context, const ::service_layer::SLRoutev4GetMsg* request, ::service_layer::SLRoutev4GetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev4Get(::grpc::ServerContext* context, ::service_layer::SLRoutev4GetMsg* request, ::grpc::ServerAsyncResponseWriter< ::service_layer::SLRoutev4GetMsgRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(6, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev4OpStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev4OpStream() {
      ::grpc::Service::MarkMethodAsync(7);
    }
    ~WithAsyncMethod_SLRoutev4OpStream() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4OpStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::service_layer::SLRoutev4MsgRsp, ::service_layer::SLRoutev4Msg>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev4OpStream(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::service_layer::SLRoutev4MsgRsp, ::service_layer::SLRoutev4Msg>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(7, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SLRoutev4GetStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SLRoutev4GetStream() {
      ::grpc::Service::MarkMethodAsync(8);
    }
    ~WithAsyncMethod_SLRoutev4GetStream() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4GetStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::service_layer::SLRoutev4GetMsgRsp, ::service_layer::SLRoutev4GetMsg>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSLRoutev4GetStream(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::service_layer::SLRoutev4GetMsgRsp, ::service_layer::SLRoutev4GetMsg>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(8, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SLRoutev4GlobalsGet<WithAsyncMethod_SLRoutev4GlobalStatsGet<WithAsyncMethod_SLRoutev4VrfRegOp<WithAsyncMethod_SLRoutev4VrfRegGet<WithAsyncMethod_SLRoutev4VrfGetStats<WithAsyncMethod_SLRoutev4Op<WithAsyncMethod_SLRoutev4Get<WithAsyncMethod_SLRoutev4OpStream<WithAsyncMethod_SLRoutev4GetStream<Service > > > > > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_SLRoutev4GlobalsGet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev4GlobalsGet() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SLRoutev4GlobalsGet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4GlobalsGet(::grpc::ServerContext* context, const ::service_layer::SLRouteGlobalsGetMsg* request, ::service_layer::SLRouteGlobalsGetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLRoutev4GlobalStatsGet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev4GlobalStatsGet() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_SLRoutev4GlobalStatsGet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4GlobalStatsGet(::grpc::ServerContext* context, const ::service_layer::SLRouteGlobalStatsGetMsg* request, ::service_layer::SLRouteGlobalStatsGetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLRoutev4VrfRegOp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev4VrfRegOp() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_SLRoutev4VrfRegOp() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4VrfRegOp(::grpc::ServerContext* context, const ::service_layer::SLVrfRegMsg* request, ::service_layer::SLVrfRegMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLRoutev4VrfRegGet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev4VrfRegGet() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_SLRoutev4VrfRegGet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4VrfRegGet(::grpc::ServerContext* context, const ::service_layer::SLVrfRegGetMsg* request, ::service_layer::SLVrfRegGetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLRoutev4VrfGetStats : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev4VrfGetStats() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_SLRoutev4VrfGetStats() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4VrfGetStats(::grpc::ServerContext* context, const ::service_layer::SLVrfRegGetMsg* request, ::service_layer::SLVRFGetStatsMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLRoutev4Op : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev4Op() {
      ::grpc::Service::MarkMethodGeneric(5);
    }
    ~WithGenericMethod_SLRoutev4Op() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4Op(::grpc::ServerContext* context, const ::service_layer::SLRoutev4Msg* request, ::service_layer::SLRoutev4MsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLRoutev4Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev4Get() {
      ::grpc::Service::MarkMethodGeneric(6);
    }
    ~WithGenericMethod_SLRoutev4Get() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4Get(::grpc::ServerContext* context, const ::service_layer::SLRoutev4GetMsg* request, ::service_layer::SLRoutev4GetMsgRsp* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLRoutev4OpStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev4OpStream() {
      ::grpc::Service::MarkMethodGeneric(7);
    }
    ~WithGenericMethod_SLRoutev4OpStream() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4OpStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::service_layer::SLRoutev4MsgRsp, ::service_layer::SLRoutev4Msg>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SLRoutev4GetStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SLRoutev4GetStream() {
      ::grpc::Service::MarkMethodGeneric(8);
    }
    ~WithGenericMethod_SLRoutev4GetStream() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SLRoutev4GetStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::service_layer::SLRoutev4GetMsgRsp, ::service_layer::SLRoutev4GetMsg>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace service_layer


#endif  // GRPC_sl_5froute_5fipv4_2eproto__INCLUDED