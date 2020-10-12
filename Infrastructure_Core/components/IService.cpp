#include "IService.h"

IService::IService(int32_t n32Id, const std::string &Name) : IComponent(n32Id, Name) {

    // No implementation.
}

IService::~IService() {

    // No implementation.
}

void IService::AddMate(IComponent *pcMate) noexcept {

    // No implementation.
}
