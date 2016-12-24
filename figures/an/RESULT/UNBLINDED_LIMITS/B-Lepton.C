void B-Lepton()
{
//=========Macro generated from canvas: x_slice_canvas/x
//=========  (Thu Nov 10 15:52:22 2016) by ROOT version6.06/01
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
   419.314,
   72.04,
   34.28389,
   17.03311,
   11.91773,
   8.843067,
   5.79561,
   5.033746,
   4.605779,
   4.503162,
   4.578445,
   5.183398,
   6.122123,
   7.117522,
   8.222895,
   10.64932,
   14.47746};
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
   419.314,
   72.04,
   34.28389,
   17.03311,
   11.91773,
   8.843067,
   5.79561,
   5.033746,
   4.605779,
   4.503162,
   4.578445,
   5.183398,
   6.122123,
   7.117522,
   8.222895,
   10.64932,
   14.47746};
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
   550.5,
   86.8125,
   43.625,
   22.5625,
   16.1875,
   12.21875,
   9.09375,
   8.09375,
   7.84375,
   8.09375,
   8.90625,
   12.8125,
   17.1875,
   22.0625,
   27.375,
   39.125,
   59.25};
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
   Graph_x_300_exp_graph3->SetMinimum(7.059375);
   Graph_x_300_exp_graph3->SetMaximum(604.7656);
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
   134.8761,
   24.00114,
   11.67871,
   5.830676,
   4.066531,
   2.997993,
   1.927056,
   1.684452,
   1.530863,
   1.490645,
   1.525112,
   1.729001,
   2.062096,
   2.430037,
   2.819573,
   3.671237,
   5.06447};
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
   Graph_x_1000_expDn_graph4->SetMinimum(1.34158);
   Graph_x_1000_expDn_graph4->SetMaximum(148.2146);
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
   1020.084,
   151.1756,
   75.27319,
   38.93069,
   27.93088,
   21.08296,
   15.6909,
   13.96544,
   13.40901,
   13.96544,
   15.22537,
   21.90317,
   29.3823,
   37.71619,
   46.36152,
   66.26099,
   100.3441};
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
   Graph_x_300_expUp_graph5->SetMinimum(12.06811);
   Graph_x_300_expUp_graph5->SetMaximum(1120.751);
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
   531.527,
   84.28523,
   42.34783,
   21.92557,
   15.75312,
   11.90806,
   8.832813,
   7.882246,
   7.611251,
   7.900212,
   8.635312,
   12.46599,
   16.75185,
   21.49366,
   26.5624,
   37.92452,
   57.56753};
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
   Graph_x_300_obs_graph6->SetMinimum(6.850126);
   Graph_x_300_obs_graph6->SetMaximum(583.9186);
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
   223.1512,
   39.24918,
   19.11507,
   9.537902,
   6.673394,
   4.943481,
   3.224781,
   2.814652,
   2.568695,
   2.51877,
   2.556899,
   2.895061,
   3.422605,
   4.01363,
   4.648553,
   6.018822,
   8.235964};
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
   Graph_x_1000_obs_graph7->SetMinimum(2.266893);
   Graph_x_1000_obs_graph7->SetMaximum(245.2144);
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
   230.25,
   40.625,
   19.6875,
   9.78125,
   6.84375,
   5.078125,
   3.328125,
   2.890625,
   2.632812,
   2.585938,
   2.617188,
   2.976562,
   3.515625,
   4.125,
   4.765625,
   6.171875,
   8.46875};
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
   Graph_x_1000_exp_graph8->SetMinimum(2.327344);
   Graph_x_1000_exp_graph8->SetMaximum(253.0164);
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
   322.1134,
   52.22513,
   26.34701,
   13.62216,
   9.721676,
   7.322608,
   5.426646,
   4.824745,
   4.65573,
   4.819589,
   5.297735,
   7.678438,
   10.34414,
   13.32028,
   16.52771,
   23.7215,
   36.07428};
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
   Graph_x_300_expDn_graph9->SetMinimum(4.190157);
   Graph_x_300_expDn_graph9->SetMaximum(353.8592);
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
      tex = new TLatex(0.175,0.235,"B-Lepton");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.065);
   tex->SetLineWidth(2);
   tex->Draw();
   x_slice_canvas->Modified();
   x_slice_canvas->cd();
   x_slice_canvas->SetSelected(x_slice_canvas);
}
