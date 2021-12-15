#include "Workflow.h"
Workflow::Workflow(const string& file) {
    filename = file;
}


void Workflow::parse_config() {
    ConfigR reader(filename);
    prior = reader.read_config();
}

void Workflow::execute() {
    parse_config();
    for (const auto& it : prior) {
        worker = fact.createWorker(it.first, it.second);
        worker->do_work(text);
        if (it.first != "writefile") {
            text = worker->get_result();
        }
    }
}