#include <libmimium.hpp>

int main(int argc, const char** argv){
  return std::make_unique<mimium::app::cli::CliApp>(argc, argv)->run();
}