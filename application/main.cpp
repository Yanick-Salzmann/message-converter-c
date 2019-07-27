#include <iostream>
#include "MessageConverter.grpc.pb.h"
#include <grpcpp/grpcpp.h>

namespace grpc {
    namespace mc = com::six::bic::mc::appl::grpc;
}

class MessageConverterServiceImpl : public grpc::mc::MessageConverterService::Service {
public:
    grpc::Status Recognize(grpc::ServerContext *context, const grpc::mc::RecognizeMessageRequest *request, grpc::mc::RecognizeMessageResponse *response) override {
        return Service::Recognize(context, request, response);
    }

    grpc::Status Convert(grpc::ServerContext *context, const grpc::mc::ConverterRequest *request, grpc::mc::ConverterResponse *response) override {
        response->set_issuccess(true);
        response->set_msg("{1:}{2:}{3:}{4:\r\n-}");
        response->set_uri_msg("urn:message:swfit:fin:543");

        return grpc::Status::OK;
    }

    grpc::Status Validate(grpc::ServerContext *context, const grpc::mc::ValidateRequest *request, grpc::mc::ValidateResponse *response) override {
        return Service::Validate(context, request, response);
    }
};

int main() {
    std::cout << "Starting gRPC server for message converter" << std::endl;

    std::string server_address("0.0.0.0:50051");
    MessageConverterServiceImpl service{};

    grpc::ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;
    server->Wait();
    return 0;
}