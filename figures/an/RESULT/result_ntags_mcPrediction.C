void plot()
{
//=========Macro generated from canvas: plot/plot
//=========  (Sat Jan 23 14:44:21 2016) by ROOT version6.02/05
   TCanvas *plot = new TCanvas("plot", "plot",20,42,920,1040);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   plot->SetHighLightColor(2);
   plot->Range(0,0,1,1);
   plot->SetFillColor(0);
   plot->SetBorderMode(0);
   plot->SetBorderSize(2);
   plot->SetTickx(1);
   plot->SetTicky(1);
   plot->SetLeftMargin(0.15);
   plot->SetRightMargin(0.15);
   plot->SetBottomMargin(0.2);
   plot->SetFrameFillStyle(0);
   plot->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "The pad 80% of the height",0,0.4,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.6,-7.71997,6.4,1.279353);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.2);
   pad1->SetRightMargin(0.05);
   pad1->SetBottomMargin(0);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   
   TH1F *tree_QCD_50_80mm_jets1 = new TH1F("tree_QCD_50_80mm_jets1"," QCD50_80",6,0,6);
   tree_QCD_50_80mm_jets1->SetBinContent(1,0.997164);
   tree_QCD_50_80mm_jets1->SetBinContent(2,0.002835977);
   tree_QCD_50_80mm_jets1->SetBinContent(3,3.811185e-08);
   tree_QCD_50_80mm_jets1->SetBinError(1,0.03056561);
   tree_QCD_50_80mm_jets1->SetBinError(2,0.0005566445);
   tree_QCD_50_80mm_jets1->SetBinError(3,3.811185e-08);
   tree_QCD_50_80mm_jets1->SetEntries(148836);
   tree_QCD_50_80mm_jets1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 974;
   color = new TColor(ci, 0.4, 0.2, 0.6, " ", 0.6);
   tree_QCD_50_80mm_jets1->SetFillColor(ci);
   tree_QCD_50_80mm_jets1->SetFillStyle(3001);

   ci = TColor::GetColor("#663399");
   tree_QCD_50_80mm_jets1->SetLineColor(ci);
   tree_QCD_50_80mm_jets1->SetLineWidth(2);

   ci = TColor::GetColor("#663399");
   tree_QCD_50_80mm_jets1->SetMarkerColor(ci);
   tree_QCD_50_80mm_jets1->SetMarkerStyle(25);
   tree_QCD_50_80mm_jets1->SetMarkerSize(1.3);
   tree_QCD_50_80mm_jets1->GetXaxis()->SetLabelFont(42);
   tree_QCD_50_80mm_jets1->GetXaxis()->SetLabelSize(0.05);
   tree_QCD_50_80mm_jets1->GetXaxis()->SetTitleSize(0.06);
   tree_QCD_50_80mm_jets1->GetXaxis()->SetTitleFont(42);
   tree_QCD_50_80mm_jets1->GetYaxis()->SetTitle("N Jets");
   tree_QCD_50_80mm_jets1->GetYaxis()->SetLabelFont(42);
   tree_QCD_50_80mm_jets1->GetYaxis()->SetLabelSize(0.06);
   tree_QCD_50_80mm_jets1->GetYaxis()->SetTitleSize(0.1);
   tree_QCD_50_80mm_jets1->GetYaxis()->SetTitleOffset(0.8);
   tree_QCD_50_80mm_jets1->GetYaxis()->SetTitleFont(42);
   tree_QCD_50_80mm_jets1->GetZaxis()->SetLabelFont(42);
   tree_QCD_50_80mm_jets1->GetZaxis()->SetLabelSize(0.05);
   tree_QCD_50_80mm_jets1->GetZaxis()->SetTitleSize(0.06);
   tree_QCD_50_80mm_jets1->GetZaxis()->SetTitleFont(42);
   tree_QCD_50_80mm_jets1->Draw("hist e0");
   
   TH1F *tree_XXTo4J_500_10mm_jets2 = new TH1F("tree_XXTo4J_500_10mm_jets2"," XX4J m_{X}=300GeV c#tau=10mm  ",6,0,6);
   tree_XXTo4J_500_10mm_jets2->SetBinContent(1,0.2229285);
   tree_XXTo4J_500_10mm_jets2->SetBinContent(2,0.2737817);
   tree_XXTo4J_500_10mm_jets2->SetBinContent(3,0.2868295);
   tree_XXTo4J_500_10mm_jets2->SetBinContent(4,0.1437493);
   tree_XXTo4J_500_10mm_jets2->SetBinContent(5,0.06200513);
   tree_XXTo4J_500_10mm_jets2->SetBinContent(6,0.01070592);
   tree_XXTo4J_500_10mm_jets2->SetBinContent(7,0.0011152);
   tree_XXTo4J_500_10mm_jets2->SetBinError(1,0.00498608);
   tree_XXTo4J_500_10mm_jets2->SetBinError(2,0.005525589);
   tree_XXTo4J_500_10mm_jets2->SetBinError(3,0.005655725);
   tree_XXTo4J_500_10mm_jets2->SetBinError(4,0.004003864);
   tree_XXTo4J_500_10mm_jets2->SetBinError(5,0.002629603);
   tree_XXTo4J_500_10mm_jets2->SetBinError(6,0.001092669);
   tree_XXTo4J_500_10mm_jets2->SetBinError(7,0.0003526573);
   tree_XXTo4J_500_10mm_jets2->SetEntries(8977);
   tree_XXTo4J_500_10mm_jets2->SetStats(0);
   tree_XXTo4J_500_10mm_jets2->SetFillStyle(0);

   ci = TColor::GetColor("#9999ff");
   tree_XXTo4J_500_10mm_jets2->SetLineColor(ci);
   tree_XXTo4J_500_10mm_jets2->SetLineWidth(2);

   ci = TColor::GetColor("#9999ff");
   tree_XXTo4J_500_10mm_jets2->SetMarkerColor(ci);
   tree_XXTo4J_500_10mm_jets2->GetXaxis()->SetLabelFont(42);
   tree_XXTo4J_500_10mm_jets2->GetXaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_10mm_jets2->GetXaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_10mm_jets2->GetXaxis()->SetTitleFont(42);
   tree_XXTo4J_500_10mm_jets2->GetYaxis()->SetLabelFont(42);
   tree_XXTo4J_500_10mm_jets2->GetYaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_10mm_jets2->GetYaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_10mm_jets2->GetYaxis()->SetTitleFont(42);
   tree_XXTo4J_500_10mm_jets2->GetZaxis()->SetLabelFont(42);
   tree_XXTo4J_500_10mm_jets2->GetZaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_10mm_jets2->GetZaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_10mm_jets2->GetZaxis()->SetTitleFont(42);
   tree_XXTo4J_500_10mm_jets2->Draw("hist same");
   
   TH1F *tree_XXTo4J_500_30mm_jets3 = new TH1F("tree_XXTo4J_500_30mm_jets3"," XX4J m_{X}=300GeV c#tau=30mm  ",6,0,6);
   tree_XXTo4J_500_30mm_jets3->SetBinContent(1,0.08825152);
   tree_XXTo4J_500_30mm_jets3->SetBinContent(2,0.2033094);
   tree_XXTo4J_500_30mm_jets3->SetBinContent(3,0.3252068);
   tree_XXTo4J_500_30mm_jets3->SetBinContent(4,0.2226145);
   tree_XXTo4J_500_30mm_jets3->SetBinContent(5,0.1343629);
   tree_XXTo4J_500_30mm_jets3->SetBinContent(6,0.02625483);
   tree_XXTo4J_500_30mm_jets3->SetBinContent(7,0.002647545);
   tree_XXTo4J_500_30mm_jets3->SetBinError(1,0.003120162);
   tree_XXTo4J_500_30mm_jets3->SetBinError(2,0.004735816);
   tree_XXTo4J_500_30mm_jets3->SetBinError(3,0.005989574);
   tree_XXTo4J_500_30mm_jets3->SetBinError(4,0.00495556);
   tree_XXTo4J_500_30mm_jets3->SetBinError(5,0.003849957);
   tree_XXTo4J_500_30mm_jets3->SetBinError(6,0.001701848);
   tree_XXTo4J_500_30mm_jets3->SetBinError(7,0.000540428);
   tree_XXTo4J_500_30mm_jets3->SetEntries(9089);
   tree_XXTo4J_500_30mm_jets3->SetStats(0);
   tree_XXTo4J_500_30mm_jets3->SetFillStyle(0);

   ci = TColor::GetColor("#ff9999");
   tree_XXTo4J_500_30mm_jets3->SetLineColor(ci);
   tree_XXTo4J_500_30mm_jets3->SetLineWidth(2);

   ci = TColor::GetColor("#ff9999");
   tree_XXTo4J_500_30mm_jets3->SetMarkerColor(ci);
   tree_XXTo4J_500_30mm_jets3->GetXaxis()->SetLabelFont(42);
   tree_XXTo4J_500_30mm_jets3->GetXaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_30mm_jets3->GetXaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_30mm_jets3->GetXaxis()->SetTitleFont(42);
   tree_XXTo4J_500_30mm_jets3->GetYaxis()->SetLabelFont(42);
   tree_XXTo4J_500_30mm_jets3->GetYaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_30mm_jets3->GetYaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_30mm_jets3->GetYaxis()->SetTitleFont(42);
   tree_XXTo4J_500_30mm_jets3->GetZaxis()->SetLabelFont(42);
   tree_XXTo4J_500_30mm_jets3->GetZaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_30mm_jets3->GetZaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_30mm_jets3->GetZaxis()->SetTitleFont(42);
   tree_XXTo4J_500_30mm_jets3->Draw("hist same");
   
   TH1F *tree_XXTo4J_500_1000mm_jets4 = new TH1F("tree_XXTo4J_500_1000mm_jets4"," XX4J m_{X}=300GeV c#tau=1000mm ",6,0,6);
   tree_XXTo4J_500_1000mm_jets4->SetBinContent(1,0.4184373);
   tree_XXTo4J_500_1000mm_jets4->SetBinContent(2,0.2673064);
   tree_XXTo4J_500_1000mm_jets4->SetBinContent(3,0.2159013);
   tree_XXTo4J_500_1000mm_jets4->SetBinContent(4,0.07453735);
   tree_XXTo4J_500_1000mm_jets4->SetBinContent(5,0.02004798);
   tree_XXTo4J_500_1000mm_jets4->SetBinContent(6,0.003769705);
   tree_XXTo4J_500_1000mm_jets4->SetBinError(1,0.008467546);
   tree_XXTo4J_500_1000mm_jets4->SetBinError(2,0.006767792);
   tree_XXTo4J_500_1000mm_jets4->SetBinError(3,0.00608233);
   tree_XXTo4J_500_1000mm_jets4->SetBinError(4,0.003573793);
   tree_XXTo4J_500_1000mm_jets4->SetBinError(5,0.001853436);
   tree_XXTo4J_500_1000mm_jets4->SetBinError(6,0.0008037039);
   tree_XXTo4J_500_1000mm_jets4->SetEntries(5836);
   tree_XXTo4J_500_1000mm_jets4->SetStats(0);
   tree_XXTo4J_500_1000mm_jets4->SetFillStyle(0);

   ci = TColor::GetColor("#990000");
   tree_XXTo4J_500_1000mm_jets4->SetLineColor(ci);
   tree_XXTo4J_500_1000mm_jets4->SetLineWidth(2);

   ci = TColor::GetColor("#990000");
   tree_XXTo4J_500_1000mm_jets4->SetMarkerColor(ci);
   tree_XXTo4J_500_1000mm_jets4->GetXaxis()->SetLabelFont(42);
   tree_XXTo4J_500_1000mm_jets4->GetXaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_1000mm_jets4->GetXaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_1000mm_jets4->GetXaxis()->SetTitleFont(42);
   tree_XXTo4J_500_1000mm_jets4->GetYaxis()->SetLabelFont(42);
   tree_XXTo4J_500_1000mm_jets4->GetYaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_1000mm_jets4->GetYaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_1000mm_jets4->GetYaxis()->SetTitleFont(42);
   tree_XXTo4J_500_1000mm_jets4->GetZaxis()->SetLabelFont(42);
   tree_XXTo4J_500_1000mm_jets4->GetZaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_1000mm_jets4->GetZaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_1000mm_jets4->GetZaxis()->SetTitleFont(42);
   tree_XXTo4J_500_1000mm_jets4->Draw("hist same");
   
   TH1F *tree_XXTo4J_500_3mm_jets5 = new TH1F("tree_XXTo4J_500_3mm_jets5"," XX4J m_{X}=300GeV c#tau=3mm  ",6,0,6);
   tree_XXTo4J_500_3mm_jets5->SetBinContent(1,0.52053);
   tree_XXTo4J_500_3mm_jets5->SetBinContent(2,0.2916424);
   tree_XXTo4J_500_3mm_jets5->SetBinContent(3,0.148078);
   tree_XXTo4J_500_3mm_jets5->SetBinContent(4,0.03217822);
   tree_XXTo4J_500_3mm_jets5->SetBinContent(5,0.006697729);
   tree_XXTo4J_500_3mm_jets5->SetBinContent(6,0.0008736168);
   tree_XXTo4J_500_3mm_jets5->SetBinContent(7,0.0001456028);
   tree_XXTo4J_500_3mm_jets5->SetBinError(1,0.008705781);
   tree_XXTo4J_500_3mm_jets5->SetBinError(2,0.006516437);
   tree_XXTo4J_500_3mm_jets5->SetBinError(3,0.004643337);
   tree_XXTo4J_500_3mm_jets5->SetBinError(4,0.002164541);
   tree_XXTo4J_500_3mm_jets5->SetBinError(5,0.0009875262);
   tree_XXTo4J_500_3mm_jets5->SetBinError(6,0.0003566526);
   tree_XXTo4J_500_3mm_jets5->SetBinError(7,0.0001456028);
   tree_XXTo4J_500_3mm_jets5->SetEntries(6869);
   tree_XXTo4J_500_3mm_jets5->SetStats(0);
   tree_XXTo4J_500_3mm_jets5->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   tree_XXTo4J_500_3mm_jets5->SetLineColor(ci);
   tree_XXTo4J_500_3mm_jets5->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   tree_XXTo4J_500_3mm_jets5->SetMarkerColor(ci);
   tree_XXTo4J_500_3mm_jets5->GetXaxis()->SetLabelFont(42);
   tree_XXTo4J_500_3mm_jets5->GetXaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_3mm_jets5->GetXaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_3mm_jets5->GetXaxis()->SetTitleFont(42);
   tree_XXTo4J_500_3mm_jets5->GetYaxis()->SetLabelFont(42);
   tree_XXTo4J_500_3mm_jets5->GetYaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_3mm_jets5->GetYaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_3mm_jets5->GetYaxis()->SetTitleFont(42);
   tree_XXTo4J_500_3mm_jets5->GetZaxis()->SetLabelFont(42);
   tree_XXTo4J_500_3mm_jets5->GetZaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_3mm_jets5->GetZaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_3mm_jets5->GetZaxis()->SetTitleFont(42);
   tree_XXTo4J_500_3mm_jets5->Draw("hist same");
   
   TH1F *tree_DATA_DisplacedJet_jets6 = new TH1F("tree_DATA_DisplacedJet_jets6"," Displaced PD Data",6,0,6);
   tree_DATA_DisplacedJet_jets6->SetBinContent(1,0.9961026);
   tree_DATA_DisplacedJet_jets6->SetBinContent(2,0.003897412);
   tree_DATA_DisplacedJet_jets6->SetBinError(1,0.001254965);
   tree_DATA_DisplacedJet_jets6->SetBinError(2,7.849967e-05);
   tree_DATA_DisplacedJet_jets6->SetEntries(632471);
   tree_DATA_DisplacedJet_jets6->SetStats(0);
   tree_DATA_DisplacedJet_jets6->SetFillStyle(0);
   tree_DATA_DisplacedJet_jets6->SetLineWidth(3);
   tree_DATA_DisplacedJet_jets6->SetMarkerStyle(8);
   tree_DATA_DisplacedJet_jets6->SetMarkerSize(1.3);
   tree_DATA_DisplacedJet_jets6->GetXaxis()->SetLabelFont(42);
   tree_DATA_DisplacedJet_jets6->GetXaxis()->SetLabelSize(0.05);
   tree_DATA_DisplacedJet_jets6->GetXaxis()->SetTitleSize(0.06);
   tree_DATA_DisplacedJet_jets6->GetXaxis()->SetTitleFont(42);
   tree_DATA_DisplacedJet_jets6->GetYaxis()->SetLabelFont(42);
   tree_DATA_DisplacedJet_jets6->GetYaxis()->SetLabelSize(0.05);
   tree_DATA_DisplacedJet_jets6->GetYaxis()->SetTitleSize(0.06);
   tree_DATA_DisplacedJet_jets6->GetYaxis()->SetTitleFont(42);
   tree_DATA_DisplacedJet_jets6->GetZaxis()->SetLabelFont(42);
   tree_DATA_DisplacedJet_jets6->GetZaxis()->SetLabelSize(0.05);
   tree_DATA_DisplacedJet_jets6->GetZaxis()->SetTitleSize(0.06);
   tree_DATA_DisplacedJet_jets6->GetZaxis()->SetTitleFont(42);
   tree_DATA_DisplacedJet_jets6->Draw("p same");
   
   TH1F *tree_XXTo4J_500_300mm_jets7 = new TH1F("tree_XXTo4J_500_300mm_jets7"," XX4J m_{X}=300GeV c#tau=300mm ",6,0,6);
   tree_XXTo4J_500_300mm_jets7->SetBinContent(1,0.1704698);
   tree_XXTo4J_500_300mm_jets7->SetBinContent(2,0.2640269);
   tree_XXTo4J_500_300mm_jets7->SetBinContent(3,0.2892618);
   tree_XXTo4J_500_300mm_jets7->SetBinContent(4,0.187651);
   tree_XXTo4J_500_300mm_jets7->SetBinContent(5,0.07248322);
   tree_XXTo4J_500_300mm_jets7->SetBinContent(6,0.01610738);
   tree_XXTo4J_500_300mm_jets7->SetBinContent(7,0.0005369128);
   tree_XXTo4J_500_300mm_jets7->SetBinError(1,0.004783498);
   tree_XXTo4J_500_300mm_jets7->SetBinError(2,0.005953137);
   tree_XXTo4J_500_300mm_jets7->SetBinError(3,0.006231138);
   tree_XXTo4J_500_300mm_jets7->SetBinError(4,0.00501877);
   tree_XXTo4J_500_300mm_jets7->SetBinError(5,0.003119181);
   tree_XXTo4J_500_300mm_jets7->SetBinError(6,0.001470396);
   tree_XXTo4J_500_300mm_jets7->SetBinError(7,0.0002684564);
   tree_XXTo4J_500_300mm_jets7->SetEntries(7454);
   tree_XXTo4J_500_300mm_jets7->SetStats(0);
   tree_XXTo4J_500_300mm_jets7->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   tree_XXTo4J_500_300mm_jets7->SetLineColor(ci);
   tree_XXTo4J_500_300mm_jets7->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   tree_XXTo4J_500_300mm_jets7->SetMarkerColor(ci);
   tree_XXTo4J_500_300mm_jets7->GetXaxis()->SetLabelFont(42);
   tree_XXTo4J_500_300mm_jets7->GetXaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_300mm_jets7->GetXaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_300mm_jets7->GetXaxis()->SetTitleFont(42);
   tree_XXTo4J_500_300mm_jets7->GetYaxis()->SetLabelFont(42);
   tree_XXTo4J_500_300mm_jets7->GetYaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_300mm_jets7->GetYaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_300mm_jets7->GetYaxis()->SetTitleFont(42);
   tree_XXTo4J_500_300mm_jets7->GetZaxis()->SetLabelFont(42);
   tree_XXTo4J_500_300mm_jets7->GetZaxis()->SetLabelSize(0.05);
   tree_XXTo4J_500_300mm_jets7->GetZaxis()->SetTitleSize(0.06);
   tree_XXTo4J_500_300mm_jets7->GetZaxis()->SetTitleFont(42);
   tree_XXTo4J_500_300mm_jets7->Draw("hist same");
   
   TLegend *leg = new TLegend(0.7423581,0.05797101,0.9323144,0.4779315,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("tree_XXTo4J_500_3mm_jets"," 3mm ","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tree_XXTo4J_500_10mm_jets"," 10mm ","pl");

   ci = TColor::GetColor("#9999ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#9999ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tree_XXTo4J_500_30mm_jets"," 30mm ","pl");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff9999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tree_XXTo4J_500_300mm_jets"," 300mm ","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tree_XXTo4J_500_1000mm_jets"," 1000mm ","pl");

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#990000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tree_QCD_50_80mm_jets"," QCD ","pl");

   ci = TColor::GetColor("#663399");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#663399");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.3);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tree_DATA_DisplacedJet_jets"," Data ","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1.3);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.95,0.912,"2.52 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.066);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.912,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.0825);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23375,0.912,"         Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0627);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1->Modified();
   plot->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "The pad 20% of the height",0,0,1,0.4);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.6,-1.669082,6.4,0.6640316);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetGridy();
   pad2->SetTickx(1);
   pad2->SetTicky(1);
   pad2->SetLeftMargin(0.2);
   pad2->SetRightMargin(0.05);
   pad2->SetTopMargin(0);
   pad2->SetBottomMargin(0.4);
   pad2->SetFrameFillStyle(0);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameFillStyle(0);
   pad2->SetFrameBorderMode(0);
   
   TH1F *tree_QCD_50_80mm_jets8 = new TH1F("tree_QCD_50_80mm_jets8"," QCD50_80",6,0,6);
   tree_QCD_50_80mm_jets8->SetBinContent(1,0.001064458);
   tree_QCD_50_80mm_jets8->SetBinContent(2,-0.3742751);
   tree_QCD_50_80mm_jets8->SetBinContent(3,1);
   tree_QCD_50_80mm_jets8->SetBinError(1,0.03067838);
   tree_QCD_50_80mm_jets8->SetBinError(2,0.2113969);
   tree_QCD_50_80mm_jets8->SetBinError(3,1.414214);
   tree_QCD_50_80mm_jets8->SetMinimum(-0.7358366);
   tree_QCD_50_80mm_jets8->SetMaximum(0.6640316);
   tree_QCD_50_80mm_jets8->SetEntries(0.1920509);
   tree_QCD_50_80mm_jets8->SetStats(0);

   ci = 974;
   color = new TColor(ci, 0.4, 0.2, 0.6, " ", 0.6);
   tree_QCD_50_80mm_jets8->SetFillColor(ci);
   tree_QCD_50_80mm_jets8->SetFillStyle(3001);
   tree_QCD_50_80mm_jets8->SetLineWidth(2);

   ci = TColor::GetColor("#663399");
   tree_QCD_50_80mm_jets8->SetMarkerColor(ci);
   tree_QCD_50_80mm_jets8->SetMarkerStyle(25);
   tree_QCD_50_80mm_jets8->SetMarkerSize(1.3);
   tree_QCD_50_80mm_jets8->GetXaxis()->SetTitle("Jet N Tags");
   tree_QCD_50_80mm_jets8->GetXaxis()->SetLabelFont(42);
   tree_QCD_50_80mm_jets8->GetXaxis()->SetLabelSize(0.1);
   tree_QCD_50_80mm_jets8->GetXaxis()->SetTitleSize(0.11);
   tree_QCD_50_80mm_jets8->GetXaxis()->SetTitleOffset(1.15);
   tree_QCD_50_80mm_jets8->GetXaxis()->SetTitleFont(42);
   tree_QCD_50_80mm_jets8->GetYaxis()->SetTitle("(MC-DATA)/MC");
   tree_QCD_50_80mm_jets8->GetYaxis()->SetLabelFont(42);
   tree_QCD_50_80mm_jets8->GetYaxis()->SetLabelSize(0.07);
   tree_QCD_50_80mm_jets8->GetYaxis()->SetTitleSize(0.1);
   tree_QCD_50_80mm_jets8->GetYaxis()->SetTitleOffset(0.8);
   tree_QCD_50_80mm_jets8->GetYaxis()->SetTitleFont(42);
   tree_QCD_50_80mm_jets8->GetZaxis()->SetLabelFont(42);
   tree_QCD_50_80mm_jets8->GetZaxis()->SetLabelSize(0.05);
   tree_QCD_50_80mm_jets8->GetZaxis()->SetTitleSize(0.06);
   tree_QCD_50_80mm_jets8->GetZaxis()->SetTitleFont(42);
   tree_QCD_50_80mm_jets8->Draw("e1");
   pad2->Modified();
   plot->cd();
   plot->Modified();
   plot->cd();
   plot->SetSelected(plot);
}
