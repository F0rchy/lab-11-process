// Copyright 2022 Artem Artemov <theartemka6@mail.ru>

#ifndef INCLUDE_BUILDER_HPP_
#define INCLUDE_BUILDER_HPP_

#include <async++.h>

#include <boost/iostreams/device/file_descriptor.hpp>
#include <boost/iostreams/stream.hpp>
#include <boost/process.hpp>
#include <boost/process/pipe.hpp>
#include <boost/program_options.hpp>
#include <chrono>
#include <csignal>
#include <iostream>
#include <string>
#include <thread>
#include <vector>

using boost::process::child;
using boost::process::execute;
using boost::process::search_path;
using boost::process::initializers::set_args;
using boost::process::initializers::set_on_error;
using boost::program_options::variables_map;
using boost::program_options::options_description;

bool create_child_process(const std::vector<std::string>& command);

#endif  // INCLUDE_BUILDER_HPP_
