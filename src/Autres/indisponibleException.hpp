#include <stdexcept>
#include <string>

class IndisponibleException : public std::runtime_error {
public:
    explicit IndisponibleException(const std::string& message)
        : std::runtime_error(message) {}
};
