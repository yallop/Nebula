open OUnit2

let suites =
  test_list [
    Address_spec.suite;
    Cpu_spec.suite;
    Memory_spec.suite;
    Persistent_queue_spec.suite;
    Program_spec.suite;
    Word_spec.suite;
  ]

let () =
  run_test_tt_main suites