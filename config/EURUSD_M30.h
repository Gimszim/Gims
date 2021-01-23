/*
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_RSI_Params_M30 : Indi_RSI_Params {
  Indi_RSI_Params_M30() : Indi_RSI_Params(indi_rsi_defaults, PERIOD_M30) {
    applied_price = (ENUM_APPLIED_PRICE)2;
    period = 8;
    shift = 0;
  }
} indi_rsi_m30;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_RSI_Params_M30 : StgParams {
  // Struct constructor.
  Stg_RSI_Params_M30() : StgParams(stg_rsi_defaults) {
    lot_size = 0;
    signal_open_method = 63;
    signal_open_filter = 4;
    signal_open_level = (float)30;
    signal_open_boost = 0;
    signal_close_method = 4;
    signal_close_level = (float)10;
    price_stop_method = 1;
    price_stop_level = (float)20;
    tick_filter_method = 1;
    max_spread = 0;
  }
} stg_rsi_m30;
