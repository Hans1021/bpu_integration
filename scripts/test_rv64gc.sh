#!/usr/bin/env bash
set -e

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
CVW="$ROOT/cvw"

cd "$CVW"
source ./setup.sh

CONFIG=rv64gc
SIM=verilator

tests=(
    arch64i
    arch64m
    arch64c
    arch64priv

    arch64a_amo
    wally64a_lrsc

    arch64f
    arch64d
    arch64zfh

    arch64f_fma
    arch64d_fma
    arch64zfh_fma

    arch64f_divsqrt
    arch64d_divsqrt
    arch64zfh_divsqrt

    arch64zfaf
    arch64zfad

    arch64zcb
    arch64zifencei
    arch64zicond

    arch64zba
    arch64zbb
    arch64zbc
    arch64zbs

    arch64zbkb
    arch64zbkc
    arch64zbkx

    arch64zknd
    arch64zkne
    arch64zknh

    arch64vm_sv39
    arch64vm_sv48

    arch64pmp
    arch64zicboz

    wally64periph
)

for test in "${tests[@]}"; do
    echo
    echo "========================================"
    echo "Running $CONFIG / $test"
    echo "========================================"

    wsim "$CONFIG" "$test" --sim "$SIM"
done

echo
echo "All RV64GC BPU integration tests passed."