void B-Mu()
{
//=========Macro generated from canvas: x_slice_canvas/x
//=========  (Thu Nov 10 15:53:18 2016) by ROOT version6.06/01
   TCanvas *x_slice_canvas = new TCanvas("x_slice_canvas", "x",0,23,1024,768);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   x_slice_canvas->SetHighLightColor(2);
   x_slice_canvas->Range(-0.8048831,-1.142857,4.255954,4.571429);
   x_slice_canvas->SetFillColor(0);
   x_slice_canvas->SetBorderMode(0);
   x_slice_canvas->SetBorderSize(2);
   x_slice_canvas->SetLogx();
   x_slice_canvas->SetLogy();
   x_slice_canvas->SetGridx();
   x_slice_canvas->SetGridy();
   x_slice_canvas->SetTickx(1);
   x_slice_canvas->SetTicky(1);
   x_slice_canvas->SetLeftMargin(0.15);
   x_slice_canvas->SetRightMargin(0.24);
   x_slice_canvas->SetBottomMargin(0.2);
   x_slice_canvas->SetFrameFillStyle(0);
   x_slice_canvas->SetFrameBorderMode(0);
   x_slice_canvas->SetFrameFillStyle(0);
   x_slice_canvas->SetFrameBorderMode(0);
   
   Double_t x_1000_expUp_graph_fx1[17] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   400,
   500,
   700,
   1000};
   Double_t x_1000_expUp_graph_fy1[17] = {
   762.0674,
   105.6844,
   50.90107,
   24.91133,
   17.17372,
   12.50083,
   7.719532,
   6.757929,
   6.112734,
   6.063438,
   6.223705,
   6.933058,
   8.123851,
   9.632188,
   11.37868,
   15.18922,
   21.69888};
   TGraph *graph = new TGraph(17,x_1000_expUp_graph_fx1,x_1000_expUp_graph_fy1);
   graph->SetName("x_1000_expUp_graph");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933cc");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9933cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#9933cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_1000_expUp_graph1 = new TH1F("Graph_x_1000_expUp_graph1","Graph",100,0.9,1099.9);
   Graph_x_1000_expUp_graph1->SetMinimum(1);
   Graph_x_1000_expUp_graph1->SetMaximum(10000);
   Graph_x_1000_expUp_graph1->SetDirectory(0);
   Graph_x_1000_expUp_graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_1000_expUp_graph1->SetLineColor(ci);
   Graph_x_1000_expUp_graph1->GetXaxis()->SetTitle("c#tau_{0} [mm]");
   Graph_x_1000_expUp_graph1->GetXaxis()->SetLabelFont(42);
   Graph_x_1000_expUp_graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_x_1000_expUp_graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_x_1000_expUp_graph1->GetXaxis()->SetTitleFont(42);
   Graph_x_1000_expUp_graph1->GetYaxis()->SetTitle("#sigma x BR^{2} Upper Limit 95% [fb]");
   Graph_x_1000_expUp_graph1->GetYaxis()->SetLabelFont(42);
   Graph_x_1000_expUp_graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_x_1000_expUp_graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_x_1000_expUp_graph1->GetYaxis()->SetTitleFont(42);
   Graph_x_1000_expUp_graph1->GetZaxis()->SetLabelFont(42);
   Graph_x_1000_expUp_graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_x_1000_expUp_graph1->GetZaxis()->SetTitleSize(0.06);
   Graph_x_1000_expUp_graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_1000_expUp_graph1);
   
   graph->Draw("alp");
   
   Double_t x_1000_expUp_graph_fx2[17] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   400,
   500,
   700,
   1000};
   Double_t x_1000_expUp_graph_fy2[17] = {
   762.0674,
   105.6844,
   50.90107,
   24.91133,
   17.17372,
   12.50083,
   7.719532,
   6.757929,
   6.112734,
   6.063438,
   6.223705,
   6.933058,
   8.123851,
   9.632188,
   11.37868,
   15.18922,
   21.69888};
   graph = new TGraph(17,x_1000_expUp_graph_fx2,x_1000_expUp_graph_fy2);
   graph->SetName("x_1000_expUp_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9933cc");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9933cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#9933cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_Graph_x_1000_expUp_graph12 = new TH1F("Graph_Graph_x_1000_expUp_graph12","Graph",100,0.9,1099.9);
   Graph_Graph_x_1000_expUp_graph12->SetMinimum(1);
   Graph_Graph_x_1000_expUp_graph12->SetMaximum(10000);
   Graph_Graph_x_1000_expUp_graph12->SetDirectory(0);
   Graph_Graph_x_1000_expUp_graph12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_x_1000_expUp_graph12->SetLineColor(ci);
   Graph_Graph_x_1000_expUp_graph12->GetXaxis()->SetTitle("c#tau_{0} [mm]");
   Graph_Graph_x_1000_expUp_graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph_x_1000_expUp_graph12->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_x_1000_expUp_graph12->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_x_1000_expUp_graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph_x_1000_expUp_graph12->GetYaxis()->SetTitle("#sigma x BR^{2} Upper Limit 95% [fb]");
   Graph_Graph_x_1000_expUp_graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph_x_1000_expUp_graph12->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_x_1000_expUp_graph12->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_x_1000_expUp_graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph_x_1000_expUp_graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph_x_1000_expUp_graph12->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_x_1000_expUp_graph12->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_x_1000_expUp_graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_x_1000_expUp_graph12);
   
   graph->Draw("lp");
   
   Double_t x_300_exp_graph_fx3[17] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   400,
   500,
   700,
   1000};
   Double_t x_300_exp_graph_fy3[17] = {
   3143,
   858.25,
   240.5,
   100.25,
   65.25,
   45.125,
   27.9375,
   24.8125,
   24.5625,
   26.375,
   30.625,
   44.375,
   64.75,
   87.5,
   112,
   167.25,
   263.625};
   graph = new TGraph(17,x_300_exp_graph_fx3,x_300_exp_graph_fy3);
   graph->SetName("x_300_exp_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9999ff");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9999ff");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#9999ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_300_exp_graph3 = new TH1F("Graph_x_300_exp_graph3","Graph",100,0.9,1099.9);
   Graph_x_300_exp_graph3->SetMinimum(22.10625);
   Graph_x_300_exp_graph3->SetMaximum(3454.844);
   Graph_x_300_exp_graph3->SetDirectory(0);
   Graph_x_300_exp_graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_300_exp_graph3->SetLineColor(ci);
   Graph_x_300_exp_graph3->GetXaxis()->SetLabelFont(42);
   Graph_x_300_exp_graph3->GetXaxis()->SetLabelSize(0.05);
   Graph_x_300_exp_graph3->GetXaxis()->SetTitleSize(0.06);
   Graph_x_300_exp_graph3->GetXaxis()->SetTitleFont(42);
   Graph_x_300_exp_graph3->GetYaxis()->SetLabelFont(42);
   Graph_x_300_exp_graph3->GetYaxis()->SetLabelSize(0.05);
   Graph_x_300_exp_graph3->GetYaxis()->SetTitleSize(0.06);
   Graph_x_300_exp_graph3->GetYaxis()->SetTitleFont(42);
   Graph_x_300_exp_graph3->GetZaxis()->SetLabelFont(42);
   Graph_x_300_exp_graph3->GetZaxis()->SetLabelSize(0.05);
   Graph_x_300_exp_graph3->GetZaxis()->SetTitleSize(0.06);
   Graph_x_300_exp_graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_300_exp_graph3);
   
   graph->Draw("lp");
   
   Double_t x_1000_expDn_graph_fx4[17] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   400,
   500,
   700,
   1000};
   Double_t x_1000_expDn_graph_fy4[17] = {
   234.9932,
   36.71673,
   17.81631,
   8.72262,
   6.034583,
   4.433571,
   2.749332,
   2.396781,
   2.179168,
   2.145952,
   2.207312,
   2.463787,
   2.896123,
   3.43384,
   4.056459,
   5.437757,
   7.833521};
   graph = new TGraph(17,x_1000_expDn_graph_fx4,x_1000_expDn_graph_fy4);
   graph->SetName("x_1000_expDn_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9933cc");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9933cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#9933cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_1000_expDn_graph4 = new TH1F("Graph_x_1000_expDn_graph4","Graph",100,0.9,1099.9);
   Graph_x_1000_expDn_graph4->SetMinimum(1.931357);
   Graph_x_1000_expDn_graph4->SetMaximum(258.2779);
   Graph_x_1000_expDn_graph4->SetDirectory(0);
   Graph_x_1000_expDn_graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_1000_expDn_graph4->SetLineColor(ci);
   Graph_x_1000_expDn_graph4->GetXaxis()->SetLabelFont(42);
   Graph_x_1000_expDn_graph4->GetXaxis()->SetLabelSize(0.05);
   Graph_x_1000_expDn_graph4->GetXaxis()->SetTitleSize(0.06);
   Graph_x_1000_expDn_graph4->GetXaxis()->SetTitleFont(42);
   Graph_x_1000_expDn_graph4->GetYaxis()->SetLabelFont(42);
   Graph_x_1000_expDn_graph4->GetYaxis()->SetLabelSize(0.05);
   Graph_x_1000_expDn_graph4->GetYaxis()->SetTitleSize(0.06);
   Graph_x_1000_expDn_graph4->GetYaxis()->SetTitleFont(42);
   Graph_x_1000_expDn_graph4->GetZaxis()->SetLabelFont(42);
   Graph_x_1000_expDn_graph4->GetZaxis()->SetLabelSize(0.05);
   Graph_x_1000_expDn_graph4->GetZaxis()->SetTitleSize(0.06);
   Graph_x_1000_expDn_graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_1000_expDn_graph4);
   
   graph->Draw("lp");
   
   Double_t x_300_expUp_graph_fx5[17] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   400,
   500,
   700,
   1000};
   Double_t x_300_expUp_graph_fy5[17] = {
   5573.458,
   1727.189,
   411.1385,
   172.9773,
   111.5459,
   77.14189,
   47.31415,
   41.62613,
   41.20672,
   44.24742,
   51.37733,
   74.09095,
   108.6264,
   146.7924,
   187.8943,
   280.5832,
   442.2645};
   graph = new TGraph(17,x_300_expUp_graph_fx5,x_300_expUp_graph_fy5);
   graph->SetName("x_300_expUp_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9999ff");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9999ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#9999ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_300_expUp_graph5 = new TH1F("Graph_x_300_expUp_graph5","Graph",100,0.9,1099.9);
   Graph_x_300_expUp_graph5->SetMinimum(37.08605);
   Graph_x_300_expUp_graph5->SetMaximum(6126.683);
   Graph_x_300_expUp_graph5->SetDirectory(0);
   Graph_x_300_expUp_graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_300_expUp_graph5->SetLineColor(ci);
   Graph_x_300_expUp_graph5->GetXaxis()->SetLabelFont(42);
   Graph_x_300_expUp_graph5->GetXaxis()->SetLabelSize(0.05);
   Graph_x_300_expUp_graph5->GetXaxis()->SetTitleSize(0.06);
   Graph_x_300_expUp_graph5->GetXaxis()->SetTitleFont(42);
   Graph_x_300_expUp_graph5->GetYaxis()->SetLabelFont(42);
   Graph_x_300_expUp_graph5->GetYaxis()->SetLabelSize(0.05);
   Graph_x_300_expUp_graph5->GetYaxis()->SetTitleSize(0.06);
   Graph_x_300_expUp_graph5->GetYaxis()->SetTitleFont(42);
   Graph_x_300_expUp_graph5->GetZaxis()->SetLabelFont(42);
   Graph_x_300_expUp_graph5->GetZaxis()->SetLabelSize(0.05);
   Graph_x_300_expUp_graph5->GetZaxis()->SetTitleSize(0.06);
   Graph_x_300_expUp_graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_300_expUp_graph5);
   
   graph->Draw("lp");
   
   Double_t x_300_obs_graph_fx6[17] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   400,
   500,
   700,
   1000};
   Double_t x_300_obs_graph_fy6[17] = {
   3038.36,
   828.7576,
   233.2053,
   97.27269,
   63.15486,
   43.83941,
   27.09556,
   24.02539,
   23.80315,
   25.64666,
   29.69627,
   42.83059,
   62.80632,
   84.87859,
   108.6836,
   162.1909,
   255.8071};
   graph = new TGraph(17,x_300_obs_graph_fx6,x_300_obs_graph_fy6);
   graph->SetName("x_300_obs_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9999ff");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9999ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#9999ff");
   graph->SetMarkerColor(ci);
   
   TH1F *Graph_x_300_obs_graph6 = new TH1F("Graph_x_300_obs_graph6","Graph",100,0.9,1099.9);
   Graph_x_300_obs_graph6->SetMinimum(21.42283);
   Graph_x_300_obs_graph6->SetMaximum(3339.816);
   Graph_x_300_obs_graph6->SetDirectory(0);
   Graph_x_300_obs_graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_300_obs_graph6->SetLineColor(ci);
   Graph_x_300_obs_graph6->GetXaxis()->SetLabelFont(42);
   Graph_x_300_obs_graph6->GetXaxis()->SetLabelSize(0.05);
   Graph_x_300_obs_graph6->GetXaxis()->SetTitleSize(0.06);
   Graph_x_300_obs_graph6->GetXaxis()->SetTitleFont(42);
   Graph_x_300_obs_graph6->GetYaxis()->SetLabelFont(42);
   Graph_x_300_obs_graph6->GetYaxis()->SetLabelSize(0.05);
   Graph_x_300_obs_graph6->GetYaxis()->SetTitleSize(0.06);
   Graph_x_300_obs_graph6->GetYaxis()->SetTitleFont(42);
   Graph_x_300_obs_graph6->GetZaxis()->SetLabelFont(42);
   Graph_x_300_obs_graph6->GetZaxis()->SetLabelSize(0.05);
   Graph_x_300_obs_graph6->GetZaxis()->SetTitleSize(0.06);
   Graph_x_300_obs_graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_300_obs_graph6);
   
   graph->Draw("lp");
   
   Double_t x_1000_obs_graph_fx7[17] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   400,
   500,
   700,
   1000};
   Double_t x_1000_obs_graph_fy7[17] = {
   394.8098,
   59.28163,
   28.63151,
   14.03191,
   9.664879,
   7.092265,
   4.390041,
   3.838411,
   3.496574,
   3.447238,
   3.539418,
   3.983393,
   4.668523,
   5.51817,
   6.49657,
   8.701006,
   12.48688};
   graph = new TGraph(17,x_1000_obs_graph_fx7,x_1000_obs_graph_fy7);
   graph->SetName("x_1000_obs_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9933cc");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9933cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#9933cc");
   graph->SetMarkerColor(ci);
   
   TH1F *Graph_x_1000_obs_graph7 = new TH1F("Graph_x_1000_obs_graph7","Graph",100,0.9,1099.9);
   Graph_x_1000_obs_graph7->SetMinimum(3.102514);
   Graph_x_1000_obs_graph7->SetMaximum(433.9461);
   Graph_x_1000_obs_graph7->SetDirectory(0);
   Graph_x_1000_obs_graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_1000_obs_graph7->SetLineColor(ci);
   Graph_x_1000_obs_graph7->GetXaxis()->SetLabelFont(42);
   Graph_x_1000_obs_graph7->GetXaxis()->SetLabelSize(0.05);
   Graph_x_1000_obs_graph7->GetXaxis()->SetTitleSize(0.06);
   Graph_x_1000_obs_graph7->GetXaxis()->SetTitleFont(42);
   Graph_x_1000_obs_graph7->GetYaxis()->SetLabelFont(42);
   Graph_x_1000_obs_graph7->GetYaxis()->SetLabelSize(0.05);
   Graph_x_1000_obs_graph7->GetYaxis()->SetTitleSize(0.06);
   Graph_x_1000_obs_graph7->GetYaxis()->SetTitleFont(42);
   Graph_x_1000_obs_graph7->GetZaxis()->SetLabelFont(42);
   Graph_x_1000_obs_graph7->GetZaxis()->SetLabelSize(0.05);
   Graph_x_1000_obs_graph7->GetZaxis()->SetTitleSize(0.06);
   Graph_x_1000_obs_graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_1000_obs_graph7);
   
   graph->Draw("lp");
   
   Double_t x_1000_exp_graph_fx8[17] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   400,
   500,
   700,
   1000};
   Double_t x_1000_exp_graph_fy8[17] = {
   407.75,
   61.25,
   29.5,
   14.4375,
   9.953125,
   7.3125,
   4.515625,
   3.953125,
   3.609375,
   3.546875,
   3.640625,
   4.09375,
   4.796875,
   5.6875,
   6.71875,
   8.96875,
   12.8125};
   graph = new TGraph(17,x_1000_exp_graph_fx8,x_1000_exp_graph_fy8);
   graph->SetName("x_1000_exp_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9933cc");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9933cc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);

   ci = TColor::GetColor("#9933cc");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_1000_exp_graph8 = new TH1F("Graph_x_1000_exp_graph8","Graph",100,0.9,1099.9);
   Graph_x_1000_exp_graph8->SetMinimum(3.192188);
   Graph_x_1000_exp_graph8->SetMaximum(448.1703);
   Graph_x_1000_exp_graph8->SetDirectory(0);
   Graph_x_1000_exp_graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_1000_exp_graph8->SetLineColor(ci);
   Graph_x_1000_exp_graph8->GetXaxis()->SetLabelFont(42);
   Graph_x_1000_exp_graph8->GetXaxis()->SetLabelSize(0.05);
   Graph_x_1000_exp_graph8->GetXaxis()->SetTitleSize(0.06);
   Graph_x_1000_exp_graph8->GetXaxis()->SetTitleFont(42);
   Graph_x_1000_exp_graph8->GetYaxis()->SetLabelFont(42);
   Graph_x_1000_exp_graph8->GetYaxis()->SetLabelSize(0.05);
   Graph_x_1000_exp_graph8->GetYaxis()->SetTitleSize(0.06);
   Graph_x_1000_exp_graph8->GetYaxis()->SetTitleFont(42);
   Graph_x_1000_exp_graph8->GetZaxis()->SetLabelFont(42);
   Graph_x_1000_exp_graph8->GetZaxis()->SetLabelSize(0.05);
   Graph_x_1000_exp_graph8->GetZaxis()->SetTitleSize(0.06);
   Graph_x_1000_exp_graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_1000_exp_graph8);
   
   graph->Draw("lp");
   
   Double_t x_300_expDn_graph_fx9[17] = {
   1,
   2,
   3,
   5,
   7,
   10,
   20,
   30,
   50,
   70,
   100,
   200,
   300,
   400,
   500,
   700,
   1000};
   Double_t x_300_expDn_graph_fy9[17] = {
   1894.835,
   472.8881,
   147.162,
   61.08449,
   39.75823,
   27.76176,
   17.29447,
   15.35997,
   15.2678,
   16.39443,
   19.03618,
   27.69612,
   40.41293,
   54.3891,
   69.61804,
   103.9609,
   163.8666};
   graph = new TGraph(17,x_300_expDn_graph_fx9,x_300_expDn_graph_fy9);
   graph->SetName("x_300_expDn_graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9999ff");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9999ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#9999ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerSize(1.1);
   
   TH1F *Graph_x_300_expDn_graph9 = new TH1F("Graph_x_300_expDn_graph9","Graph",100,0.9,1099.9);
   Graph_x_300_expDn_graph9->SetMinimum(13.74102);
   Graph_x_300_expDn_graph9->SetMaximum(2082.792);
   Graph_x_300_expDn_graph9->SetDirectory(0);
   Graph_x_300_expDn_graph9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_x_300_expDn_graph9->SetLineColor(ci);
   Graph_x_300_expDn_graph9->GetXaxis()->SetLabelFont(42);
   Graph_x_300_expDn_graph9->GetXaxis()->SetLabelSize(0.05);
   Graph_x_300_expDn_graph9->GetXaxis()->SetTitleSize(0.06);
   Graph_x_300_expDn_graph9->GetXaxis()->SetTitleFont(42);
   Graph_x_300_expDn_graph9->GetYaxis()->SetLabelFont(42);
   Graph_x_300_expDn_graph9->GetYaxis()->SetLabelSize(0.05);
   Graph_x_300_expDn_graph9->GetYaxis()->SetTitleSize(0.06);
   Graph_x_300_expDn_graph9->GetYaxis()->SetTitleFont(42);
   Graph_x_300_expDn_graph9->GetZaxis()->SetLabelFont(42);
   Graph_x_300_expDn_graph9->GetZaxis()->SetLabelSize(0.05);
   Graph_x_300_expDn_graph9->GetZaxis()->SetTitleSize(0.06);
   Graph_x_300_expDn_graph9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_x_300_expDn_graph9);
   
   graph->Draw("lp");
   
   Double_t Graph0_fx1001[5] = {
   0.1,
   10,
   100,
   1000,
   10000};
   Double_t Graph0_fy1001[5] = {
   28.3338,
   28.3338,
   28.3338,
   28.3338,
   28.3338};
   Double_t Graph0_fex1001[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[5] = {
   4.015183,
   4.015183,
   4.015183,
   4.015183,
   4.015183};
   gre = new TGraphErrors(5,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3002);

   ci = TColor::GetColor("#006600");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,0.09,10999.99);
   Graph_Graph1001->SetMinimum(23.51558);
   Graph_Graph1001->SetMaximum(33.15202);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("lp");
   
   Double_t Graph1_fx1002[5] = {
   0.1,
   10,
   100,
   1000,
   10000};
   Double_t Graph1_fy1002[5] = {
   6.15134,
   6.15134,
   6.15134,
   6.15134,
   6.15134};
   Double_t Graph1_fex1002[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1002[5] = {
   1.002379,
   1.002379,
   1.002379,
   1.002379,
   1.002379};
   gre = new TGraphErrors(5,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3002);

   ci = TColor::GetColor("#003300");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,0.09,10999.99);
   Graph_Graph1002->SetMinimum(4.948485);
   Graph_Graph1002->SetMaximum(7.354195);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("lp");
   
   Double_t Graph2_fx1003[5] = {
   0.1,
   10,
   100,
   1000,
   10000};
   Double_t Graph2_fy1003[5] = {
   174.599,
   174.599,
   174.599,
   174.599,
   174.599};
   Double_t Graph2_fex1003[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1003[5] = {
   23.05999,
   23.05999,
   23.05999,
   23.05999,
   23.05999};
   gre = new TGraphErrors(5,Graph2_fx1003,Graph2_fy1003,Graph2_fex1003,Graph2_fey1003);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3002);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,0.09,10999.99);
   Graph_Graph1003->SetMinimum(146.927);
   Graph_Graph1003->SetMaximum(202.271);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("lp");
   
   Double_t Graph3_fx1004[5] = {
   0.1,
   10,
   100,
   1000,
   10000};
   Double_t Graph3_fy1004[5] = {
   8516.15,
   8516.15,
   8516.15,
   8516.15,
   8516.15};
   Double_t Graph3_fex1004[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1004[5] = {
   1185.644,
   1185.644,
   1185.644,
   1185.644,
   1185.644};
   gre = new TGraphErrors(5,Graph3_fx1004,Graph3_fy1004,Graph3_fex1004,Graph3_fey1004);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3002);

   ci = TColor::GetColor("#00ff00");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,0.09,10999.99);
   Graph_Graph1004->SetMinimum(7093.377);
   Graph_Graph1004->SetMaximum(9938.923);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("lp");
   
   TLegend *leg = new TLegend(0.7739726,0.204576,0.9843444,0.9044415,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","Exp. Limit #pm 1 #sigma_{exp}","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Obs. Limit","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("x_300_expUp_graph","m_{#tilde{t}}=300 GeV","f");

   ci = TColor::GetColor("#9999ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#9999ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("x_1000_expUp_graph","m_{#tilde{t}}=1000 GeV","f");

   ci = TColor::GetColor("#9933cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#9933cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","#sigma_{NLO+NLL} #tilde{t}#tilde{t}","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","m_{#tilde{t}}=300 GeV","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","m_{#tilde{t}}=600 GeV","l");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","m_{#tilde{t}}=800 GeV","l");

   ci = TColor::GetColor("#006600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","m_{#tilde{t}}=1000 GeV","l");

   ci = TColor::GetColor("#003300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.76,0.92,"2.69 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.055);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.92,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.07);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.17745,0.92,"         Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0532);
   tex->SetLineWidth(2);
   tex->Draw();
   TLine *line = new TLine(0.7825,0.872,0.8195,0.872);
   line->SetLineStyle(7);
   line->SetLineWidth(4);
   line->Draw();
   line = new TLine(0.7825,0.8899,0.8195,0.8899);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.7825,0.8541,0.8195,0.8541);
   line->SetLineWidth(2);
   line->Draw();
      tex = new TLatex(0.175,0.235,"B-Mu");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.065);
   tex->SetLineWidth(2);
   tex->Draw();
   x_slice_canvas->Modified();
   x_slice_canvas->cd();
   x_slice_canvas->SetSelected(x_slice_canvas);
}
